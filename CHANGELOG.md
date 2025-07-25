## v1.4.4

References | Description | Author(s)
--- | --- | ---
#1185 | Fix auto-detection of CPU temp on Ampere boards | @bexcran
589c133 | Fixed floating_humanizer() to work correctly when numeric delimiter isn't a dot. | @aristocratos
#1157 | Add command line option to set an inital filter | @imwints
#1172 | Make 100ms the minimal refresh rate. Exit gracefully if integer conversion in CLI parser fails. | @imwints
#1031 | Lock/unlock config to avoid infinite recursion | @Jacajack
#1156 | Fix incorrect positioning and start symbol of second title introduced in 2538d89 | @xDMPx
ffcd064 | Fix dangling reference warnings for GCC 13 and later | aristocratos

## v1.4.3

References | Description | Author(s)
--- | --- | ---
c3b225f | Revert e266ccd which broke str_to_upper() and str_to_lower() | @aristocratos
#1137 | Enable additional checks in libc++ with the new hardening mode | @imwints
#1135 | Remove redundant optimization flag | @imwints
#1139 | Ignore incomplete filter regex, issue #1133 | @imwints

## v1.4.2

References | Description | Author(s)
--- | --- | ---
f1482fe | Fix process arguments appearing outside proc box by replacing ASCII control codes with blankspace, issue #1080 | @aristocratos
#1130 | Fix problems shown by clang-tidy's performance checks | @imwints
#1120 | Fix wrong error message and documentation of renamed option --utf-force | @t-webber @imwints
#1128 | Flatten cmake module path | @imwints
#1129 | CMake: Remove option to use mold  | @imwints
#1047 | Update Terminus font link, fix typo, spelling, and grammar | @QinCai-rui
#929 | Please clang with sanitizers | @bad-co-de
#1126 | Fix MacOS tree-mode + aggregate memory/thread scaling issue | @xaskii
#993 | Fix typo: Mhz -> MHz | @NyCodeGHG

## v1.4.1

References | Description | Author(s)
--- | --- | ---
#1111 #1112 | Various code fixes | @imwints
#930 #931 | Various code fixes | @bad-co-de
#1061 | Fixed typo | @polluks
#1110 | Move the config parser in it's own module  | @imwints
#1101 | Adding a menu option to show bitrates in base 10 separate from the setting to show bytes/bits in base 10 | @georgev93
#1079 | Allow MidnightBSD to build btop using the existing freebsd support. | @laffer1
#1098 | Use XDG_STATE_HOME to save logs | @imwints
#1092 | Bump CMake version to 3.25 required for LINUX variable | @imwints
#1058 | Replace brackets with arrows in net and proc box | @taha-yassine
#1091 | Bump bundled fmt to 11.1.4 | @imwints
#725 | cmake:  link to CMAKE_DL_LIBS | @alalazo
#990 | Fix phoenix-night.theme marked as executable | @sertonix
#1034 | Add Kanagawa-lotus and Kanagawa-wave themes | @philikarus
#973 | Bump NetBSD version to 10.1 and FreeBSD version to 14.2. | @fraggerfox
#1072 | Add dark version of adwaita theme: adwaita-dark | @k0tran
#1036 | Resetting last selection on page navigation in optionsMenu to avoid unordered_map error | @seth-wood
#1029 | Share the CPU name trimming code between platforms | @yarrick
#1033 | Update Ryzen name trimming | @yarrick
#1030 | Drop macos 12 build, add v14 and v15 | @yarrick
#1028 | Fix cmake-macos workflow | @yarrick
#1027 | Bump version of deprecated upload-artifact step | @yarrick
#1025 | Update obsolete egrep call | @tywkeene
b52069c | Fix menu crash when GPU_SUPPORT=false, issue #989 | @aristocratos
#961 | Add 'Everforest Ligth Medium' theme | @mstuttgart
#960 | Support intel GPUs before Gen-6 (patch from upstream) | @w8jcik
#958 | intel_name_lookup_shim.c (get_intel_device_name): Fix SEGFAULT | @artyom-poptsov
2e7208d | Fix rsmi_measure_pcie_speeds not saving, issue #934 | @aristocratos
f3446ed | Show GPU Watt fractions when below 100W | @aristocratos

