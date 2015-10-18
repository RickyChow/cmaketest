cmake_minimum_required(VERSION 2.6)

project(projC)

#set(BOOST_LIBRARYDIR /usr/lib/x86_64-linux-gnu/)
#find_package(Boost COMPONENTS UNIT_TEST_FRAMEWORK REQUIRED)
find_package(Boost COMPONENTS unit_test_framework REQUIRED)

file(GLOB SRC src/*.cpp)
file(GLOB HEADERS include/*.h)

include_directories(${Boost_INCLUDE_DIRS})
include_directories(${projA_INCLUDE_DIRS})

add_definitions(-DBOOST_TEST_DYN_LINK)

add_executable(${PROJECT_NAME} ${SRC} ${HEADERS})
target_link_libraries(${PROJECT_NAME} ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY} projA)
