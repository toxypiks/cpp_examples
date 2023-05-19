#include "std_lib_facilities.h"

double ctok(double c){
  if(c < -273.15)
    throw invalid_argument("value to low");
  else {
    double k = c + 273.15;
    return k;
  }
}

int main(){
  double c = 0;
  cin >> c;
  try
  {
    double k = ctok(c);
    cout << k << "\n";
  }
  catch (invalid_argument& e)
  {
    cerr << e.what() << '\n';
    return -1;
  }
  return 0;
}