| + more from @imwints @aristocratos

Big thanks to @imwints for helping out with project maintenance, PR reviews and merging!

## v1.4.0

References | Description | Author(s)
--- | --- | ---
#703 | NetBSD Support | @fraggerfox
#903 | Intel GPU support | @bjia56
161e8f4 | Added warnings when toggling boxes and terminal size is to small | @aristocratos
4210f5f | Fix missing core percentages, issue #792 | @aristocratos
35857f8 | Various fixes for drawing GPU related information | @aristocratos
#879 | fix divide 0 error when caculating disk usage percentage (#791) | @flylai
#884 | fix io_graph_speeds parsing | @feihtthief
#863 | V1 of Phoenix Night theme | @Firehawke
3f384c0 | Fixed missing CPU core temps when too small to show core temp graphs, issues #792 #867 | @aristocratos
97d2fb5 | Fixed missing IO graphs in IO mode, issue #867 | @aristocratos
#840 | fix zero temp (#467) | @joske
#850 | Fix comments (parsing) in theme files | @acidghost
#806 | Add regex filtering | @imwints
#836 | Fix typo in file existences check for voltage_now | @vsey
#835 | Show time in days when remaining battery exceeds an estimation of 24h | @imwints
#819 | (AMD Gpu) fix pwr_usage not being defined correctly during rsmi collection | @kalkafox
#831 | macOS: fix crash if there exists a uid not associated with any user | @thecoder-001
#796 | Fix rsmi device name buffer size | @davc0n
#807 | Add gruvbox_light theme | @kk9uk
#724 | Create man page for btop in Markdown | @ottok
#734 | Include metadata in binary version output `btop --version` | @imwints
#771 | collect: Fix reading of battery power draw on Linux | @Derppening

## v1.3.2

Description | Author(s) | References
--- | --- | ---
fix: Can't detect librocm 6.0.x | @imwints, @aristocratos | #761

## v1.3.1

Description | Author(s) | References
--- | --- | ---
GPU: Added support for dynamic loading of ROCm v6 libraries | @aristocratos, @fxzjshm | 5511131, #737
Increase max network interface name to 15 | @tessus | #714
Fix OpenBSD UTF-8 locale detection | @lcheylus, @imwints | #753, #717
Add hot-reloading of config file with CTRL+R or SIGUSR2 signal | @MartinPit | #722
Add battery power draw for linux and freebsd | @vsey | #689
Fix crash caused by string exception when cpu clock is exactly between 999.5 and 999.9 Mhz | @rkmcode | #735
Write newline at end of config file | @planet36 | #743
Add theme based on Everforest Dark Medium palette | @M-Sviridov | #746
fix: don't mangle memory for zombie processes | @joske | #747
Share common code from collect | @imwints | #756
Fixed incorrect used and available memory for OSX | | 4461a43

## v1.3.0

* Added Gpu Support Linux | @romner-set | PR #529

* Added platform support for OpenBSD | @joske | PR #607

* Enable macos clang | @muneebmahmed | PR #666

* Fix Apple Silicon CPUs misprinted | @masiboss | PR #679

* Cmake support for MacOS | @imwints | PR #675

* Elementarish theme: color update according to Elementary palette | @stradicat | PR #660

* Add alternative key codes for Delete, Insert, Home, End | @ivanp7 | PR #659

* Fix scrollbar not clearing sometimes. | @DecklynKern | PR #643

* Add keybind for toggling memory display mode in PROC box | @rahulaggarwal965 | PR #623

* Minor string initialization improvement | @imwints | PR #636

* Made disks statvfs logic asynchronous. | @crestfallnatwork | PR #633

* Fix signal list on non-linux/weird linux platforms | @lvxnull | PR #630

* Add option to accumulate a child's resources in parent in tree-view | @imwints | PR #618

* Add CMake support for Linux | @imwints | PR #589

* Horizon theme | @SidVeld | PR #610

* Fix short conversion of 1000-1023 *iB | @scorpion-26 | #609

* Fix integer overflows in btop_collect.cpp | @dorrellmw | #546

* Support compiling with LLVM | @imwints | #510

* Fix getting zfs pool name with '.' char in freebsd | @jfouquart | #602

* [macos/freebsd] support gcc13 | @joske | #600

