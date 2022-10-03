cmake_minimum_required(VERSION 3.10)

project(LEARNCPP LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

include_directories(${CMAKE_SOURCE_DIR}/include/ ${CMAKE_SOURCE_DIR}/src/)

set (   HEADER_FILES
        ${CMAKE_SOURCE_DIR}/include/fibonacci.hpp   )
message("HEADER_FILES ${HEADER_FILES}")

set (   SOURCE_FILE
        ${CMAKE_SOURCE_DIR}/src/fibonacci.cpp   )
message("SOURCE_FILE ${SOURCE_FILE}")

add_library(    ${CMAKE_PROJECT_NAME} 
                ${HEADER_FILES}
                ${SOURCE_FILE}  )

add_executable( ${CMAKE_PROJECT_NAME}_TEST
                main.cpp 
                ${HEADER_FILES}
                ${SOURCE_FILE} )