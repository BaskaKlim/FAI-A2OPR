# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/barbaraklimekova/fai/c++/A2OPR /ZaverecnyProjekt_ukol1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/barbaraklimekova/fai/c++/A2OPR /ZaverecnyProjekt_ukol1/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Zaverecny_projekt.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Zaverecny_projekt.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Zaverecny_projekt.dir/flags.make

CMakeFiles/Zaverecny_projekt.dir/main.cpp.o: CMakeFiles/Zaverecny_projekt.dir/flags.make
CMakeFiles/Zaverecny_projekt.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/barbaraklimekova/fai/c++/A2OPR /ZaverecnyProjekt_ukol1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Zaverecny_projekt.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Zaverecny_projekt.dir/main.cpp.o -c "/Users/barbaraklimekova/fai/c++/A2OPR /ZaverecnyProjekt_ukol1/main.cpp"

CMakeFiles/Zaverecny_projekt.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zaverecny_projekt.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/barbaraklimekova/fai/c++/A2OPR /ZaverecnyProjekt_ukol1/main.cpp" > CMakeFiles/Zaverecny_projekt.dir/main.cpp.i

CMakeFiles/Zaverecny_projekt.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zaverecny_projekt.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/barbaraklimekova/fai/c++/A2OPR /ZaverecnyProjekt_ukol1/main.cpp" -o CMakeFiles/Zaverecny_projekt.dir/main.cpp.s

# Object files for target Zaverecny_projekt
Zaverecny_projekt_OBJECTS = \
"CMakeFiles/Zaverecny_projekt.dir/main.cpp.o"

# External object files for target Zaverecny_projekt
Zaverecny_projekt_EXTERNAL_OBJECTS =

Zaverecny_projekt: CMakeFiles/Zaverecny_projekt.dir/main.cpp.o
Zaverecny_projekt: CMakeFiles/Zaverecny_projekt.dir/build.make
Zaverecny_projekt: CMakeFiles/Zaverecny_projekt.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/barbaraklimekova/fai/c++/A2OPR /ZaverecnyProjekt_ukol1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Zaverecny_projekt"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Zaverecny_projekt.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Zaverecny_projekt.dir/build: Zaverecny_projekt

.PHONY : CMakeFiles/Zaverecny_projekt.dir/build

CMakeFiles/Zaverecny_projekt.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Zaverecny_projekt.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Zaverecny_projekt.dir/clean

CMakeFiles/Zaverecny_projekt.dir/depend:
	cd "/Users/barbaraklimekova/fai/c++/A2OPR /ZaverecnyProjekt_ukol1/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/barbaraklimekova/fai/c++/A2OPR /ZaverecnyProjekt_ukol1" "/Users/barbaraklimekova/fai/c++/A2OPR /ZaverecnyProjekt_ukol1" "/Users/barbaraklimekova/fai/c++/A2OPR /ZaverecnyProjekt_ukol1/cmake-build-debug" "/Users/barbaraklimekova/fai/c++/A2OPR /ZaverecnyProjekt_ukol1/cmake-build-debug" "/Users/barbaraklimekova/fai/c++/A2OPR /ZaverecnyProjekt_ukol1/cmake-build-debug/CMakeFiles/Zaverecny_projekt.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Zaverecny_projekt.dir/depend

