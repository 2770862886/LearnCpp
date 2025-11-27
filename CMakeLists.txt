cmake_minimum_required(VERSION 3.16)

project(LearnCpp)

file(GLOB_RECURSE SRCS src/*.cpp)

add_executable(LearnCpp ${SRCS})

target_include_directories(LearnCpp
PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)
