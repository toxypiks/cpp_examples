#include "std_lib_facilities.h"

void sort_value_output(int val1, int val2, int val3){
  vector<int> values;
  values.push_back(val1);
  values.push_back(val2);
  values.push_back(val3);
  sort(values);
  cout << values[0] << ", " <<  values[1] << ", " << values[2] << "\n";
}

int main(){
  cout << "Enter three values: \n";
  int value1 {0};
  int value2 {0};
  int value3 {0};
  cin >> value1 >> value2 >> value3;
  sort_value_output(value1, value2, value3);
}
