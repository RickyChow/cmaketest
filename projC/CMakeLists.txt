cmake_minimum_required(VERSION 2.6)

project(projC)

find_package(Boost COMPONENTS unit_test_framework REQUIRED)

file(GLOB SRC src/*.cpp)
file(GLOB HEADERS include/*.h)

include_directories(${Boost_INCLUDE_DIRS})
include_directories(${projA_INCLUDE_DIRS})

if (UNIX)
	add_definitions(-DBOOST_TEST_DYN_LINK)
endif (UNIX)

add_executable(${PROJECT_NAME} ${SRC} ${HEADERS})
target_link_libraries(${PROJECT_NAME} ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY} projA)
