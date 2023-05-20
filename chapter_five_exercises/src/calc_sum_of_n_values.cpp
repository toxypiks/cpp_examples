#include "std_lib_facilities.h"

int calc_sum_of_n_values(int n, vector<int> values) {
  int sum {0};
  for(int i = 0; i < n; i++) {
    sum = sum + values[i];
  }
  return sum;
}


int main(){
  int num_values {0};
  cout << "Please enter the number of values you want to sum: \n";
  cin >> num_values;
  vector<int> values;
  int value;
  cout << "Please enter some integers (press '|' to stop): \n";
  while(cin>>value)
    values.push_back(value);
  int result = calc_sum_of_n_values(num_values,values);
  cout << "The sum of the first " << num_values << " is " << result << '\n';
  
}