* FreeBSD swap info | @rrveex | #560

* Create adwaita.theme | @flipflop133 | #485

* Try get terminal size of "/dev/tty" if stdout fails | @imwints | PR #627

* Refresh rate program argument | @imwints | PR #640

* Improved error handling when determining the config directory | @imwints | #652

* Use native POSIX polling syscalls to read input | @lvxnull | #624

* Conditional compile on Big Sur and up | @joske | PR #690

+ Various fixes by @imwints, @simplepad, @joske, @gwena, @cpalv, @iambeingtracked, @mattico, @NexAdn

## v1.2.13

* Makefile: VERBOSE=true flag for Makefile to display all compiler commands and fixed so already set CXXFLAGS and LDFLAGS are displayed.

* Makefile: Added autodetection for gcc12 to make compiling on macos Ventura easier.

* Changed: Reverted back to sysconf(_SC_NPROCESSORS_ONLN) for Cpu core count ant let the new dynamic update fix if cores are turned on later

* Fixed: Ignore disks that fails in statvfs64() to avoid slowdowns and possible crashes.

* Fixed: Moved up get_cpuHz() in the execution order to get better cpu clock reading.

* Added: proc tree view: if there's more than 40 width left, try to print full cmd, by @Superty

* Fixed: Show the first IP of the interface in NET box instead of the last, by @correabuscar

* Changed: Replace getnameinfo with inet_ntop [on Linux], by @correabuscar

* Fixed: Not picking up last username from /etc/passwd

* Fixed: Process nice value underflowing, issue #461

* Changed: Replace getnameinfo with inet_ntop [on FreeBSD], by @correabuscar

* Changed: Replace getnameinfo with inet_ntop [on macos], by @correabuscar

## v1.2.12

* Added: Dynamic updating of max number of CPU cores.

## v1.2.11

* Fixed: Number of cores wrongly detected for Ryzen in rare cases.

## v1.2.10

* Fixed: Process tree filtering not case insensitive

* Added: Paper theme, by @s6muel

* Fixed: Extra checks to avoid crash on trying to replace empty strings in tree mode

* Fixed: Crashing when cores are offline

* Fixed: Cpu::collect() core count counter...

* Changed: Using sysconf(_SC_NPROCESSORS_CONF) for number of cores instead of sysconf(_SC_NPROCESSORS_ONLN)

* Maintenance: Code cleanup, by @stefanos82

## v1.2.9

* Fixed: Memory values not clearing properly when not in graph mode in mem box

* Changed: kyli0x theme color update, by @kyli0x

* Added: Elementarish theme, by @dennismayr

* Added: key "?" to see help, by @mohi001

* Added: solarized_light theme, by @Fingerzam

* Changed: Made ZFS stats collection compatible with zfs_pools_only option, by @simplepad

* Changed: Rewrite of process sorting and tree generation including fixes for tree sorting and mouse support

* Added: Option to hide the small cpu graphs for processes

* Changed: Small graphs now show colors for each character

* Fixed: Getting selfpath on macos (fix for finding theme folder)

## v1.2.8

* Added: Support for ZFS pool io stats monitoring, by @simplepad

* Added: Filtering of kernel processes, by @0xJoeMama

* Added: New theme everforest-dark-hard, by @iambeingtracked

* Added: New theme tomorrow-night, by @appuchias

* Changed: Disable battery monitoring if it fails instead of exiting

## v1.2.7

* Fixed: Disk IO stats for individual partitions instead of whole disk (Linux)

* Added: Case insensitive process filtering, by @abrasumente233

* Added: Include ZFS ARC in cached/available memory on Linux, by @mattico

* Added: Desktop entry and icons, by @yonatan8070

* Fixed: Net sync scale bug

* Added: tokyo-night & tokyo-storm themes, by @Schievel1

## v1.2.6

* Fixed: Wrong memory unit when shorten and size is less than 10, by @mohi001

* Fixed: Use cpu cores average temp if missing cpu package temp for FreeBSD

* Changed: Enter symbol to a more common variant

## v1.2.5

* Fixed: Fallback to less accurate UTF8 char count if conversion to wstring fails

* Fixed: Small ui fixes for mem and disks

* Added: New theme HotPurpleTrafficLight, by @pallebone

