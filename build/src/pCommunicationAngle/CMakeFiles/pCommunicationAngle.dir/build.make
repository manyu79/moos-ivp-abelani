# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /opt/local/bin/cmake

# The command to remove a file.
RM = /opt/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /opt/local/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/abelani/moos-ivp-abelani

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/abelani/moos-ivp-abelani/build

# Include any dependencies generated for this target.
include src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/depend.make

# Include the progress variables for this target.
include src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/progress.make

# Include the compile flags for this target's objects.
include src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/flags.make

src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/AcoustPair.cpp.o: src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/flags.make
src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/AcoustPair.cpp.o: ../src/pCommunicationAngle/AcoustPair.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/abelani/moos-ivp-abelani/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/AcoustPair.cpp.o"
	cd /Users/abelani/moos-ivp-abelani/build/src/pCommunicationAngle && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/pCommunicationAngle.dir/AcoustPair.cpp.o -c /Users/abelani/moos-ivp-abelani/src/pCommunicationAngle/AcoustPair.cpp

src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/AcoustPair.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pCommunicationAngle.dir/AcoustPair.cpp.i"
	cd /Users/abelani/moos-ivp-abelani/build/src/pCommunicationAngle && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/abelani/moos-ivp-abelani/src/pCommunicationAngle/AcoustPair.cpp > CMakeFiles/pCommunicationAngle.dir/AcoustPair.cpp.i

src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/AcoustPair.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pCommunicationAngle.dir/AcoustPair.cpp.s"
	cd /Users/abelani/moos-ivp-abelani/build/src/pCommunicationAngle && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/abelani/moos-ivp-abelani/src/pCommunicationAngle/AcoustPair.cpp -o CMakeFiles/pCommunicationAngle.dir/AcoustPair.cpp.s

src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/AcoustPair.cpp.o.requires:
.PHONY : src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/AcoustPair.cpp.o.requires

src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/AcoustPair.cpp.o.provides: src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/AcoustPair.cpp.o.requires
	$(MAKE) -f src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/build.make src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/AcoustPair.cpp.o.provides.build
.PHONY : src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/AcoustPair.cpp.o.provides

src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/AcoustPair.cpp.o.provides.build: src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/AcoustPair.cpp.o

src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/CommunicationAngle.cpp.o: src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/flags.make
src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/CommunicationAngle.cpp.o: ../src/pCommunicationAngle/CommunicationAngle.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/abelani/moos-ivp-abelani/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/CommunicationAngle.cpp.o"
	cd /Users/abelani/moos-ivp-abelani/build/src/pCommunicationAngle && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/pCommunicationAngle.dir/CommunicationAngle.cpp.o -c /Users/abelani/moos-ivp-abelani/src/pCommunicationAngle/CommunicationAngle.cpp

src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/CommunicationAngle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pCommunicationAngle.dir/CommunicationAngle.cpp.i"
	cd /Users/abelani/moos-ivp-abelani/build/src/pCommunicationAngle && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/abelani/moos-ivp-abelani/src/pCommunicationAngle/CommunicationAngle.cpp > CMakeFiles/pCommunicationAngle.dir/CommunicationAngle.cpp.i

src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/CommunicationAngle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pCommunicationAngle.dir/CommunicationAngle.cpp.s"
	cd /Users/abelani/moos-ivp-abelani/build/src/pCommunicationAngle && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/abelani/moos-ivp-abelani/src/pCommunicationAngle/CommunicationAngle.cpp -o CMakeFiles/pCommunicationAngle.dir/CommunicationAngle.cpp.s

src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/CommunicationAngle.cpp.o.requires:
.PHONY : src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/CommunicationAngle.cpp.o.requires

src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/CommunicationAngle.cpp.o.provides: src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/CommunicationAngle.cpp.o.requires
	$(MAKE) -f src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/build.make src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/CommunicationAngle.cpp.o.provides.build
.PHONY : src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/CommunicationAngle.cpp.o.provides

src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/CommunicationAngle.cpp.o.provides.build: src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/CommunicationAngle.cpp.o

src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/CommunicationAngle_Info.cpp.o: src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/flags.make
src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/CommunicationAngle_Info.cpp.o: ../src/pCommunicationAngle/CommunicationAngle_Info.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/abelani/moos-ivp-abelani/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/CommunicationAngle_Info.cpp.o"
	cd /Users/abelani/moos-ivp-abelani/build/src/pCommunicationAngle && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/pCommunicationAngle.dir/CommunicationAngle_Info.cpp.o -c /Users/abelani/moos-ivp-abelani/src/pCommunicationAngle/CommunicationAngle_Info.cpp

src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/CommunicationAngle_Info.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pCommunicationAngle.dir/CommunicationAngle_Info.cpp.i"
	cd /Users/abelani/moos-ivp-abelani/build/src/pCommunicationAngle && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/abelani/moos-ivp-abelani/src/pCommunicationAngle/CommunicationAngle_Info.cpp > CMakeFiles/pCommunicationAngle.dir/CommunicationAngle_Info.cpp.i

