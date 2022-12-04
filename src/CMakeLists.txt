add_library(ComputeLibrary compute.c)
add_library(PrintLibrary print.c)
target_link_libraries(PrintLibrary PUBLIC ComputeLibrary)