* Fixed: title_left symbol between auto and zero in the net box is not displayed, by @mrdotx

* Fixed: Mouse mappings for net box

## v1.2.4

* Optimization: Proc::draw()

* Fixed: Ignore duplicate disks with same mountpoint

* Changed: Restrict command line for processes to 1000 characters to fix utf8 conversion errors

* Added: add "g" and "G" to vim keys, by @mohi001

## v1.2.3

* Changed: floating_humanizer() now show fractions when shortened and value is < 10

* Fixed: Process tree not redrawing properly

* Fixed: string to wstring conversion crash when string is too big

## v1.2.2

* Changed: Reverted uncolor() back to using regex to fix delay in opening menu when compiled with musl

* Added: Toggle for showing free disk space for privileged or normal users

* Added: Clarification on signal screen that number can be manually entered

## v1.2.1

* Added: Arrow only after use of "f" when filtering processes, by @NavigationHazard

* Fixed: Fx::uncolor not removing all escapes

* Fixed: Text alignment for popup boxes

* Fixed: Terminal resize warning getting stuck

* Removed: Unnecessary counter for atomic_lock

* Added: Percentage progress to Makefile

* Fixed: Alignment of columns in proc box when wide UTF8 characters are used

* Fixed: Battery meter draw fix

## v1.2.0

* Added: Support for FreeBSD, by @joske and @aristocratos

* Fixed (again): Account for system rolling over net speeds in Net::collect()

* Added: Theme gruvbox_material_dark, by @marcoradocchia

* Added: Option for base 10 bytes/bits

## v1.1.5

* Fixed: Account for system rolling over net speeds in Net::collect()

## v1.1.4

* Fixed: Create dependency files in build directory when compiling, by @stwnt

* Fixed: fix CPU temp fallback on macOS, by @joske

* Changed: From rng::sort() to rng::stable_sort() for more stability

* Fixed: in_avail() can always be zero, by @pg83

## v1.1.3

* Added: New theme ayu, by @AlphaNecron

* Added: New theme gruvbox_dark_v2, by @pietryszak

* Fixed: Macos cpu coretemp for Intel, by @joske

* Added: New theme OneDark, by @vtmx

* Fixed: Fixed network graph scale int rollover

* Fixed: Suspected possibility of very rare stall in Input::clear()

## v1.1.2

* Fixed: SISEGV on macos Mojave, by @mgradowski

* Fixed: Small optimizations and fixes to Mem::collect() and Input::get()

* Fixed: Wrong unit for net_upload and net_download in config menu

* Fixed: UTF-8 detection on macos

* Fixed: coretemp iteration due to missing tempX_input, by @KFilipek

* Fixed: coretemp ordering

## v1.1.1

* Added: Partial static build (libgcc, libstdc++) for macos

* Changed: Continuous build macos switched to OSX 11.6 (Big Sur) and partial static build

* Changed: Release binaries for macos switched to OSX 12 (Monterey) and partial static build

## v1.1.0

* Added: Support for OSX, by @joske and @aristocratos

## v1.0.24

* Changed: Collection ordering

* Fixed: Restore all escape seq mouse modes on exit

* Fixed: SIGINT not cleaning up on exit

## v1.0.23

* Fixed: Config parser missing first value when not including version header

* Fixed: Vim keys menu lists selection

* Fixed: Stall when clearing input queue on exit and queue is >1

* Fixed: Inconsistent behaviour of "q" key in the menus

## v1.0.22

* Fixed: Bad values for disks and network on 32-bit

## v1.0.21

* Fixed: Removed extra spaces in cpu name

* Added: / as alternative bind for filter

* Fixed: Security issue when running with SUID bit set

## v1.0.20

* Added: Improved cpu sensor detection for Ryzen Mobile, by @adnanpri

* Changed: Updated makefile

* Changed: Regex for Fx::uncolor() changed to string search and replace

* Changed: Removed all use of regex with dedicated string functions

## v1.0.19

* Fixed: Makefile now tests compiler flag compatibility

## v1.0.18

* Fixed: Makefile g++ -dumpmachine failure to get platform on some distros

## v1.0.17

* Changed: Reverted mutexes back to custom atomic bool based locks

* Added: Static binaries switched to building with musl + more platforms, by @jan-guenter

