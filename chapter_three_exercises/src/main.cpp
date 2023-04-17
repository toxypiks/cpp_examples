#include "std_lib_facilities.h"

double miles_to_km(double miles){
  return miles * 1.609;
}

int main(){

  cout << "Type in miles to convert to kilometers: \n";
  double miles {0.0};
  cin >> miles;
  double kilometers = miles_to_km(miles);
  cout << miles << " miles are " << kilometers << " kilometers\n";
}
