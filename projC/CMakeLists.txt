cmake_minimum_required(VERSION 2.6)

project(projC)

find_package(Boost REQUIRED)

file(GLOB SRC src/*.cpp)
file(GLOB HEADERS include/*.h)

include_directories(${Boost_INCLUDE_DIRS})
include_directories(${projA_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} ${SRC} ${HEADERS})
target_link_libraries(${PROJECT_NAME} boost_unit_test_framework projA)
