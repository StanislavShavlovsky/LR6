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
CMAKE_SOURCE_DIR = /home/stasname/Документы/ОАиП/LR6/Task_3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/stasname/Документы/ОАиП/LR6/Task_3/build

# Include any dependencies generated for this target.
include CMakeFiles/SymmetricCheck.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/SymmetricCheck.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/SymmetricCheck.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SymmetricCheck.dir/flags.make

CMakeFiles/SymmetricCheck.dir/main.cpp.o: CMakeFiles/SymmetricCheck.dir/flags.make
CMakeFiles/SymmetricCheck.dir/main.cpp.o: /home/stasname/Документы/ОАиП/LR6/Task_3/main.cpp
CMakeFiles/SymmetricCheck.dir/main.cpp.o: CMakeFiles/SymmetricCheck.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/stasname/Документы/ОАиП/LR6/Task_3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SymmetricCheck.dir/main.cpp.o"
	$(CMAKE_COMMAND) -E __run_co_compile --tidy="clang-tidy;--config={Checks: '*, -clang-analyzer-*'};--extra-arg-before=--driver-mode=g++" --source=/home/stasname/Документы/ОАиП/LR6/Task_3/main.cpp -- /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SymmetricCheck.dir/main.cpp.o -MF CMakeFiles/SymmetricCheck.dir/main.cpp.o.d -o CMakeFiles/SymmetricCheck.dir/main.cpp.o -c /home/stasname/Документы/ОАиП/LR6/Task_3/main.cpp

CMakeFiles/SymmetricCheck.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/SymmetricCheck.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stasname/Документы/ОАиП/LR6/Task_3/main.cpp > CMakeFiles/SymmetricCheck.dir/main.cpp.i

CMakeFiles/SymmetricCheck.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/SymmetricCheck.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stasname/Документы/ОАиП/LR6/Task_3/main.cpp -o CMakeFiles/SymmetricCheck.dir/main.cpp.s

CMakeFiles/SymmetricCheck.dir/symmetric_check.cpp.o: CMakeFiles/SymmetricCheck.dir/flags.make
CMakeFiles/SymmetricCheck.dir/symmetric_check.cpp.o: /home/stasname/Документы/ОАиП/LR6/Task_3/symmetric_check.cpp
CMakeFiles/SymmetricCheck.dir/symmetric_check.cpp.o: CMakeFiles/SymmetricCheck.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/stasname/Документы/ОАиП/LR6/Task_3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/SymmetricCheck.dir/symmetric_check.cpp.o"
	$(CMAKE_COMMAND) -E __run_co_compile --tidy="clang-tidy;--config={Checks: '*, -clang-analyzer-*'};--extra-arg-before=--driver-mode=g++" --source=/home/stasname/Документы/ОАиП/LR6/Task_3/symmetric_check.cpp -- /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SymmetricCheck.dir/symmetric_check.cpp.o -MF CMakeFiles/SymmetricCheck.dir/symmetric_check.cpp.o.d -o CMakeFiles/SymmetricCheck.dir/symmetric_check.cpp.o -c /home/stasname/Документы/ОАиП/LR6/Task_3/symmetric_check.cpp

CMakeFiles/SymmetricCheck.dir/symmetric_check.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/SymmetricCheck.dir/symmetric_check.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stasname/Документы/ОАиП/LR6/Task_3/symmetric_check.cpp > CMakeFiles/SymmetricCheck.dir/symmetric_check.cpp.i

CMakeFiles/SymmetricCheck.dir/symmetric_check.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/SymmetricCheck.dir/symmetric_check.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stasname/Документы/ОАиП/LR6/Task_3/symmetric_check.cpp -o CMakeFiles/SymmetricCheck.dir/symmetric_check.cpp.s

# Object files for target SymmetricCheck
SymmetricCheck_OBJECTS = \
"CMakeFiles/SymmetricCheck.dir/main.cpp.o" \
"CMakeFiles/SymmetricCheck.dir/symmetric_check.cpp.o"

# External object files for target SymmetricCheck
SymmetricCheck_EXTERNAL_OBJECTS =

SymmetricCheck: CMakeFiles/SymmetricCheck.dir/main.cpp.o
SymmetricCheck: CMakeFiles/SymmetricCheck.dir/symmetric_check.cpp.o
SymmetricCheck: CMakeFiles/SymmetricCheck.dir/build.make
SymmetricCheck: CMakeFiles/SymmetricCheck.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/stasname/Документы/ОАиП/LR6/Task_3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable SymmetricCheck"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SymmetricCheck.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SymmetricCheck.dir/build: SymmetricCheck
.PHONY : CMakeFiles/SymmetricCheck.dir/build

CMakeFiles/SymmetricCheck.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SymmetricCheck.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SymmetricCheck.dir/clean

CMakeFiles/SymmetricCheck.dir/depend:
	cd /home/stasname/Документы/ОАиП/LR6/Task_3/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/stasname/Документы/ОАиП/LR6/Task_3 /home/stasname/Документы/ОАиП/LR6/Task_3 /home/stasname/Документы/ОАиП/LR6/Task_3/build /home/stasname/Документы/ОАиП/LR6/Task_3/build /home/stasname/Документы/ОАиП/LR6/Task_3/build/CMakeFiles/SymmetricCheck.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/SymmetricCheck.dir/depend

