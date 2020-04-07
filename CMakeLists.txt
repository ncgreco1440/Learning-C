# CMakeList.txt : CMake project for tutorial, include source and define
# project specific logic here.
#
cmake_minimum_required(VERSION 3.15)

project(
  tutorial
  VERSION 1.0.0
  LANGUAGES C)

# Add source to this project's executable.
add_executable(tutorial src/main.c)

set_target_properties(tutorial PROPERTIES LINKER_LANGUAGE C)

add_subdirectory(src/Lesson_001)
add_subdirectory(src/Arrays)
add_subdirectory(src/Functions)