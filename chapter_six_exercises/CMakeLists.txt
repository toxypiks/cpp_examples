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

set(PERMUTATION_COMBINATION_SRC_FILES
  src/permutation_combination.cpp)
add_executable(permutation_combination
  ${PERMUTATION_COMBINATION_SRC_FILES})

set(READ_NUMBERS_SRC_FILES
  src/read_numbers.cpp)
add_executable(read_numbers
  ${READ_NUMBERS_SRC_FILES})
