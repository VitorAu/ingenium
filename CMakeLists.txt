cmake_minimum_required(VERSION 3.28)
project(ingenium)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 23)

add_subdirectory(vendor)
add_subdirectory(src)