src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/CommunicationAngle_Info.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pCommunicationAngle.dir/CommunicationAngle_Info.cpp.s"
	cd /Users/abelani/moos-ivp-abelani/build/src/pCommunicationAngle && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/abelani/moos-ivp-abelani/src/pCommunicationAngle/CommunicationAngle_Info.cpp -o CMakeFiles/pCommunicationAngle.dir/CommunicationAngle_Info.cpp.s

src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/CommunicationAngle_Info.cpp.o.requires:
.PHONY : src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/CommunicationAngle_Info.cpp.o.requires

src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/CommunicationAngle_Info.cpp.o.provides: src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/CommunicationAngle_Info.cpp.o.requires
	$(MAKE) -f src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/build.make src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/CommunicationAngle_Info.cpp.o.provides.build
.PHONY : src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/CommunicationAngle_Info.cpp.o.provides

src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/CommunicationAngle_Info.cpp.o.provides.build: src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/CommunicationAngle_Info.cpp.o

src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/main.cpp.o: src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/flags.make
src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/main.cpp.o: ../src/pCommunicationAngle/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/abelani/moos-ivp-abelani/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/main.cpp.o"
	cd /Users/abelani/moos-ivp-abelani/build/src/pCommunicationAngle && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/pCommunicationAngle.dir/main.cpp.o -c /Users/abelani/moos-ivp-abelani/src/pCommunicationAngle/main.cpp

src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pCommunicationAngle.dir/main.cpp.i"
	cd /Users/abelani/moos-ivp-abelani/build/src/pCommunicationAngle && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/abelani/moos-ivp-abelani/src/pCommunicationAngle/main.cpp > CMakeFiles/pCommunicationAngle.dir/main.cpp.i

src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pCommunicationAngle.dir/main.cpp.s"
	cd /Users/abelani/moos-ivp-abelani/build/src/pCommunicationAngle && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/abelani/moos-ivp-abelani/src/pCommunicationAngle/main.cpp -o CMakeFiles/pCommunicationAngle.dir/main.cpp.s

src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/main.cpp.o.requires:
.PHONY : src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/main.cpp.o.requires

src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/main.cpp.o.provides: src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/main.cpp.o.requires
	$(MAKE) -f src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/build.make src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/main.cpp.o.provides.build
.PHONY : src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/main.cpp.o.provides

src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/main.cpp.o.provides.build: src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/main.cpp.o

# Object files for target pCommunicationAngle
pCommunicationAngle_OBJECTS = \
"CMakeFiles/pCommunicationAngle.dir/AcoustPair.cpp.o" \
"CMakeFiles/pCommunicationAngle.dir/CommunicationAngle.cpp.o" \
"CMakeFiles/pCommunicationAngle.dir/CommunicationAngle_Info.cpp.o" \
"CMakeFiles/pCommunicationAngle.dir/main.cpp.o"

# External object files for target pCommunicationAngle
pCommunicationAngle_EXTERNAL_OBJECTS =

../bin/pCommunicationAngle: src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/AcoustPair.cpp.o
../bin/pCommunicationAngle: src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/CommunicationAngle.cpp.o
../bin/pCommunicationAngle: src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/CommunicationAngle_Info.cpp.o
../bin/pCommunicationAngle: src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/main.cpp.o
../bin/pCommunicationAngle: src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/build.make
../bin/pCommunicationAngle: /Users/abelani/moos-ivp/MOOS/MOOSCore/lib/libMOOS.a
../bin/pCommunicationAngle: src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../../bin/pCommunicationAngle"
	cd /Users/abelani/moos-ivp-abelani/build/src/pCommunicationAngle && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pCommunicationAngle.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/build: ../bin/pCommunicationAngle
.PHONY : src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/build

src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/requires: src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/AcoustPair.cpp.o.requires
src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/requires: src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/CommunicationAngle.cpp.o.requires
src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/requires: src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/CommunicationAngle_Info.cpp.o.requires
src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/requires: src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/main.cpp.o.requires
.PHONY : src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/requires

src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/clean:
	cd /Users/abelani/moos-ivp-abelani/build/src/pCommunicationAngle && $(CMAKE_COMMAND) -P CMakeFiles/pCommunicationAngle.dir/cmake_clean.cmake
.PHONY : src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/clean

src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/depend:
	cd /Users/abelani/moos-ivp-abelani/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/abelani/moos-ivp-abelani /Users/abelani/moos-ivp-abelani/src/pCommunicationAngle /Users/abelani/moos-ivp-abelani/build /Users/abelani/moos-ivp-abelani/build/src/pCommunicationAngle /Users/abelani/moos-ivp-abelani/build/src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/pCommunicationAngle/CMakeFiles/pCommunicationAngle.dir/depend

