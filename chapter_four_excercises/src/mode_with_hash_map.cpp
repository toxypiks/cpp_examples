#include "std_lib_facilities.h"
#include <vector>
#include <map>

using namespace std;

int find_mode_value_with_hash_map(vector<int> values) {
  int mode {0};
  map<int, size_t> histogram{};
  //for-in loop to iterate through hashmap
  for (auto const& value : values) {
    if (histogram.contains(value)) {
      histogram[value]++;
    } else {
      histogram[value] = 1;
    }    
  }
  size_t max{histogram.at(values[0])};
  int max_key{values[0]};
  for (auto const& map_item : histogram) {
    if(max < map_item.second) {
      max = map_item.second;
      max_key = map_item.first;
    }
  }
  return max_key;
}

bool is_number(string input_str) {
  for (int i = 0;i<input_str.length();i++){
    if ((input_str[i])-'0' < 0 || (input_str[i])-'0' > 9){
      return false;
    }
  }
  return true;
}

int main(){
  int x {0};
  int input {0};
  string input_str{""};
  vector<int> numbers;
  bool run{true};
  while(run) {
    cin >> input_str;
    //check input
    if (!is_number(input_str) && input_str != "|") {
      cout << "no number or | \n";
      return -1;
    }
    if (input_str == "|") {
      run = false;
      break;
    }
    input = std::stoi(input_str);
    numbers.push_back(input);
    x++;
  }
  int result = find_mode_value_with_hash_map(numbers);
  cout << "result: " << result << "\n";
}
