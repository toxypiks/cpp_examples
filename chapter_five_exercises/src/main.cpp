#include "std_lib_facilities.h"

double ctok(double c){
  if(c >= -273.15){
    double k = c + 273.15;
    return k;
  }
  else
    return 0;
  
}

int main(){
  double c = 0;
  cin >> c;
  double k = ctok(c);
  cout << k << "\n";
}
