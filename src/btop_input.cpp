/* Copyright 2021 Aristocratos (jakob@qvantnet.com)

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.

indent = tab
tab-size = 4
*/

#include <string>
#include <robin_hood.h>
#include <iostream>

#include <btop_input.hpp>
#include <btop_tools.hpp>
#include <btop_config.hpp>
#include <btop_shared.hpp>

using std::string, robin_hood::unordered_flat_map, std::cin, std::string_literals::operator""s;
using namespace Tools;

namespace Input {
	namespace {
		//* Map for translating key codes to readable values
		const unordered_flat_map<string, string> Key_escapes = {
			{"\033",	"escape"},
			{"\n",		"enter"},
			{" ",		"space"},
			{"\x7f",	"backspace"},
			{"\x08",	"backspace"},
			{"[A", 		"up"},
			{"OA",		"up"},
			{"[B", 		"down"},
			{"OB",		"down"},
			{"[D", 		"left"},
			{"OD",		"left"},
			{"[C", 		"right"},
			{"OC",		"right"},
			{"[2~",		"insert"},
			{"[3~",		"delete"},
			{"[H",		"home"},
			{"[F",		"end"},
			{"[5~",		"page_up"},
			{"[6~",		"page_down"},
			{"\t",		"tab"},
			{"[Z",		"shift_tab"},
			{"OP",		"f1"},
			{"OQ",		"f2"},
			{"OR",		"f3"},
			{"OS",		"f4"},
			{"[15~",	"f5"},
			{"[17~",	"f6"},
			{"[18~",	"f7"},
			{"[19~",	"f8"},
			{"[20~",	"f9"},
			{"[21~",	"f10"},
			{"[23~",	"f11"},
			{"[24~",	"f12"}
		};
	}

	std::atomic<bool> interrupt (false);

	string last = "";

	bool poll(int timeout){
		if (timeout < 1) return cin.rdbuf()->in_avail() > 0;
		while (timeout > 0) {
			if (cin.rdbuf()->in_avail() > 0) return true;
			if (interrupt) { interrupt = false; return false; }
			sleep_ms(timeout < 10 ? timeout : 10);
			timeout -= 10;
		}
		return false;
	}

	string get(){
		string key;
		while (cin.rdbuf()->in_avail() > 0 and key.size() < 100) key += cin.get();
		if (not key.empty()){
			if (key.substr(0,2) == Fx::e) key.erase(0, 1);
			if (Key_escapes.contains(key)) key = Key_escapes.at(key);
			else if (ulen(key) > 1) key = "";
			last = key;
		}
		return key;
	}

	string wait(){
		while (cin.rdbuf()->in_avail() < 1) {
			if (interrupt) { interrupt = false; return ""; }
			sleep_ms(10);
		}
		return get();
	}

	void clear(){
		last.clear();
	}

	void process(const string key){
		if (key.empty()) return;
		try {
			auto& filtering = Config::getB("proc_filtering");
			if (not filtering and key == "q") clean_quit(0);
			bool recollect = true;
			bool redraw = true;

			//* Input actions for proc
			if (Proc::shown) {
				bool keep_going = false;
				if (filtering) {
					string filter = Config::getS("proc_filter");
					if (key == "enter") Config::set("proc_filtering", false);
					else if (key == "backspace" and not filter.empty()) filter = uresize(filter, ulen(filter) - 1);
					else if (key == "space") filter.push_back(' ');
					else if (ulen(key) == 1) filter.append(key);
					else return;
					Config::set("proc_filter", filter);
				}
				else if (key == "left") {
					int cur_i = v_index(Proc::sort_vector, Config::getS("proc_sorting"));
					if (--cur_i < 0) cur_i = Proc::sort_vector.size() - 1;
					Config::set("proc_sorting", Proc::sort_vector.at(cur_i));
				}
				else if (key == "right") {
					int cur_i = v_index(Proc::sort_vector, Config::getS("proc_sorting"));
					if (++cur_i > (int)Proc::sort_vector.size() - 1) cur_i = 0;
					Config::set("proc_sorting", Proc::sort_vector.at(cur_i));
				}
				else if (key == "f") { Config::flip("proc_filtering"); recollect = false; }
				else if (key == "t") Config::flip("proc_tree");
				else if (key == "r") Config::flip("proc_reversed");
				else if (key == "c") Config::flip("proc_per_core");
				else if (key == "delete" and not Config::getS("proc_filter").empty()) Config::set("proc_filter", ""s);
				else if (is_in(key, "up", "down", "page_up", "page_down", "home", "end")) {
					Proc::selection(key);
					recollect = false;
					redraw = false;
				}
				else keep_going = true;

				if (not keep_going) {
					Runner::run("proc", not recollect, redraw);
					return;
				}
			}
		}


		catch (const std::exception& e) {
			throw std::runtime_error("Input::process(\"" + key + "\") : " + (string)e.what());
		}
	}

}