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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.16.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.16.2/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mohammad.fakhreddin/Documents/c-plus-plus-projects/openGl-3D-cube

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mohammad.fakhreddin/Documents/c-plus-plus-projects/openGl-3D-cube

# Include any dependencies generated for this target.
include CMakeFiles/3d-cube.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/3d-cube.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/3d-cube.dir/flags.make

CMakeFiles/3d-cube.dir/src/3d_shape/Shape3d.cpp.o: CMakeFiles/3d-cube.dir/flags.make
CMakeFiles/3d-cube.dir/src/3d_shape/Shape3d.cpp.o: src/3d_shape/Shape3d.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mohammad.fakhreddin/Documents/c-plus-plus-projects/openGl-3D-cube/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/3d-cube.dir/src/3d_shape/Shape3d.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/3d-cube.dir/src/3d_shape/Shape3d.cpp.o -c /Users/mohammad.fakhreddin/Documents/c-plus-plus-projects/openGl-3D-cube/src/3d_shape/Shape3d.cpp

CMakeFiles/3d-cube.dir/src/3d_shape/Shape3d.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/3d-cube.dir/src/3d_shape/Shape3d.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mohammad.fakhreddin/Documents/c-plus-plus-projects/openGl-3D-cube/src/3d_shape/Shape3d.cpp > CMakeFiles/3d-cube.dir/src/3d_shape/Shape3d.cpp.i

CMakeFiles/3d-cube.dir/src/3d_shape/Shape3d.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/3d-cube.dir/src/3d_shape/Shape3d.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mohammad.fakhreddin/Documents/c-plus-plus-projects/openGl-3D-cube/src/3d_shape/Shape3d.cpp -o CMakeFiles/3d-cube.dir/src/3d_shape/Shape3d.cpp.s

CMakeFiles/3d-cube.dir/src/application/Application.cpp.o: CMakeFiles/3d-cube.dir/flags.make
CMakeFiles/3d-cube.dir/src/application/Application.cpp.o: src/application/Application.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mohammad.fakhreddin/Documents/c-plus-plus-projects/openGl-3D-cube/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/3d-cube.dir/src/application/Application.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/3d-cube.dir/src/application/Application.cpp.o -c /Users/mohammad.fakhreddin/Documents/c-plus-plus-projects/openGl-3D-cube/src/application/Application.cpp

CMakeFiles/3d-cube.dir/src/application/Application.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/3d-cube.dir/src/application/Application.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mohammad.fakhreddin/Documents/c-plus-plus-projects/openGl-3D-cube/src/application/Application.cpp > CMakeFiles/3d-cube.dir/src/application/Application.cpp.i

CMakeFiles/3d-cube.dir/src/application/Application.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/3d-cube.dir/src/application/Application.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mohammad.fakhreddin/Documents/c-plus-plus-projects/openGl-3D-cube/src/application/Application.cpp -o CMakeFiles/3d-cube.dir/src/application/Application.cpp.s

CMakeFiles/3d-cube.dir/src/fa_texture/FaTexture.cpp.o: CMakeFiles/3d-cube.dir/flags.make
CMakeFiles/3d-cube.dir/src/fa_texture/FaTexture.cpp.o: src/fa_texture/FaTexture.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mohammad.fakhreddin/Documents/c-plus-plus-projects/openGl-3D-cube/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/3d-cube.dir/src/fa_texture/FaTexture.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/3d-cube.dir/src/fa_texture/FaTexture.cpp.o -c /Users/mohammad.fakhreddin/Documents/c-plus-plus-projects/openGl-3D-cube/src/fa_texture/FaTexture.cpp

CMakeFiles/3d-cube.dir/src/fa_texture/FaTexture.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/3d-cube.dir/src/fa_texture/FaTexture.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mohammad.fakhreddin/Documents/c-plus-plus-projects/openGl-3D-cube/src/fa_texture/FaTexture.cpp > CMakeFiles/3d-cube.dir/src/fa_texture/FaTexture.cpp.i

CMakeFiles/3d-cube.dir/src/fa_texture/FaTexture.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/3d-cube.dir/src/fa_texture/FaTexture.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mohammad.fakhreddin/Documents/c-plus-plus-projects/openGl-3D-cube/src/fa_texture/FaTexture.cpp -o CMakeFiles/3d-cube.dir/src/fa_texture/FaTexture.cpp.s

