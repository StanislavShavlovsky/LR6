# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/stasname/Документы/ОАиП/LR6/Task_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/stasname/Документы/ОАиП/LR6/Task_1/build

# Include any dependencies generated for this target.
include CMakeFiles/LR6Tests.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/LR6Tests.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/LR6Tests.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LR6Tests.dir/flags.make

CMakeFiles/LR6Tests.dir/test_numbers.cpp.o: CMakeFiles/LR6Tests.dir/flags.make
CMakeFiles/LR6Tests.dir/test_numbers.cpp.o: /home/stasname/Документы/ОАиП/LR6/Task_1/test_numbers.cpp
CMakeFiles/LR6Tests.dir/test_numbers.cpp.o: CMakeFiles/LR6Tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/stasname/Документы/ОАиП/LR6/Task_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LR6Tests.dir/test_numbers.cpp.o"
	$(CMAKE_COMMAND) -E __run_co_compile --tidy="clang-tidy;--config={Checks: '*, -clang-analyzer-*'};--extra-arg-before=--driver-mode=g++" --source=/home/stasname/Документы/ОАиП/LR6/Task_1/test_numbers.cpp -- /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LR6Tests.dir/test_numbers.cpp.o -MF CMakeFiles/LR6Tests.dir/test_numbers.cpp.o.d -o CMakeFiles/LR6Tests.dir/test_numbers.cpp.o -c /home/stasname/Документы/ОАиП/LR6/Task_1/test_numbers.cpp

CMakeFiles/LR6Tests.dir/test_numbers.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LR6Tests.dir/test_numbers.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stasname/Документы/ОАиП/LR6/Task_1/test_numbers.cpp > CMakeFiles/LR6Tests.dir/test_numbers.cpp.i

CMakeFiles/LR6Tests.dir/test_numbers.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LR6Tests.dir/test_numbers.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stasname/Документы/ОАиП/LR6/Task_1/test_numbers.cpp -o CMakeFiles/LR6Tests.dir/test_numbers.cpp.s

CMakeFiles/LR6Tests.dir/numbers.cpp.o: CMakeFiles/LR6Tests.dir/flags.make
CMakeFiles/LR6Tests.dir/numbers.cpp.o: /home/stasname/Документы/ОАиП/LR6/Task_1/numbers.cpp
CMakeFiles/LR6Tests.dir/numbers.cpp.o: CMakeFiles/LR6Tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/stasname/Документы/ОАиП/LR6/Task_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/LR6Tests.dir/numbers.cpp.o"
	$(CMAKE_COMMAND) -E __run_co_compile --tidy="clang-tidy;--config={Checks: '*, -clang-analyzer-*'};--extra-arg-before=--driver-mode=g++" --source=/home/stasname/Документы/ОАиП/LR6/Task_1/numbers.cpp -- /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LR6Tests.dir/numbers.cpp.o -MF CMakeFiles/LR6Tests.dir/numbers.cpp.o.d -o CMakeFiles/LR6Tests.dir/numbers.cpp.o -c /home/stasname/Документы/ОАиП/LR6/Task_1/numbers.cpp

CMakeFiles/LR6Tests.dir/numbers.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LR6Tests.dir/numbers.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stasname/Документы/ОАиП/LR6/Task_1/numbers.cpp > CMakeFiles/LR6Tests.dir/numbers.cpp.i

CMakeFiles/LR6Tests.dir/numbers.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LR6Tests.dir/numbers.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stasname/Документы/ОАиП/LR6/Task_1/numbers.cpp -o CMakeFiles/LR6Tests.dir/numbers.cpp.s

# Object files for target LR6Tests
LR6Tests_OBJECTS = \
"CMakeFiles/LR6Tests.dir/test_numbers.cpp.o" \
"CMakeFiles/LR6Tests.dir/numbers.cpp.o"

# External object files for target LR6Tests
LR6Tests_EXTERNAL_OBJECTS =

LR6Tests: CMakeFiles/LR6Tests.dir/test_numbers.cpp.o
LR6Tests: CMakeFiles/LR6Tests.dir/numbers.cpp.o
LR6Tests: CMakeFiles/LR6Tests.dir/build.make
LR6Tests: /usr/lib/x86_64-linux-gnu/libgtest.a
LR6Tests: CMakeFiles/LR6Tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/stasname/Документы/ОАиП/LR6/Task_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable LR6Tests"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LR6Tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LR6Tests.dir/build: LR6Tests
.PHONY : CMakeFiles/LR6Tests.dir/build

CMakeFiles/LR6Tests.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LR6Tests.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LR6Tests.dir/clean

CMakeFiles/LR6Tests.dir/depend:
	cd /home/stasname/Документы/ОАиП/LR6/Task_1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/stasname/Документы/ОАиП/LR6/Task_1 /home/stasname/Документы/ОАиП/LR6/Task_1 /home/stasname/Документы/ОАиП/LR6/Task_1/build /home/stasname/Документы/ОАиП/LR6/Task_1/build /home/stasname/Документы/ОАиП/LR6/Task_1/build/CMakeFiles/LR6Tests.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/LR6Tests.dir/depend

