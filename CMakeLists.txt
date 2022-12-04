cmake_minimum_required(VERSION 3.16)

include(FetchContent)

project(MyProject LANGUAGES C)

add_subdirectory(src)
add_subdirectory(include)

FetchContent_Declare(ExternalLibrary
  GIT_REPOSITORY https://github.com/Club-INTech/Formation-CMake
  GIT_TAG external)
FetchContent_MakeAvailable(ExternalLibrary)

add_executable(MyExecutable main.c)
target_link_libraries(MyExecutable PUBLIC ExternalLibrary ComputeLibrary PrintLibrary)
