cmake_minimum_required(VERSION 3.8)
project(Aufgabe_4)

set(CMAKE_C_STANDARD 90)

set(SOURCE_FILES main.c)

add_executable(Aufgabe_4 ${SOURCE_FILES})

target_link_libraries(Aufgabe_4 m)