# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

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
CMAKE_COMMAND = F:/cmake/bin/cmake.exe

# The command to remove a file.
RM = F:/cmake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:/Users/Королёв PC/Desktop/c++/FileManager"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:/Users/Королёв PC/Desktop/c++/FileManager/build"

# Include any dependencies generated for this target.
include CMakeFiles/FileManager.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/FileManager.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/FileManager.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FileManager.dir/flags.make

CMakeFiles/FileManager.dir/source/CommandParser.cpp.obj: CMakeFiles/FileManager.dir/flags.make
CMakeFiles/FileManager.dir/source/CommandParser.cpp.obj: C:/Users/Королёв\ PC/Desktop/c++/FileManager/source/CommandParser.cpp
CMakeFiles/FileManager.dir/source/CommandParser.cpp.obj: CMakeFiles/FileManager.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:/Users/Королёв PC/Desktop/c++/FileManager/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FileManager.dir/source/CommandParser.cpp.obj"
	C:/mingw/gcc/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FileManager.dir/source/CommandParser.cpp.obj -MF CMakeFiles/FileManager.dir/source/CommandParser.cpp.obj.d -o CMakeFiles/FileManager.dir/source/CommandParser.cpp.obj -c "C:/Users/Королёв PC/Desktop/c++/FileManager/source/CommandParser.cpp"

CMakeFiles/FileManager.dir/source/CommandParser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/FileManager.dir/source/CommandParser.cpp.i"
	C:/mingw/gcc/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:/Users/Королёв PC/Desktop/c++/FileManager/source/CommandParser.cpp" > CMakeFiles/FileManager.dir/source/CommandParser.cpp.i

CMakeFiles/FileManager.dir/source/CommandParser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/FileManager.dir/source/CommandParser.cpp.s"
	C:/mingw/gcc/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:/Users/Королёв PC/Desktop/c++/FileManager/source/CommandParser.cpp" -o CMakeFiles/FileManager.dir/source/CommandParser.cpp.s

CMakeFiles/FileManager.dir/source/DirEntity.cpp.obj: CMakeFiles/FileManager.dir/flags.make
CMakeFiles/FileManager.dir/source/DirEntity.cpp.obj: C:/Users/Королёв\ PC/Desktop/c++/FileManager/source/DirEntity.cpp
CMakeFiles/FileManager.dir/source/DirEntity.cpp.obj: CMakeFiles/FileManager.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:/Users/Королёв PC/Desktop/c++/FileManager/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/FileManager.dir/source/DirEntity.cpp.obj"
	C:/mingw/gcc/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FileManager.dir/source/DirEntity.cpp.obj -MF CMakeFiles/FileManager.dir/source/DirEntity.cpp.obj.d -o CMakeFiles/FileManager.dir/source/DirEntity.cpp.obj -c "C:/Users/Королёв PC/Desktop/c++/FileManager/source/DirEntity.cpp"

CMakeFiles/FileManager.dir/source/DirEntity.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/FileManager.dir/source/DirEntity.cpp.i"
	C:/mingw/gcc/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:/Users/Королёв PC/Desktop/c++/FileManager/source/DirEntity.cpp" > CMakeFiles/FileManager.dir/source/DirEntity.cpp.i

CMakeFiles/FileManager.dir/source/DirEntity.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/FileManager.dir/source/DirEntity.cpp.s"
	C:/mingw/gcc/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:/Users/Королёв PC/Desktop/c++/FileManager/source/DirEntity.cpp" -o CMakeFiles/FileManager.dir/source/DirEntity.cpp.s

CMakeFiles/FileManager.dir/source/Directory.cpp.obj: CMakeFiles/FileManager.dir/flags.make
CMakeFiles/FileManager.dir/source/Directory.cpp.obj: C:/Users/Королёв\ PC/Desktop/c++/FileManager/source/Directory.cpp
CMakeFiles/FileManager.dir/source/Directory.cpp.obj: CMakeFiles/FileManager.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:/Users/Королёв PC/Desktop/c++/FileManager/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/FileManager.dir/source/Directory.cpp.obj"
	C:/mingw/gcc/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FileManager.dir/source/Directory.cpp.obj -MF CMakeFiles/FileManager.dir/source/Directory.cpp.obj.d -o CMakeFiles/FileManager.dir/source/Directory.cpp.obj -c "C:/Users/Королёв PC/Desktop/c++/FileManager/source/Directory.cpp"

