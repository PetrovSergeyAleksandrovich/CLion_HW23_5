# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Poizone\CLion_HW23_5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Poizone\CLion_HW23_5\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\task_4.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\task_4.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\task_4.dir\flags.make

CMakeFiles\task_4.dir\HW_23_5_task_4.cpp.obj: CMakeFiles\task_4.dir\flags.make
CMakeFiles\task_4.dir\HW_23_5_task_4.cpp.obj: ..\HW_23_5_task_4.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Poizone\CLion_HW23_5\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/task_4.dir/HW_23_5_task_4.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\task_4.dir\HW_23_5_task_4.cpp.obj /FdCMakeFiles\task_4.dir\ /FS -c C:\Users\Poizone\CLion_HW23_5\HW_23_5_task_4.cpp
<<

CMakeFiles\task_4.dir\HW_23_5_task_4.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/task_4.dir/HW_23_5_task_4.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx86\x86\cl.exe > CMakeFiles\task_4.dir\HW_23_5_task_4.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Poizone\CLion_HW23_5\HW_23_5_task_4.cpp
<<

CMakeFiles\task_4.dir\HW_23_5_task_4.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/task_4.dir/HW_23_5_task_4.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\task_4.dir\HW_23_5_task_4.cpp.s /c C:\Users\Poizone\CLion_HW23_5\HW_23_5_task_4.cpp
<<

# Object files for target task_4
task_4_OBJECTS = \
"CMakeFiles\task_4.dir\HW_23_5_task_4.cpp.obj"

# External object files for target task_4
task_4_EXTERNAL_OBJECTS =

task_4.exe: CMakeFiles\task_4.dir\HW_23_5_task_4.cpp.obj
task_4.exe: CMakeFiles\task_4.dir\build.make
task_4.exe: CMakeFiles\task_4.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Poizone\CLion_HW23_5\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable task_4.exe"
	"C:\Program Files\JetBrains\CLion 2020.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\task_4.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\task_4.dir\objects1.rsp @<<
 /out:task_4.exe /implib:task_4.lib /pdb:C:\Users\Poizone\CLion_HW23_5\cmake-build-debug\task_4.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\task_4.dir\build: task_4.exe

.PHONY : CMakeFiles\task_4.dir\build

CMakeFiles\task_4.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\task_4.dir\cmake_clean.cmake
.PHONY : CMakeFiles\task_4.dir\clean

CMakeFiles\task_4.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\Poizone\CLion_HW23_5 C:\Users\Poizone\CLion_HW23_5 C:\Users\Poizone\CLion_HW23_5\cmake-build-debug C:\Users\Poizone\CLion_HW23_5\cmake-build-debug C:\Users\Poizone\CLion_HW23_5\cmake-build-debug\CMakeFiles\task_4.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\task_4.dir\depend

