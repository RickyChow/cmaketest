cmake_minimum_required(VERSION 2.6)

project(projA)

include_directories(${PROJECT_SOURCE_DIR}/include)
add_library(${PROJECT_NAME} src/add.cpp)

#sets up path such that projects that depend on this can use the headers
set(${PROJECT_NAME}_INCLUDE_DIRS ${PROJECT_SOURCE_DIR}/include
    CACHE FILEPATH "${PROJECT_NAME}: include directories" FORCE)

#puts includes in a common folder
install(FILES include/add.h 
        DESTINATION ${PROJECT_SOURCE_DIR}/../include)
