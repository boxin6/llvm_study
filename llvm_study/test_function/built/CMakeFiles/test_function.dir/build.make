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
CMAKE_SOURCE_DIR = /home/xbx/Desktop/llvm_study/test_function

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xbx/Desktop/llvm_study/test_function/built

# Include any dependencies generated for this target.
include CMakeFiles/test_function.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/test_function.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/test_function.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_function.dir/flags.make

CMakeFiles/test_function.dir/test_function.cpp.o: CMakeFiles/test_function.dir/flags.make
CMakeFiles/test_function.dir/test_function.cpp.o: /home/xbx/Desktop/llvm_study/test_function/test_function.cpp
CMakeFiles/test_function.dir/test_function.cpp.o: CMakeFiles/test_function.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xbx/Desktop/llvm_study/test_function/built/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_function.dir/test_function.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test_function.dir/test_function.cpp.o -MF CMakeFiles/test_function.dir/test_function.cpp.o.d -o CMakeFiles/test_function.dir/test_function.cpp.o -c /home/xbx/Desktop/llvm_study/test_function/test_function.cpp

CMakeFiles/test_function.dir/test_function.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_function.dir/test_function.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xbx/Desktop/llvm_study/test_function/test_function.cpp > CMakeFiles/test_function.dir/test_function.cpp.i

CMakeFiles/test_function.dir/test_function.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_function.dir/test_function.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xbx/Desktop/llvm_study/test_function/test_function.cpp -o CMakeFiles/test_function.dir/test_function.cpp.s

# Object files for target test_function
test_function_OBJECTS = \
"CMakeFiles/test_function.dir/test_function.cpp.o"

# External object files for target test_function
test_function_EXTERNAL_OBJECTS =

test_function: CMakeFiles/test_function.dir/test_function.cpp.o
test_function: CMakeFiles/test_function.dir/build.make
test_function: /usr/local/lib/libLLVMSupport.a
test_function: /usr/local/lib/libLLVMCore.a
test_function: /usr/local/lib/libLLVMIRReader.a
test_function: /usr/local/lib/libLLVMAsmParser.a
test_function: /usr/local/lib/libLLVMBitReader.a
test_function: /usr/local/lib/libLLVMCore.a
test_function: /usr/local/lib/libLLVMBinaryFormat.a
test_function: /usr/local/lib/libLLVMRemarks.a
test_function: /usr/local/lib/libLLVMBitstreamReader.a
test_function: /usr/local/lib/libLLVMSupport.a
test_function: /usr/local/lib/libLLVMDemangle.a
test_function: CMakeFiles/test_function.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/xbx/Desktop/llvm_study/test_function/built/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_function"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_function.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_function.dir/build: test_function
.PHONY : CMakeFiles/test_function.dir/build

CMakeFiles/test_function.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_function.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_function.dir/clean

CMakeFiles/test_function.dir/depend:
	cd /home/xbx/Desktop/llvm_study/test_function/built && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xbx/Desktop/llvm_study/test_function /home/xbx/Desktop/llvm_study/test_function /home/xbx/Desktop/llvm_study/test_function/built /home/xbx/Desktop/llvm_study/test_function/built /home/xbx/Desktop/llvm_study/test_function/built/CMakeFiles/test_function.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_function.dir/depend
