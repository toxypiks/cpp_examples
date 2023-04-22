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
    else{
      if(count > remember_count){
        remember_count = count;
        mode = values[i-1];
        count = 1;
      }
      count = 1;
    }
  }
  return mode;
}


int main(){
  int x {0};
  int input {0};
  vector<int> numbers;
  
  while(x < 10) {
    cin >> input;
    numbers.push_back(input);
    x++;
  }
  int result = find_mode_value(numbers);
  cout << "result: " << result << "\n";
}
