#include "std_lib_facilities.h"
#include <string>

double calc_sum_of_n_values(double n, vector<double> values) {
  if(n > values.size())
    throw invalid_argument("n higher then given numbers of values");
  else if(n <= 0)
    throw invalid_argument("n cant be negative or zero");
  else if(values.size() == 0)
    throw ("no values given");
  else {
    double sum {0};
    for(int i = 0; i < n; i++) {
      sum = sum + values[i];
    }
    if(isdigit(sum) != 0)
      throw invalid_argument("Output cant be represented as integer");
    return sum;
  }
}

string format_output(int n, vector<double> values) {
  string output {""};
  for(int i = 0; i < n; i++){
    output += std::to_string(values[i]) + " ";
  }
  return output;
}


int main(){
  try {
    
    double num_values {0.0};
    cout << "Please enter the number of values you want to sum: \n";
    cin >> num_values;
    if(cin.fail())
      throw invalid_argument("Only integer allowed as input");
    else if(num_values < 1)
      throw invalid_argument("Number of summed up values cant be zero");
    
    vector<double> values;
    double value;
    cout << "Please enter some integers (press '|' to stop): \n";
    while(cin>>value)
      values.push_back(value);
    double result = calc_sum_of_n_values(num_values,values);
    string output_values = format_output(num_values,values);
    
    cout << "The sum of the first " << num_values << " numbers (" << output_values << ")" << " is " << result << ".\n";
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