* Fixed: Improved battery detection, by @jan-guenter

* Added: Displayed battery selectable in options menu

* Fixed: Battery error if non existent battery named is entered

## v1.0.16

* Fixed: atomic_wait() and atomic_lock{} use cpu pause instructions instead of thread sleep

* Fixed: Swapped from atomic bool spinlocks to mutexes to fix rare deadlock

* Added: Continuous Build workflow for OSX branch, by @ShrirajHegde

* Changed: Reverted thread mutex lock to atomic bool with wait and timeout

* Changed: Removed unnecessary async threads in Runner thread

* Added: Try to restart secondary thread in case of stall and additional error checks for ifstream in Proc::collect()

* Fixed: change [k]ill to [K]ill when enabling vim keys, by @jlopezcur

## v1.0.15

* Fixed: Extra "root" partition when running in snap

* Changed: Limit atomic_wait() to 1000ms to fix rare stall

* Fixed: Removed unneeded lock in Runner::run()

* Added: Toggle in options for enabling directional vim keys "h,j,k,l"

## v1.0.14

* Changed: Total system memory is checked at every update instead of once at start

* Added: Continuous Build workflow, by @ShrirajHegde

* Fixed: Uid -> User fallback to getpwuid() if failure for non static builds

* Fixed: snap root disk and changed to compiler flags instead of env variables for detection

* Added: Development branch for OSX, by @joske

## v1.0.13

* Changed: Graph empty symbol is now regular whitespace

## v1.0.12

* Fixed: Exception handling for faulty net download/upload speed

* Fixed: Cpu percent formatting if over 10'000

## v1.0.11

* Changed: atomic_wait to use while loop instead of wait() because of rare stall when a signal handler is triggered while waiting

* Fixed: Get real / mountpoint when running inside snap

* Fixed: UTF8 set LANG and LC_ALL to empty before UTF8 search and fixed empty error msg on exit before signal handler init

* Changed: Init will continue with a warning if UTF-8 locale are detected and it fails to set the locale

## v1.0.10

* Added: Wait for terminal size properties to be available at start

* Changed: Stop second thread before updating terminal size variables

* Changed: Moved check for valid terminal dimensions to before platform init

* Added: Check for empty percentage deques

* Changed: Cpu temp values check for existing values

* Fixed: Cpu percent cutting off above 1000 percent and added scaling with "k" prefix above 10'000

* Fixed: Crash when rapidly resizing terminal at start

## v1.0.9

* Added: ifstream check and try-catch for stod() in Tools::system_uptime()

* Fixed: Freeze on cin.ignore()

## v1.0.8

* Fixed: Additional NULL checks in UTF-8 detection

* Changed: Makefile: Only look for g++-11 if CXX=g++

* Fixed: Missing NULL check for ttyname

* Changed: Only log tty name if known

## v1.0.7

* Fixed: Crash when opening menu at too small size

* Fixed: Cores not constrained to cpu box and core numbers above 100 cut off

* Fixed: Scrollbar position incorrect in small lists and selection not working when filtering

## v1.0.6

* Fixed: Check that getenv("LANG") is not NULL in UTF-8 check

* Fixed: Processes not completely hidden when collapsed in tree mode

* Fixed: Changed wrong filename error.log to btop.log

## v1.0.5

* Fixed: Load AVG sizing when hiding temperatures

* Fixed: Sizing constraints bug on start and boxes can be toggled from size error screen

* Fixed: UTF-8 check crashing if LANG was set to non existent locale

## v1.0.4

* Fixed: Use /proc/pid/statm if RSS memory from /proc/pid/stat is faulty

## v1.0.3

* Fixed: stoi 0 literal pointer to nullptr and added more clamping for gradient array access

## v1.0.2

* Fixed: ARCH detection in Makefile

* Fixed: Color gradient array out of bounds, added clamp 0-100 for cpu percent values

* Fixed: Menu size and preset size issues and added warnings for small terminal size

* Fixed: Options menu page selection alignment

## v1.0.1

* Fixed: UTF-8 check to include UTF8

* Fixed: Added thread started check before joining in clean_quit()

* Fix documentation of --utf-force in README and --help. by @purinchu

## v1.0.0

* First release for Linux
