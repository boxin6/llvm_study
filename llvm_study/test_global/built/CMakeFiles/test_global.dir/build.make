# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/xbx/Desktop/llvm_study/test_global

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xbx/Desktop/llvm_study/test_global/built

# Include any dependencies generated for this target.
include CMakeFiles/test_global.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/test_global.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/test_global.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_global.dir/flags.make

CMakeFiles/test_global.dir/test_global.cpp.o: CMakeFiles/test_global.dir/flags.make
CMakeFiles/test_global.dir/test_global.cpp.o: /home/xbx/Desktop/llvm_study/test_global/test_global.cpp
CMakeFiles/test_global.dir/test_global.cpp.o: CMakeFiles/test_global.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xbx/Desktop/llvm_study/test_global/built/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_global.dir/test_global.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test_global.dir/test_global.cpp.o -MF CMakeFiles/test_global.dir/test_global.cpp.o.d -o CMakeFiles/test_global.dir/test_global.cpp.o -c /home/xbx/Desktop/llvm_study/test_global/test_global.cpp

CMakeFiles/test_global.dir/test_global.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_global.dir/test_global.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xbx/Desktop/llvm_study/test_global/test_global.cpp > CMakeFiles/test_global.dir/test_global.cpp.i

CMakeFiles/test_global.dir/test_global.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_global.dir/test_global.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xbx/Desktop/llvm_study/test_global/test_global.cpp -o CMakeFiles/test_global.dir/test_global.cpp.s

# Object files for target test_global
test_global_OBJECTS = \
"CMakeFiles/test_global.dir/test_global.cpp.o"

# External object files for target test_global
test_global_EXTERNAL_OBJECTS =

test_global: CMakeFiles/test_global.dir/test_global.cpp.o
test_global: CMakeFiles/test_global.dir/build.make
test_global: /usr/local/lib/libLLVMSupport.a
test_global: /usr/local/lib/libLLVMCore.a
test_global: /usr/local/lib/libLLVMIRReader.a
test_global: /usr/local/lib/libLLVMAsmParser.a
test_global: /usr/local/lib/libLLVMBitReader.a
test_global: /usr/local/lib/libLLVMCore.a
test_global: /usr/local/lib/libLLVMBinaryFormat.a
test_global: /usr/local/lib/libLLVMRemarks.a
test_global: /usr/local/lib/libLLVMBitstreamReader.a
test_global: /usr/local/lib/libLLVMSupport.a
test_global: /usr/local/lib/libLLVMDemangle.a
test_global: CMakeFiles/test_global.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/xbx/Desktop/llvm_study/test_global/built/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_global"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_global.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_global.dir/build: test_global
.PHONY : CMakeFiles/test_global.dir/build

CMakeFiles/test_global.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_global.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_global.dir/clean

CMakeFiles/test_global.dir/depend:
	cd /home/xbx/Desktop/llvm_study/test_global/built && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xbx/Desktop/llvm_study/test_global /home/xbx/Desktop/llvm_study/test_global /home/xbx/Desktop/llvm_study/test_global/built /home/xbx/Desktop/llvm_study/test_global/built /home/xbx/Desktop/llvm_study/test_global/built/CMakeFiles/test_global.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_global.dir/depend
