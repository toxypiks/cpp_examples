#include "std_lib_facilities.h"

double calculation(string operation, double val1, double val2){
  if(operation == "+" || operation == "plus")
    return val1 + val2;
  else if(operation == "-" || operation == "minus")
    return val1 - val2;
  else if(operation == "*" || operation == "mul")
    return val1 * val2;
  else if(operation == "/" || operation == "div")
    return val1 / val2;
  return -1;
}

int main(){

  cout << "Type in an operation (+/plus,-/minus,*/mul or //div) followed by two numbers: \n";
  string operation {' '};
  double value1 {0};
  double value2 {0};
  cin >> operation >> value1 >> value2;
  double result = calculation(operation,value1,value2);
  cout << result << "\n";
}
