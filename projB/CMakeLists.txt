cmake_minimum_required(VERSION 2.6)
project(projB)

message(${projA_INCLUDE_DIRS})
include_directories(${projA_INCLUDE_DIRS})
add_executable(projB src/main.cpp)
target_link_libraries(projB add)
