#include <vector>
#include <string>
#include <iostream>
#include "mode_with_sort.hpp"
#include "mode_with_hash_map.hpp"

using namespace std;

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
  
  int result1 = find_mode_value(numbers);
  cout << "result_sort: " << result1 << "\n";

  int result2 = find_mode_value_with_hash_map(numbers);
  cout << "result_hash_map: " << result2 << "\n";
}
