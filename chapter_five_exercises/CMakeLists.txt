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

set(SOLVE_QUADRATIC_EQUATION_SRC_FILES
  src/solve_quadratic_equation.cpp)

add_executable(solve_quadratic_equation
  ${SOLVE_QUADRATIC_EQUATION_SRC_FILES}
  )

set(CALC_SUM_OF_N_VALUES_SRC_FILES
  src/calc_sum_of_n_values.cpp)

add_executable(calc_sum_of_n_values
  ${CALC_SUM_OF_N_VALUES_SRC_FILES}
  )

set(HIGHEST_FIBONACCI_SRC_FILES 
  src/highest_fibonacci.cpp)    
                                   
add_executable(highest_fibonacci
  ${HIGHEST_FIBONACCI_SRC_FILES}
  )                                
