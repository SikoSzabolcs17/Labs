﻿# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.21

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\A_Egyetem\Elso ev II\Adatszerkerezetek\Labor\SapiSales\Labs"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\A_Egyetem\Elso ev II\Adatszerkerezetek\Labor\SapiSales\Labs\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles\Labs.dir\depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles\Labs.dir\compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles\Labs.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Labs.dir\flags.make

CMakeFiles\Labs.dir\main.c.obj: CMakeFiles\Labs.dir\flags.make
CMakeFiles\Labs.dir\main.c.obj: ..\main.c
CMakeFiles\Labs.dir\main.c.obj: CMakeFiles\Labs.dir\compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\A_Egyetem\Elso ev II\Adatszerkerezetek\Labor\SapiSales\Labs\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Labs.dir/main.c.obj"
	$(CMAKE_COMMAND) -E cmake_cl_compile_depends --dep-file=CMakeFiles\Labs.dir\main.c.obj.d --working-dir="D:\A_Egyetem\Elso ev II\Adatszerkerezetek\Labor\SapiSales\Labs\cmake-build-debug" --filter-prefix="Note: including file: " -- C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /showIncludes /FoCMakeFiles\Labs.dir\main.c.obj /FdCMakeFiles\Labs.dir\ /FS -c "D:\A_Egyetem\Elso ev II\Adatszerkerezetek\Labor\SapiSales\Labs\main.c"
<<

CMakeFiles\Labs.dir\main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Labs.dir/main.c.i"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe > CMakeFiles\Labs.dir\main.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\A_Egyetem\Elso ev II\Adatszerkerezetek\Labor\SapiSales\Labs\main.c"
<<

CMakeFiles\Labs.dir\main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Labs.dir/main.c.s"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\Labs.dir\main.c.s /c "D:\A_Egyetem\Elso ev II\Adatszerkerezetek\Labor\SapiSales\Labs\main.c"
<<

CMakeFiles\Labs.dir\shared\src\errors.c.obj: CMakeFiles\Labs.dir\flags.make
CMakeFiles\Labs.dir\shared\src\errors.c.obj: ..\shared\src\errors.c
CMakeFiles\Labs.dir\shared\src\errors.c.obj: CMakeFiles\Labs.dir\compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\A_Egyetem\Elso ev II\Adatszerkerezetek\Labor\SapiSales\Labs\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Labs.dir/shared/src/errors.c.obj"
	$(CMAKE_COMMAND) -E cmake_cl_compile_depends --dep-file=CMakeFiles\Labs.dir\shared\src\errors.c.obj.d --working-dir="D:\A_Egyetem\Elso ev II\Adatszerkerezetek\Labor\SapiSales\Labs\cmake-build-debug" --filter-prefix="Note: including file: " -- C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /showIncludes /FoCMakeFiles\Labs.dir\shared\src\errors.c.obj /FdCMakeFiles\Labs.dir\ /FS -c "D:\A_Egyetem\Elso ev II\Adatszerkerezetek\Labor\SapiSales\Labs\shared\src\errors.c"
<<

CMakeFiles\Labs.dir\shared\src\errors.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Labs.dir/shared/src/errors.c.i"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe > CMakeFiles\Labs.dir\shared\src\errors.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\A_Egyetem\Elso ev II\Adatszerkerezetek\Labor\SapiSales\Labs\shared\src\errors.c"
<<

CMakeFiles\Labs.dir\shared\src\errors.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Labs.dir/shared/src/errors.c.s"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\Labs.dir\shared\src\errors.c.s /c "D:\A_Egyetem\Elso ev II\Adatszerkerezetek\Labor\SapiSales\Labs\shared\src\errors.c"
<<

CMakeFiles\Labs.dir\shared\src\messages.c.obj: CMakeFiles\Labs.dir\flags.make
CMakeFiles\Labs.dir\shared\src\messages.c.obj: ..\shared\src\messages.c
CMakeFiles\Labs.dir\shared\src\messages.c.obj: CMakeFiles\Labs.dir\compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\A_Egyetem\Elso ev II\Adatszerkerezetek\Labor\SapiSales\Labs\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Labs.dir/shared/src/messages.c.obj"
	$(CMAKE_COMMAND) -E cmake_cl_compile_depends --dep-file=CMakeFiles\Labs.dir\shared\src\messages.c.obj.d --working-dir="D:\A_Egyetem\Elso ev II\Adatszerkerezetek\Labor\SapiSales\Labs\cmake-build-debug" --filter-prefix="Note: including file: " -- C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /showIncludes /FoCMakeFiles\Labs.dir\shared\src\messages.c.obj /FdCMakeFiles\Labs.dir\ /FS -c "D:\A_Egyetem\Elso ev II\Adatszerkerezetek\Labor\SapiSales\Labs\shared\src\messages.c"
