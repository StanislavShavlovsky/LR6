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
CMAKE_SOURCE_DIR = /home/stasname/Документы/ОАиП/LR6/Task_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/stasname/Документы/ОАиП/LR6/Task_2/build

# Include any dependencies generated for this target.
include CMakeFiles/LR6.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/LR6.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/LR6.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LR6.dir/flags.make

CMakeFiles/LR6.dir/main.cpp.o: CMakeFiles/LR6.dir/flags.make
CMakeFiles/LR6.dir/main.cpp.o: /home/stasname/Документы/ОАиП/LR6/Task_2/main.cpp
CMakeFiles/LR6.dir/main.cpp.o: CMakeFiles/LR6.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/stasname/Документы/ОАиП/LR6/Task_2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LR6.dir/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LR6.dir/main.cpp.o -MF CMakeFiles/LR6.dir/main.cpp.o.d -o CMakeFiles/LR6.dir/main.cpp.o -c /home/stasname/Документы/ОАиП/LR6/Task_2/main.cpp

CMakeFiles/LR6.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LR6.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stasname/Документы/ОАиП/LR6/Task_2/main.cpp > CMakeFiles/LR6.dir/main.cpp.i

CMakeFiles/LR6.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LR6.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stasname/Документы/ОАиП/LR6/Task_2/main.cpp -o CMakeFiles/LR6.dir/main.cpp.s

CMakeFiles/LR6.dir/vowel_count.cpp.o: CMakeFiles/LR6.dir/flags.make
CMakeFiles/LR6.dir/vowel_count.cpp.o: /home/stasname/Документы/ОАиП/LR6/Task_2/vowel_count.cpp
CMakeFiles/LR6.dir/vowel_count.cpp.o: CMakeFiles/LR6.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/stasname/Документы/ОАиП/LR6/Task_2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/LR6.dir/vowel_count.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LR6.dir/vowel_count.cpp.o -MF CMakeFiles/LR6.dir/vowel_count.cpp.o.d -o CMakeFiles/LR6.dir/vowel_count.cpp.o -c /home/stasname/Документы/ОАиП/LR6/Task_2/vowel_count.cpp

CMakeFiles/LR6.dir/vowel_count.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LR6.dir/vowel_count.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stasname/Документы/ОАиП/LR6/Task_2/vowel_count.cpp > CMakeFiles/LR6.dir/vowel_count.cpp.i

CMakeFiles/LR6.dir/vowel_count.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LR6.dir/vowel_count.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stasname/Документы/ОАиП/LR6/Task_2/vowel_count.cpp -o CMakeFiles/LR6.dir/vowel_count.cpp.s

# Object files for target LR6
LR6_OBJECTS = \
"CMakeFiles/LR6.dir/main.cpp.o" \
"CMakeFiles/LR6.dir/vowel_count.cpp.o"

# External object files for target LR6
LR6_EXTERNAL_OBJECTS =

LR6: CMakeFiles/LR6.dir/main.cpp.o
LR6: CMakeFiles/LR6.dir/vowel_count.cpp.o
LR6: CMakeFiles/LR6.dir/build.make
LR6: CMakeFiles/LR6.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/stasname/Документы/ОАиП/LR6/Task_2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable LR6"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LR6.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LR6.dir/build: LR6
.PHONY : CMakeFiles/LR6.dir/build

CMakeFiles/LR6.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LR6.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LR6.dir/clean

CMakeFiles/LR6.dir/depend:
	cd /home/stasname/Документы/ОАиП/LR6/Task_2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/stasname/Документы/ОАиП/LR6/Task_2 /home/stasname/Документы/ОАиП/LR6/Task_2 /home/stasname/Документы/ОАиП/LR6/Task_2/build /home/stasname/Документы/ОАиП/LR6/Task_2/build /home/stasname/Документы/ОАиП/LR6/Task_2/build/CMakeFiles/LR6.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/LR6.dir/depend