CMakeFiles/FileManager.dir/source/Directory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/FileManager.dir/source/Directory.cpp.i"
	C:/mingw/gcc/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:/Users/Королёв PC/Desktop/c++/FileManager/source/Directory.cpp" > CMakeFiles/FileManager.dir/source/Directory.cpp.i

CMakeFiles/FileManager.dir/source/Directory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/FileManager.dir/source/Directory.cpp.s"
	C:/mingw/gcc/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:/Users/Королёв PC/Desktop/c++/FileManager/source/Directory.cpp" -o CMakeFiles/FileManager.dir/source/Directory.cpp.s

CMakeFiles/FileManager.dir/source/File.cpp.obj: CMakeFiles/FileManager.dir/flags.make
CMakeFiles/FileManager.dir/source/File.cpp.obj: C:/Users/Королёв\ PC/Desktop/c++/FileManager/source/File.cpp
CMakeFiles/FileManager.dir/source/File.cpp.obj: CMakeFiles/FileManager.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:/Users/Королёв PC/Desktop/c++/FileManager/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/FileManager.dir/source/File.cpp.obj"
	C:/mingw/gcc/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FileManager.dir/source/File.cpp.obj -MF CMakeFiles/FileManager.dir/source/File.cpp.obj.d -o CMakeFiles/FileManager.dir/source/File.cpp.obj -c "C:/Users/Королёв PC/Desktop/c++/FileManager/source/File.cpp"

CMakeFiles/FileManager.dir/source/File.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/FileManager.dir/source/File.cpp.i"
	C:/mingw/gcc/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:/Users/Королёв PC/Desktop/c++/FileManager/source/File.cpp" > CMakeFiles/FileManager.dir/source/File.cpp.i

CMakeFiles/FileManager.dir/source/File.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/FileManager.dir/source/File.cpp.s"
	C:/mingw/gcc/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:/Users/Королёв PC/Desktop/c++/FileManager/source/File.cpp" -o CMakeFiles/FileManager.dir/source/File.cpp.s

CMakeFiles/FileManager.dir/source/FileEntity.cpp.obj: CMakeFiles/FileManager.dir/flags.make
CMakeFiles/FileManager.dir/source/FileEntity.cpp.obj: C:/Users/Королёв\ PC/Desktop/c++/FileManager/source/FileEntity.cpp
CMakeFiles/FileManager.dir/source/FileEntity.cpp.obj: CMakeFiles/FileManager.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:/Users/Королёв PC/Desktop/c++/FileManager/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/FileManager.dir/source/FileEntity.cpp.obj"
	C:/mingw/gcc/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FileManager.dir/source/FileEntity.cpp.obj -MF CMakeFiles/FileManager.dir/source/FileEntity.cpp.obj.d -o CMakeFiles/FileManager.dir/source/FileEntity.cpp.obj -c "C:/Users/Королёв PC/Desktop/c++/FileManager/source/FileEntity.cpp"

CMakeFiles/FileManager.dir/source/FileEntity.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/FileManager.dir/source/FileEntity.cpp.i"
	C:/mingw/gcc/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:/Users/Королёв PC/Desktop/c++/FileManager/source/FileEntity.cpp" > CMakeFiles/FileManager.dir/source/FileEntity.cpp.i

CMakeFiles/FileManager.dir/source/FileEntity.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/FileManager.dir/source/FileEntity.cpp.s"
	C:/mingw/gcc/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:/Users/Королёв PC/Desktop/c++/FileManager/source/FileEntity.cpp" -o CMakeFiles/FileManager.dir/source/FileEntity.cpp.s

