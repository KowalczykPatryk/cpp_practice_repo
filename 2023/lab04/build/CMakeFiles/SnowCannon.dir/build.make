# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/patryk/Documents/cpp_files/labs_previous_year/PPO/lab04

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/patryk/Documents/cpp_files/labs_previous_year/PPO/lab04/build

# Include any dependencies generated for this target.
include CMakeFiles/SnowCannon.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/SnowCannon.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/SnowCannon.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SnowCannon.dir/flags.make

CMakeFiles/SnowCannon.dir/main.cpp.o: CMakeFiles/SnowCannon.dir/flags.make
CMakeFiles/SnowCannon.dir/main.cpp.o: ../main.cpp
CMakeFiles/SnowCannon.dir/main.cpp.o: CMakeFiles/SnowCannon.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/patryk/Documents/cpp_files/labs_previous_year/PPO/lab04/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SnowCannon.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SnowCannon.dir/main.cpp.o -MF CMakeFiles/SnowCannon.dir/main.cpp.o.d -o CMakeFiles/SnowCannon.dir/main.cpp.o -c /home/patryk/Documents/cpp_files/labs_previous_year/PPO/lab04/main.cpp

CMakeFiles/SnowCannon.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SnowCannon.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/patryk/Documents/cpp_files/labs_previous_year/PPO/lab04/main.cpp > CMakeFiles/SnowCannon.dir/main.cpp.i

CMakeFiles/SnowCannon.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SnowCannon.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/patryk/Documents/cpp_files/labs_previous_year/PPO/lab04/main.cpp -o CMakeFiles/SnowCannon.dir/main.cpp.s

CMakeFiles/SnowCannon.dir/src/Service.cpp.o: CMakeFiles/SnowCannon.dir/flags.make
CMakeFiles/SnowCannon.dir/src/Service.cpp.o: ../src/Service.cpp
CMakeFiles/SnowCannon.dir/src/Service.cpp.o: CMakeFiles/SnowCannon.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/patryk/Documents/cpp_files/labs_previous_year/PPO/lab04/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/SnowCannon.dir/src/Service.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SnowCannon.dir/src/Service.cpp.o -MF CMakeFiles/SnowCannon.dir/src/Service.cpp.o.d -o CMakeFiles/SnowCannon.dir/src/Service.cpp.o -c /home/patryk/Documents/cpp_files/labs_previous_year/PPO/lab04/src/Service.cpp

CMakeFiles/SnowCannon.dir/src/Service.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SnowCannon.dir/src/Service.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/patryk/Documents/cpp_files/labs_previous_year/PPO/lab04/src/Service.cpp > CMakeFiles/SnowCannon.dir/src/Service.cpp.i

CMakeFiles/SnowCannon.dir/src/Service.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SnowCannon.dir/src/Service.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/patryk/Documents/cpp_files/labs_previous_year/PPO/lab04/src/Service.cpp -o CMakeFiles/SnowCannon.dir/src/Service.cpp.s

CMakeFiles/SnowCannon.dir/src/SnowCannon.cpp.o: CMakeFiles/SnowCannon.dir/flags.make
CMakeFiles/SnowCannon.dir/src/SnowCannon.cpp.o: ../src/SnowCannon.cpp
CMakeFiles/SnowCannon.dir/src/SnowCannon.cpp.o: CMakeFiles/SnowCannon.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/patryk/Documents/cpp_files/labs_previous_year/PPO/lab04/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/SnowCannon.dir/src/SnowCannon.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SnowCannon.dir/src/SnowCannon.cpp.o -MF CMakeFiles/SnowCannon.dir/src/SnowCannon.cpp.o.d -o CMakeFiles/SnowCannon.dir/src/SnowCannon.cpp.o -c /home/patryk/Documents/cpp_files/labs_previous_year/PPO/lab04/src/SnowCannon.cpp

CMakeFiles/SnowCannon.dir/src/SnowCannon.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SnowCannon.dir/src/SnowCannon.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/patryk/Documents/cpp_files/labs_previous_year/PPO/lab04/src/SnowCannon.cpp > CMakeFiles/SnowCannon.dir/src/SnowCannon.cpp.i

CMakeFiles/SnowCannon.dir/src/SnowCannon.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SnowCannon.dir/src/SnowCannon.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/patryk/Documents/cpp_files/labs_previous_year/PPO/lab04/src/SnowCannon.cpp -o CMakeFiles/SnowCannon.dir/src/SnowCannon.cpp.s

# Object files for target SnowCannon
SnowCannon_OBJECTS = \
"CMakeFiles/SnowCannon.dir/main.cpp.o" \
"CMakeFiles/SnowCannon.dir/src/Service.cpp.o" \
"CMakeFiles/SnowCannon.dir/src/SnowCannon.cpp.o"

# External object files for target SnowCannon
SnowCannon_EXTERNAL_OBJECTS =

SnowCannon: CMakeFiles/SnowCannon.dir/main.cpp.o
SnowCannon: CMakeFiles/SnowCannon.dir/src/Service.cpp.o
SnowCannon: CMakeFiles/SnowCannon.dir/src/SnowCannon.cpp.o
SnowCannon: CMakeFiles/SnowCannon.dir/build.make
SnowCannon: CMakeFiles/SnowCannon.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/patryk/Documents/cpp_files/labs_previous_year/PPO/lab04/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable SnowCannon"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SnowCannon.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SnowCannon.dir/build: SnowCannon
.PHONY : CMakeFiles/SnowCannon.dir/build

CMakeFiles/SnowCannon.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SnowCannon.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SnowCannon.dir/clean

CMakeFiles/SnowCannon.dir/depend:
	cd /home/patryk/Documents/cpp_files/labs_previous_year/PPO/lab04/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/patryk/Documents/cpp_files/labs_previous_year/PPO/lab04 /home/patryk/Documents/cpp_files/labs_previous_year/PPO/lab04 /home/patryk/Documents/cpp_files/labs_previous_year/PPO/lab04/build /home/patryk/Documents/cpp_files/labs_previous_year/PPO/lab04/build /home/patryk/Documents/cpp_files/labs_previous_year/PPO/lab04/build/CMakeFiles/SnowCannon.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SnowCannon.dir/depend

