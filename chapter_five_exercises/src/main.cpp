#include "std_lib_facilities.h"

double ctok(double c){
  if(c < -273.15)
    throw invalid_argument("value to low");
  else {
    double k = c + 273.15;
    return k;
  }
}

double ktoc(double k){
  if(k > 273.15)
    throw invalid_argument("value to high");
  else {
    double c = k - 273.15;
    return c;
  }
}

int main(){
  double value {0};
  char unit {' '};
  cin >> value >> unit;
  if(unit == 'c'){
    try
    {
      double k = ctok(value);
      cout << k << "\n";
    }
    catch (invalid_argument& e)
    {
      cerr << e.what() << '\n';
      return -1;
    }
    return 0;
  }
  else if(unit == 'k'){
    try
    {
      double k = ktoc(value);
      cout << k << "\n";
    }
    catch (invalid_argument& e)
    {
      cerr << e.what() << '\n';
      return -1;
    }
    return 0;
  }
  else
    cout << "Invalid unit\n";
}
