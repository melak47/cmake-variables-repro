cmake_minimum_required(VERSION 3.15)

project(project)

set(MY_OPTION OFF)
add_subdirectory(variables)

add_executable(main src/main.cpp)
target_link_libraries(main PRIVATE a::a)
