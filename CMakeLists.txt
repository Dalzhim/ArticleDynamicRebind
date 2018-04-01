cmake_minimum_required(VERSION 3.9)

project(rebind)

add_library(flib SHARED flib.cpp)
add_library(glib SHARED glib.cpp)
add_executable(rebind main.cpp)
target_link_libraries(flib PRIVATE -flat_namespace)
target_link_libraries(glib PRIVATE -flat_namespace)
target_compile_features(flib PRIVATE cxx_std_17)
target_compile_features(glib PRIVATE cxx_std_17)
target_compile_features(rebind PRIVATE cxx_std_17)
