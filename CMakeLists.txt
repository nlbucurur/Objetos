cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(Gatito VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include_directories(${CMAKE_BINARY_DIR}/include)

add_subdirectory(Lib)
add_subdirectory(Srs)

add_executable(Gatito main.cpp)

target_link_libraries(Gatito animal_lib gatito_lib)
