cmake_minimum_required(VERSION 3.15)

project(variables)

option(MY_OPTION OFF)

add_library(a STATIC src/a.cpp)
target_compile_definitions(a PRIVATE MY_OPTION=${MY_OPTION})
target_include_directories(a PUBLIC include)

add_library(a::a ALIAS a)
