cmake_minimum_required(VERSION 3.16 FATAL_ERROR)

project(MyProject)

include(CMake/Config.cmake)
include(CMake/CPM.cmake)

CPMAddPackage("gh:yhirose/cpp-httplib#master")

set(CMAKE_CXX_STANDARD 17)
add_subdirectory(App)
