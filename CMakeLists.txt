cmake_minimum_required(VERSION 3.10)
project(AdventOfCode2023)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Debug)
endif()

include_directories(${CMAKE_SOURCE_DIR}/include)

add_subdirectory(include)
add_subdirectory(days)
add_subdirectory(src)
