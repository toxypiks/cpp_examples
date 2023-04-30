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

set(NAME_VALUE_PAIRS_SRC_FILES
  src/name_value_pairs.cpp)
add_executable(name_value_pairs
  ${NAME_VALUE_PAIRS_SRC_FILES})

set(ENGLISH_GRAMMAR_SRC_FILES
  src/english_grammar.cpp)
add_executable(english_grammar
  ${ENGLISH_GRAMMAR_SRC_FILES})
