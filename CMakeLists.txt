cmake_minimum_required(VERSION 3.27)
project(untitled102)

set(CMAKE_CXX_STANDARD 17)
SET(CMAKE_CXX_FLAGS "-save-temps -finstrument-functions -O0 -g3 -fno-elide-constructors")
set(CMAKE_VERBOSE_MAKEFILE ON)
SET(CMAKE_EXPORT_COMPILE_COMMANDS ON)
add_executable(mycereal main.cpp)
target_include_directories(mycereal PUBLIC "include/")