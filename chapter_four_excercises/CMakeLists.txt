cmake_minimum_required(VERSION 3.1)
project(simple_example_cpp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

# statistacal mode function
# implementation with sorting
set(MODE_WITH_SORT_SRC_FILES
  src/main.cpp)

add_executable(mode_with_sort
  ${MODE_WITH_SORT_SRC_FILES}
  )

# statistacal mode function
# implementation with hash map -> Histogram
set(MODE_WITH_HASH_MAP_SRC_FILES
  src/mode_with_hash_map.cpp)

add_executable(mode_with_hash_map
  ${MODE_WITH_HASH_MAP_SRC_FILES}
  )
