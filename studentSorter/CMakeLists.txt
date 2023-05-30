cmake_minimum_required(VERSION 3.5)

project(studentSorter LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(studentSorter main.cpp studentSorter.h studentSorter.cpp)

install(TARGETS studentSorter
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