<<

CMakeFiles\Labs.dir\shared\src\messages.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Labs.dir/shared/src/messages.c.i"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe > CMakeFiles\Labs.dir\shared\src\messages.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\A_Egyetem\Elso ev II\Adatszerkerezetek\Labor\SapiSales\Labs\shared\src\messages.c"
<<

CMakeFiles\Labs.dir\shared\src\messages.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Labs.dir/shared/src/messages.c.s"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\Labs.dir\shared\src\messages.c.s /c "D:\A_Egyetem\Elso ev II\Adatszerkerezetek\Labor\SapiSales\Labs\shared\src\messages.c"
<<

CMakeFiles\Labs.dir\sapi_sales\src\models\user.c.obj: CMakeFiles\Labs.dir\flags.make
CMakeFiles\Labs.dir\sapi_sales\src\models\user.c.obj: ..\sapi_sales\src\models\user.c
CMakeFiles\Labs.dir\sapi_sales\src\models\user.c.obj: CMakeFiles\Labs.dir\compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\A_Egyetem\Elso ev II\Adatszerkerezetek\Labor\SapiSales\Labs\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/Labs.dir/sapi_sales/src/models/user.c.obj"
	$(CMAKE_COMMAND) -E cmake_cl_compile_depends --dep-file=CMakeFiles\Labs.dir\sapi_sales\src\models\user.c.obj.d --working-dir="D:\A_Egyetem\Elso ev II\Adatszerkerezetek\Labor\SapiSales\Labs\cmake-build-debug" --filter-prefix="Note: including file: " -- C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /showIncludes /FoCMakeFiles\Labs.dir\sapi_sales\src\models\user.c.obj /FdCMakeFiles\Labs.dir\ /FS -c "D:\A_Egyetem\Elso ev II\Adatszerkerezetek\Labor\SapiSales\Labs\sapi_sales\src\models\user.c"
<<

CMakeFiles\Labs.dir\sapi_sales\src\models\user.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Labs.dir/sapi_sales/src/models/user.c.i"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe > CMakeFiles\Labs.dir\sapi_sales\src\models\user.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\A_Egyetem\Elso ev II\Adatszerkerezetek\Labor\SapiSales\Labs\sapi_sales\src\models\user.c"
<<

CMakeFiles\Labs.dir\sapi_sales\src\models\user.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Labs.dir/sapi_sales/src/models/user.c.s"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\Labs.dir\sapi_sales\src\models\user.c.s /c "D:\A_Egyetem\Elso ev II\Adatszerkerezetek\Labor\SapiSales\Labs\sapi_sales\src\models\user.c"
<<

# Object files for target Labs
Labs_OBJECTS = \
"CMakeFiles\Labs.dir\main.c.obj" \
"CMakeFiles\Labs.dir\shared\src\errors.c.obj" \
"CMakeFiles\Labs.dir\shared\src\messages.c.obj" \
"CMakeFiles\Labs.dir\sapi_sales\src\models\user.c.obj"

# External object files for target Labs
Labs_EXTERNAL_OBJECTS =

Labs.exe: CMakeFiles\Labs.dir\main.c.obj
Labs.exe: CMakeFiles\Labs.dir\shared\src\errors.c.obj
Labs.exe: CMakeFiles\Labs.dir\shared\src\messages.c.obj
Labs.exe: CMakeFiles\Labs.dir\sapi_sales\src\models\user.c.obj
Labs.exe: CMakeFiles\Labs.dir\build.make
Labs.exe: CMakeFiles\Labs.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\A_Egyetem\Elso ev II\Adatszerkerezetek\Labor\SapiSales\Labs\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable Labs.exe"
	"C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\Labs.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\Labs.dir\objects1.rsp @<<
 /out:Labs.exe /implib:Labs.lib /pdb:"D:\A_Egyetem\Elso ev II\Adatszerkerezetek\Labor\SapiSales\Labs\cmake-build-debug\Labs.pdb" /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Labs.dir\build: Labs.exe
.PHONY : CMakeFiles\Labs.dir\build

CMakeFiles\Labs.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Labs.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Labs.dir\clean

CMakeFiles\Labs.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "D:\A_Egyetem\Elso ev II\Adatszerkerezetek\Labor\SapiSales\Labs" "D:\A_Egyetem\Elso ev II\Adatszerkerezetek\Labor\SapiSales\Labs" "D:\A_Egyetem\Elso ev II\Adatszerkerezetek\Labor\SapiSales\Labs\cmake-build-debug" "D:\A_Egyetem\Elso ev II\Adatszerkerezetek\Labor\SapiSales\Labs\cmake-build-debug" "D:\A_Egyetem\Elso ev II\Adatszerkerezetek\Labor\SapiSales\Labs\cmake-build-debug\CMakeFiles\Labs.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\Labs.dir\depend

