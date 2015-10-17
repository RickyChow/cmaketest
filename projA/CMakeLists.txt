cmake_minimum_required(VERSION 2.6)

project(add)
include_directories(include/)
add_library(add src/add.cpp)

install(TARGETS add DESTINATION ${CMAKE_SOURCE_DIR}/../lib)
install(FILES include/add.h DESTINATION ${CMAKE_SOURCE_DIR}/../include)
