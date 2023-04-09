#include "std_lib_facilities.h"

int main() {
  cout << "Please enter a number followed by a unit which you want to transalte into dollars ('y' for yen, 'k' for kroner and 'p' for pounds)) \n";
  double amount = 0;
  char unit = ' ';
  cin >> amount >> unit;

  if(unit == 'y')
    cout << amount << " dollars are " << amount * 132.14 << " yen\n";
  else if (unit == 'k')
    cout << amount << " dollars are " << amount * 10.50 << " kroner\n";
  else if (unit == 'p')
    cout << amount << " dollars are " << amount * 0.81 << " pounds\n";
  else
    cout << "Sorry, I don't know a unit called '" << unit << "'\n";
}