CMakeFiles/FileManager.dir/source/FileReader.cpp.obj: CMakeFiles/FileManager.dir/flags.make
CMakeFiles/FileManager.dir/source/FileReader.cpp.obj: C:/Users/Королёв\ PC/Desktop/c++/FileManager/source/FileReader.cpp
CMakeFiles/FileManager.dir/source/FileReader.cpp.obj: CMakeFiles/FileManager.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:/Users/Королёв PC/Desktop/c++/FileManager/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/FileManager.dir/source/FileReader.cpp.obj"
	C:/mingw/gcc/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FileManager.dir/source/FileReader.cpp.obj -MF CMakeFiles/FileManager.dir/source/FileReader.cpp.obj.d -o CMakeFiles/FileManager.dir/source/FileReader.cpp.obj -c "C:/Users/Королёв PC/Desktop/c++/FileManager/source/FileReader.cpp"

CMakeFiles/FileManager.dir/source/FileReader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/FileManager.dir/source/FileReader.cpp.i"
	C:/mingw/gcc/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:/Users/Королёв PC/Desktop/c++/FileManager/source/FileReader.cpp" > CMakeFiles/FileManager.dir/source/FileReader.cpp.i

CMakeFiles/FileManager.dir/source/FileReader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/FileManager.dir/source/FileReader.cpp.s"
	C:/mingw/gcc/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:/Users/Королёв PC/Desktop/c++/FileManager/source/FileReader.cpp" -o CMakeFiles/FileManager.dir/source/FileReader.cpp.s

CMakeFiles/FileManager.dir/source/FileSystemEntity.cpp.obj: CMakeFiles/FileManager.dir/flags.make
CMakeFiles/FileManager.dir/source/FileSystemEntity.cpp.obj: C:/Users/Королёв\ PC/Desktop/c++/FileManager/source/FileSystemEntity.cpp
CMakeFiles/FileManager.dir/source/FileSystemEntity.cpp.obj: CMakeFiles/FileManager.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:/Users/Королёв PC/Desktop/c++/FileManager/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/FileManager.dir/source/FileSystemEntity.cpp.obj"
	C:/mingw/gcc/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FileManager.dir/source/FileSystemEntity.cpp.obj -MF CMakeFiles/FileManager.dir/source/FileSystemEntity.cpp.obj.d -o CMakeFiles/FileManager.dir/source/FileSystemEntity.cpp.obj -c "C:/Users/Королёв PC/Desktop/c++/FileManager/source/FileSystemEntity.cpp"

CMakeFiles/FileManager.dir/source/FileSystemEntity.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/FileManager.dir/source/FileSystemEntity.cpp.i"
	C:/mingw/gcc/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:/Users/Королёв PC/Desktop/c++/FileManager/source/FileSystemEntity.cpp" > CMakeFiles/FileManager.dir/source/FileSystemEntity.cpp.i

CMakeFiles/FileManager.dir/source/FileSystemEntity.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/FileManager.dir/source/FileSystemEntity.cpp.s"
	C:/mingw/gcc/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:/Users/Королёв PC/Desktop/c++/FileManager/source/FileSystemEntity.cpp" -o CMakeFiles/FileManager.dir/source/FileSystemEntity.cpp.s

CMakeFiles/FileManager.dir/source/FileWriter.cpp.obj: CMakeFiles/FileManager.dir/flags.make
CMakeFiles/FileManager.dir/source/FileWriter.cpp.obj: C:/Users/Королёв\ PC/Desktop/c++/FileManager/source/FileWriter.cpp
CMakeFiles/FileManager.dir/source/FileWriter.cpp.obj: CMakeFiles/FileManager.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:/Users/Королёв PC/Desktop/c++/FileManager/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/FileManager.dir/source/FileWriter.cpp.obj"
	C:/mingw/gcc/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FileManager.dir/source/FileWriter.cpp.obj -MF CMakeFiles/FileManager.dir/source/FileWriter.cpp.obj.d -o CMakeFiles/FileManager.dir/source/FileWriter.cpp.obj -c "C:/Users/Королёв PC/Desktop/c++/FileManager/source/FileWriter.cpp"

CMakeFiles/FileManager.dir/source/FileWriter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/FileManager.dir/source/FileWriter.cpp.i"
	C:/mingw/gcc/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:/Users/Королёв PC/Desktop/c++/FileManager/source/FileWriter.cpp" > CMakeFiles/FileManager.dir/source/FileWriter.cpp.i

