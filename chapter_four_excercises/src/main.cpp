#include "std_lib_facilities.h"

int find_mode_value(vector<int> values){
  sort(values);
  int mode {values[0]};
  int count {1};
  int remember_count {1};
  
  for(int i = 1;i<values.size();i++){
    if(values[i] == values[i-1])
    {
      count++;
    }
    else {
      if(count > remember_count){
        remember_count = count;
        mode = values[i-1];
        count = 1;
      }
      count = 1;
    }
  }

  if(count > remember_count){
    remember_count = count;
    mode = values[values.size()-1];
}
  return mode;
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
  int result = find_mode_value(numbers);
  cout << "result: " << result << "\n";
}
