#include "std_lib_facilities.h"

int calc_sum_of_n_values(int n, vector<int> values) {
  if(n > values.size())
    throw invalid_argument("n higher then given numbers of values");
  else if(n <= 0)
    throw invalid_argument("n cant be negative or zero");
  else if(values.size() == 0)
    throw invalid_argument("no values given");
  else {
    int sum {0};
    for(int i = 0; i < n; i++) {
      sum = sum + values[i];
    }
    return sum;
  }
}


int main(){
  try {
    int num_values {0};
    cout << "Please enter the number of values you want to sum: \n";
    cin >> num_values;
    if (cin.fail())
      throw invalid_argument("Only integer allowed as input");
    else if(num_values < 1)
      throw invalid_argument("Number of summed up values cant be zero");
    vector<int> values;
    int value;
    cout << "Please enter some integers (press '|' to stop): \n";
    while(cin>>value)
      values.push_back(value);
    int result = calc_sum_of_n_values(num_values,values);
    cout << "The sum of the first " << num_values << " numbers (" << values[0] << ", " << values[1] << ", " << values[2] << ")" << " is " << result << ".\n";
    return 0;
  }
  catch (invalid_argument& e)
  {
    cerr << e.what() << '\n';
    return -1;
  }
  catch(...) {
    cerr << "Unknown exception!\n";
  }
}
