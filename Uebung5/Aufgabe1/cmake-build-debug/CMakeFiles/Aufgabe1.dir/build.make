# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /home/stefan/Downloads/clion-2017.2.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/stefan/Downloads/clion-2017.2.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/stefan/Dokumente/OTH/Semester 1/PG1/Uebung5/Aufgabe1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/stefan/Dokumente/OTH/Semester 1/PG1/Uebung5/Aufgabe1/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Aufgabe1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Aufgabe1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Aufgabe1.dir/flags.make

CMakeFiles/Aufgabe1.dir/main.c.o: CMakeFiles/Aufgabe1.dir/flags.make
CMakeFiles/Aufgabe1.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/stefan/Dokumente/OTH/Semester 1/PG1/Uebung5/Aufgabe1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Aufgabe1.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Aufgabe1.dir/main.c.o   -c "/home/stefan/Dokumente/OTH/Semester 1/PG1/Uebung5/Aufgabe1/main.c"

CMakeFiles/Aufgabe1.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Aufgabe1.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/stefan/Dokumente/OTH/Semester 1/PG1/Uebung5/Aufgabe1/main.c" > CMakeFiles/Aufgabe1.dir/main.c.i

CMakeFiles/Aufgabe1.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Aufgabe1.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/stefan/Dokumente/OTH/Semester 1/PG1/Uebung5/Aufgabe1/main.c" -o CMakeFiles/Aufgabe1.dir/main.c.s

CMakeFiles/Aufgabe1.dir/main.c.o.requires:

.PHONY : CMakeFiles/Aufgabe1.dir/main.c.o.requires

CMakeFiles/Aufgabe1.dir/main.c.o.provides: CMakeFiles/Aufgabe1.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/Aufgabe1.dir/build.make CMakeFiles/Aufgabe1.dir/main.c.o.provides.build
.PHONY : CMakeFiles/Aufgabe1.dir/main.c.o.provides

CMakeFiles/Aufgabe1.dir/main.c.o.provides.build: CMakeFiles/Aufgabe1.dir/main.c.o


# Object files for target Aufgabe1
Aufgabe1_OBJECTS = \
"CMakeFiles/Aufgabe1.dir/main.c.o"

# External object files for target Aufgabe1
Aufgabe1_EXTERNAL_OBJECTS =

Aufgabe1: CMakeFiles/Aufgabe1.dir/main.c.o
Aufgabe1: CMakeFiles/Aufgabe1.dir/build.make
Aufgabe1: CMakeFiles/Aufgabe1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/stefan/Dokumente/OTH/Semester 1/PG1/Uebung5/Aufgabe1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Aufgabe1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Aufgabe1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Aufgabe1.dir/build: Aufgabe1

.PHONY : CMakeFiles/Aufgabe1.dir/build

CMakeFiles/Aufgabe1.dir/requires: CMakeFiles/Aufgabe1.dir/main.c.o.requires

.PHONY : CMakeFiles/Aufgabe1.dir/requires

CMakeFiles/Aufgabe1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Aufgabe1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Aufgabe1.dir/clean

CMakeFiles/Aufgabe1.dir/depend:
	cd "/home/stefan/Dokumente/OTH/Semester 1/PG1/Uebung5/Aufgabe1/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/stefan/Dokumente/OTH/Semester 1/PG1/Uebung5/Aufgabe1" "/home/stefan/Dokumente/OTH/Semester 1/PG1/Uebung5/Aufgabe1" "/home/stefan/Dokumente/OTH/Semester 1/PG1/Uebung5/Aufgabe1/cmake-build-debug" "/home/stefan/Dokumente/OTH/Semester 1/PG1/Uebung5/Aufgabe1/cmake-build-debug" "/home/stefan/Dokumente/OTH/Semester 1/PG1/Uebung5/Aufgabe1/cmake-build-debug/CMakeFiles/Aufgabe1.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Aufgabe1.dir/depend

