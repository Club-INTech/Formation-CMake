cmake_minimum_required(VERSION 3.16)
project(MyProject LANGUAGES C)

add_subdirectory(src)
add_subdirectory(include)

add_executable(MyExecutable main.c)
target_link_libraries(MyExecutable PUBLIC ComputeLibrary PrintLibrary)
