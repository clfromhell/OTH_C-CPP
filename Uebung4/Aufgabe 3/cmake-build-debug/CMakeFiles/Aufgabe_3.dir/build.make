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
CMAKE_SOURCE_DIR = "/home/stefan/Dokumente/OTH/Semester 1/PG1/Uebung4/Aufgabe 3"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/stefan/Dokumente/OTH/Semester 1/PG1/Uebung4/Aufgabe 3/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Aufgabe_3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Aufgabe_3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Aufgabe_3.dir/flags.make

CMakeFiles/Aufgabe_3.dir/main.c.o: CMakeFiles/Aufgabe_3.dir/flags.make
CMakeFiles/Aufgabe_3.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/stefan/Dokumente/OTH/Semester 1/PG1/Uebung4/Aufgabe 3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Aufgabe_3.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Aufgabe_3.dir/main.c.o   -c "/home/stefan/Dokumente/OTH/Semester 1/PG1/Uebung4/Aufgabe 3/main.c"

CMakeFiles/Aufgabe_3.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Aufgabe_3.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/stefan/Dokumente/OTH/Semester 1/PG1/Uebung4/Aufgabe 3/main.c" > CMakeFiles/Aufgabe_3.dir/main.c.i

CMakeFiles/Aufgabe_3.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Aufgabe_3.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/stefan/Dokumente/OTH/Semester 1/PG1/Uebung4/Aufgabe 3/main.c" -o CMakeFiles/Aufgabe_3.dir/main.c.s

CMakeFiles/Aufgabe_3.dir/main.c.o.requires:

.PHONY : CMakeFiles/Aufgabe_3.dir/main.c.o.requires

CMakeFiles/Aufgabe_3.dir/main.c.o.provides: CMakeFiles/Aufgabe_3.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/Aufgabe_3.dir/build.make CMakeFiles/Aufgabe_3.dir/main.c.o.provides.build
.PHONY : CMakeFiles/Aufgabe_3.dir/main.c.o.provides

CMakeFiles/Aufgabe_3.dir/main.c.o.provides.build: CMakeFiles/Aufgabe_3.dir/main.c.o


# Object files for target Aufgabe_3
Aufgabe_3_OBJECTS = \
"CMakeFiles/Aufgabe_3.dir/main.c.o"

# External object files for target Aufgabe_3
Aufgabe_3_EXTERNAL_OBJECTS =

Aufgabe_3: CMakeFiles/Aufgabe_3.dir/main.c.o
Aufgabe_3: CMakeFiles/Aufgabe_3.dir/build.make
Aufgabe_3: CMakeFiles/Aufgabe_3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/stefan/Dokumente/OTH/Semester 1/PG1/Uebung4/Aufgabe 3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Aufgabe_3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Aufgabe_3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Aufgabe_3.dir/build: Aufgabe_3

.PHONY : CMakeFiles/Aufgabe_3.dir/build

CMakeFiles/Aufgabe_3.dir/requires: CMakeFiles/Aufgabe_3.dir/main.c.o.requires

.PHONY : CMakeFiles/Aufgabe_3.dir/requires

CMakeFiles/Aufgabe_3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Aufgabe_3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Aufgabe_3.dir/clean

CMakeFiles/Aufgabe_3.dir/depend:
	cd "/home/stefan/Dokumente/OTH/Semester 1/PG1/Uebung4/Aufgabe 3/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/stefan/Dokumente/OTH/Semester 1/PG1/Uebung4/Aufgabe 3" "/home/stefan/Dokumente/OTH/Semester 1/PG1/Uebung4/Aufgabe 3" "/home/stefan/Dokumente/OTH/Semester 1/PG1/Uebung4/Aufgabe 3/cmake-build-debug" "/home/stefan/Dokumente/OTH/Semester 1/PG1/Uebung4/Aufgabe 3/cmake-build-debug" "/home/stefan/Dokumente/OTH/Semester 1/PG1/Uebung4/Aufgabe 3/cmake-build-debug/CMakeFiles/Aufgabe_3.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Aufgabe_3.dir/depend

