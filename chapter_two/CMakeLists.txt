cmake_minimum_required(VERSION 3.1)
project(simple_example_cpp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

set(SRC_FILES
  src/main.cpp)

add_executable(simple_example_cpp
  ${SRC_FILES}
  )