CMakeFiles/FileManager.dir/source/FileWriter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/FileManager.dir/source/FileWriter.cpp.s"
	C:/mingw/gcc/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:/Users/Королёв PC/Desktop/c++/FileManager/source/FileWriter.cpp" -o CMakeFiles/FileManager.dir/source/FileWriter.cpp.s

CMakeFiles/FileManager.dir/source/Shell.cpp.obj: CMakeFiles/FileManager.dir/flags.make
CMakeFiles/FileManager.dir/source/Shell.cpp.obj: C:/Users/Королёв\ PC/Desktop/c++/FileManager/source/Shell.cpp
CMakeFiles/FileManager.dir/source/Shell.cpp.obj: CMakeFiles/FileManager.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:/Users/Королёв PC/Desktop/c++/FileManager/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/FileManager.dir/source/Shell.cpp.obj"
	C:/mingw/gcc/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FileManager.dir/source/Shell.cpp.obj -MF CMakeFiles/FileManager.dir/source/Shell.cpp.obj.d -o CMakeFiles/FileManager.dir/source/Shell.cpp.obj -c "C:/Users/Королёв PC/Desktop/c++/FileManager/source/Shell.cpp"

CMakeFiles/FileManager.dir/source/Shell.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/FileManager.dir/source/Shell.cpp.i"
	C:/mingw/gcc/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:/Users/Королёв PC/Desktop/c++/FileManager/source/Shell.cpp" > CMakeFiles/FileManager.dir/source/Shell.cpp.i

CMakeFiles/FileManager.dir/source/Shell.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/FileManager.dir/source/Shell.cpp.s"
	C:/mingw/gcc/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:/Users/Королёв PC/Desktop/c++/FileManager/source/Shell.cpp" -o CMakeFiles/FileManager.dir/source/Shell.cpp.s

CMakeFiles/FileManager.dir/source/common_functions.cpp.obj: CMakeFiles/FileManager.dir/flags.make
CMakeFiles/FileManager.dir/source/common_functions.cpp.obj: C:/Users/Королёв\ PC/Desktop/c++/FileManager/source/common_functions.cpp
CMakeFiles/FileManager.dir/source/common_functions.cpp.obj: CMakeFiles/FileManager.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:/Users/Королёв PC/Desktop/c++/FileManager/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/FileManager.dir/source/common_functions.cpp.obj"
	C:/mingw/gcc/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FileManager.dir/source/common_functions.cpp.obj -MF CMakeFiles/FileManager.dir/source/common_functions.cpp.obj.d -o CMakeFiles/FileManager.dir/source/common_functions.cpp.obj -c "C:/Users/Королёв PC/Desktop/c++/FileManager/source/common_functions.cpp"

CMakeFiles/FileManager.dir/source/common_functions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/FileManager.dir/source/common_functions.cpp.i"
	C:/mingw/gcc/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:/Users/Королёв PC/Desktop/c++/FileManager/source/common_functions.cpp" > CMakeFiles/FileManager.dir/source/common_functions.cpp.i

CMakeFiles/FileManager.dir/source/common_functions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/FileManager.dir/source/common_functions.cpp.s"
	C:/mingw/gcc/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:/Users/Королёв PC/Desktop/c++/FileManager/source/common_functions.cpp" -o CMakeFiles/FileManager.dir/source/common_functions.cpp.s

CMakeFiles/FileManager.dir/source/main.cpp.obj: CMakeFiles/FileManager.dir/flags.make
CMakeFiles/FileManager.dir/source/main.cpp.obj: C:/Users/Королёв\ PC/Desktop/c++/FileManager/source/main.cpp
CMakeFiles/FileManager.dir/source/main.cpp.obj: CMakeFiles/FileManager.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:/Users/Королёв PC/Desktop/c++/FileManager/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/FileManager.dir/source/main.cpp.obj"
	C:/mingw/gcc/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FileManager.dir/source/main.cpp.obj -MF CMakeFiles/FileManager.dir/source/main.cpp.obj.d -o CMakeFiles/FileManager.dir/source/main.cpp.obj -c "C:/Users/Королёв PC/Desktop/c++/FileManager/source/main.cpp"

CMakeFiles/FileManager.dir/source/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/FileManager.dir/source/main.cpp.i"
	C:/mingw/gcc/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:/Users/Королёв PC/Desktop/c++/FileManager/source/main.cpp" > CMakeFiles/FileManager.dir/source/main.cpp.i