CMakeFiles/3d-cube.dir/src/main.cpp.o: CMakeFiles/3d-cube.dir/flags.make
CMakeFiles/3d-cube.dir/src/main.cpp.o: src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mohammad.fakhreddin/Documents/c-plus-plus-projects/openGl-3D-cube/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/3d-cube.dir/src/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/3d-cube.dir/src/main.cpp.o -c /Users/mohammad.fakhreddin/Documents/c-plus-plus-projects/openGl-3D-cube/src/main.cpp

CMakeFiles/3d-cube.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/3d-cube.dir/src/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mohammad.fakhreddin/Documents/c-plus-plus-projects/openGl-3D-cube/src/main.cpp > CMakeFiles/3d-cube.dir/src/main.cpp.i

CMakeFiles/3d-cube.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/3d-cube.dir/src/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mohammad.fakhreddin/Documents/c-plus-plus-projects/openGl-3D-cube/src/main.cpp -o CMakeFiles/3d-cube.dir/src/main.cpp.s

CMakeFiles/3d-cube.dir/src/utils/screen/ScreenSize.cpp.o: CMakeFiles/3d-cube.dir/flags.make
CMakeFiles/3d-cube.dir/src/utils/screen/ScreenSize.cpp.o: src/utils/screen/ScreenSize.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mohammad.fakhreddin/Documents/c-plus-plus-projects/openGl-3D-cube/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/3d-cube.dir/src/utils/screen/ScreenSize.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/3d-cube.dir/src/utils/screen/ScreenSize.cpp.o -c /Users/mohammad.fakhreddin/Documents/c-plus-plus-projects/openGl-3D-cube/src/utils/screen/ScreenSize.cpp

CMakeFiles/3d-cube.dir/src/utils/screen/ScreenSize.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/3d-cube.dir/src/utils/screen/ScreenSize.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mohammad.fakhreddin/Documents/c-plus-plus-projects/openGl-3D-cube/src/utils/screen/ScreenSize.cpp > CMakeFiles/3d-cube.dir/src/utils/screen/ScreenSize.cpp.i

CMakeFiles/3d-cube.dir/src/utils/screen/ScreenSize.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/3d-cube.dir/src/utils/screen/ScreenSize.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mohammad.fakhreddin/Documents/c-plus-plus-projects/openGl-3D-cube/src/utils/screen/ScreenSize.cpp -o CMakeFiles/3d-cube.dir/src/utils/screen/ScreenSize.cpp.s

# Object files for target 3d-cube
3d__cube_OBJECTS = \
"CMakeFiles/3d-cube.dir/src/3d_shape/Shape3d.cpp.o" \
"CMakeFiles/3d-cube.dir/src/application/Application.cpp.o" \
"CMakeFiles/3d-cube.dir/src/fa_texture/FaTexture.cpp.o" \
"CMakeFiles/3d-cube.dir/src/main.cpp.o" \
"CMakeFiles/3d-cube.dir/src/utils/screen/ScreenSize.cpp.o"

# External object files for target 3d-cube
3d__cube_EXTERNAL_OBJECTS =

3d-cube: CMakeFiles/3d-cube.dir/src/3d_shape/Shape3d.cpp.o
3d-cube: CMakeFiles/3d-cube.dir/src/application/Application.cpp.o
3d-cube: CMakeFiles/3d-cube.dir/src/fa_texture/FaTexture.cpp.o
3d-cube: CMakeFiles/3d-cube.dir/src/main.cpp.o
3d-cube: CMakeFiles/3d-cube.dir/src/utils/screen/ScreenSize.cpp.o
3d-cube: CMakeFiles/3d-cube.dir/build.make
3d-cube: CMakeFiles/3d-cube.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mohammad.fakhreddin/Documents/c-plus-plus-projects/openGl-3D-cube/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable 3d-cube"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/3d-cube.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/3d-cube.dir/build: 3d-cube

.PHONY : CMakeFiles/3d-cube.dir/build

CMakeFiles/3d-cube.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/3d-cube.dir/cmake_clean.cmake
.PHONY : CMakeFiles/3d-cube.dir/clean

CMakeFiles/3d-cube.dir/depend:
	cd /Users/mohammad.fakhreddin/Documents/c-plus-plus-projects/openGl-3D-cube && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mohammad.fakhreddin/Documents/c-plus-plus-projects/openGl-3D-cube /Users/mohammad.fakhreddin/Documents/c-plus-plus-projects/openGl-3D-cube /Users/mohammad.fakhreddin/Documents/c-plus-plus-projects/openGl-3D-cube /Users/mohammad.fakhreddin/Documents/c-plus-plus-projects/openGl-3D-cube /Users/mohammad.fakhreddin/Documents/c-plus-plus-projects/openGl-3D-cube/CMakeFiles/3d-cube.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/3d-cube.dir/depend

