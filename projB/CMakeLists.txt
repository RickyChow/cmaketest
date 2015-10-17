cmake_minimum_required(VERSION 2.6)
project(projB)

link_directories(${CMAKE_SOURCE_DIR}/../lib)
include_directories(${CMAKE_SOURCE_DIR}/../include)

add_executable(projB src/main.cpp)
target_link_libraries(projB add)