CMakeFiles/FileManager.dir/source/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/FileManager.dir/source/main.cpp.s"
	C:/mingw/gcc/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:/Users/Королёв PC/Desktop/c++/FileManager/source/main.cpp" -o CMakeFiles/FileManager.dir/source/main.cpp.s

# Object files for target FileManager
FileManager_OBJECTS = \
"CMakeFiles/FileManager.dir/source/CommandParser.cpp.obj" \
"CMakeFiles/FileManager.dir/source/DirEntity.cpp.obj" \
"CMakeFiles/FileManager.dir/source/Directory.cpp.obj" \
"CMakeFiles/FileManager.dir/source/File.cpp.obj" \
"CMakeFiles/FileManager.dir/source/FileEntity.cpp.obj" \
"CMakeFiles/FileManager.dir/source/FileReader.cpp.obj" \
"CMakeFiles/FileManager.dir/source/FileSystemEntity.cpp.obj" \
"CMakeFiles/FileManager.dir/source/FileWriter.cpp.obj" \
"CMakeFiles/FileManager.dir/source/Shell.cpp.obj" \
"CMakeFiles/FileManager.dir/source/common_functions.cpp.obj" \
"CMakeFiles/FileManager.dir/source/main.cpp.obj"

# External object files for target FileManager
FileManager_EXTERNAL_OBJECTS =

FileManager.exe: CMakeFiles/FileManager.dir/source/CommandParser.cpp.obj
FileManager.exe: CMakeFiles/FileManager.dir/source/DirEntity.cpp.obj
FileManager.exe: CMakeFiles/FileManager.dir/source/Directory.cpp.obj
FileManager.exe: CMakeFiles/FileManager.dir/source/File.cpp.obj
FileManager.exe: CMakeFiles/FileManager.dir/source/FileEntity.cpp.obj
FileManager.exe: CMakeFiles/FileManager.dir/source/FileReader.cpp.obj
FileManager.exe: CMakeFiles/FileManager.dir/source/FileSystemEntity.cpp.obj
FileManager.exe: CMakeFiles/FileManager.dir/source/FileWriter.cpp.obj
FileManager.exe: CMakeFiles/FileManager.dir/source/Shell.cpp.obj
FileManager.exe: CMakeFiles/FileManager.dir/source/common_functions.cpp.obj
FileManager.exe: CMakeFiles/FileManager.dir/source/main.cpp.obj
FileManager.exe: CMakeFiles/FileManager.dir/build.make
FileManager.exe: CMakeFiles/FileManager.dir/linkLibs.rsp
FileManager.exe: CMakeFiles/FileManager.dir/objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="C:/Users/Королёв PC/Desktop/c++/FileManager/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX executable FileManager.exe"
	F:/cmake/bin/cmake.exe -E rm -f CMakeFiles/FileManager.dir/objects.a
	C:/mingw/gcc/bin/ar.exe qc CMakeFiles/FileManager.dir/objects.a @CMakeFiles/FileManager.dir/objects1.rsp
	C:/mingw/gcc/bin/c++.exe -Wl,--whole-archive CMakeFiles/FileManager.dir/objects.a -Wl,--no-whole-archive -o FileManager.exe -Wl,--out-implib,libFileManager.dll.a -Wl,--major-image-version,0,--minor-image-version,0 @CMakeFiles/FileManager.dir/linkLibs.rsp

# Rule to build all files generated by this target.
CMakeFiles/FileManager.dir/build: FileManager.exe
.PHONY : CMakeFiles/FileManager.dir/build

CMakeFiles/FileManager.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FileManager.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FileManager.dir/clean

CMakeFiles/FileManager.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "C:/Users/Королёв PC/Desktop/c++/FileManager" "C:/Users/Королёв PC/Desktop/c++/FileManager" "C:/Users/Королёв PC/Desktop/c++/FileManager/build" "C:/Users/Королёв PC/Desktop/c++/FileManager/build" "C:/Users/Королёв PC/Desktop/c++/FileManager/build/CMakeFiles/FileManager.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/FileManager.dir/depend

