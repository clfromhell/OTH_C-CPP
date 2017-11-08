cmake_minimum_required(VERSION 3.8)
project(Aufgabe_3)

set(CMAKE_C_STANDARD 90)

set(SOURCE_FILES main.c)
add_executable(Aufgabe_3 ${SOURCE_FILES})
target_link_libraries(Aufgabe_3 m)