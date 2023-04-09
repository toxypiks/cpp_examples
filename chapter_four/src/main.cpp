#include "std_lib_facilities.h"

int main() {
  double a = 5;
  double b = 2;
  double c = 5/2; //Integer division leads to value 2
  double d = 5.0/2; //value = 2.5
  double e = 5/2.0; //value = 2.5
  cout << a/b << " " << c << " " << d << " " << e << "\n";
  //lesson learned: if you want a double as a result of a division you need to specify at least one value as double
}
