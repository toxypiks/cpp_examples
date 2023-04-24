#include "mode_with_hash_map.hpp"
//#include "std_lib_facilities.h"
#include <vector>
#include <map>

using namespace std;

int find_mode_value_with_hash_map(vector<int> values) {// O(n) + O(n) => O(n)
  int mode {0};
  map<int, size_t> histogram{};
  //for-in loop to iterate through hashmap
  for (auto const& value : values) { // O(n)
    if (histogram.contains(value)) { // O(1)
      histogram[value]++;
    } else {
      histogram[value] = 1;
    }    
  }
  size_t max{histogram.at(values[0])}; // O(1)
  int max_key{values[0]};
  for (auto const& map_item : histogram) { //O(n)
    if(max < map_item.second) {
      max = map_item.second;
      max_key = map_item.first;
    }
  }
  return max_key;
}
