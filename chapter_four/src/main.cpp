#include "std_lib_facilities.h"

int main() {
  cout << "Please enter a number followed by a unit which you want to transalte into dollars ('y' for yen, 'k' for kroner and 'p' for pounds)) \n";
  double amount = 0;
  char unit = ' ';
  cin >> amount >> unit;

  switch(unit) {
    case 'y':
      cout << amount << " dollars are " << amount * 132.14 << " yen\n";
      break;
    case 'k':
      cout << amount << " dollars are " << amount * 10.50 << " kroner\n";
      break;
    case 'p':
      cout << amount << " dollars are " << amount * 0.81 << " pounds\n";
      break;
    default:
      cout << "Sorry, I don't know a unit called '" << unit << "'\n";
      break;
  }
}
