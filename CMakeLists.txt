cmake_minimum_required(VERSION 3.29)
project(CODES)

set(CMAKE_CXX_STANDARD 20)

add_executable(CODES main.cpp)

add_executable(Ejemplos01.exec SEM3_arreglos/ProblemasArreglos/Ejemplos01.cpp)

add_executable(Ejemplos02.exec SEM3_arreglos/ProblemasArreglos/Ejemplos02.cpp)

add_executable(TEMPORAL.exec TEMPORAL.cpp)


