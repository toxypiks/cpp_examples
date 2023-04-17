#include "std_lib_facilities.h"

void odd_or_even(int value){
  if (value % 2 == 0)
    cout << "The value " << value << " is even\n";
  else
    cout << "The value " << value << " is odd\n";
}

int main(){
  cout << "Type in a number to proof if its even or odd: \n";
  int value {0};
  cin >> value;
  odd_or_even(value);
}
