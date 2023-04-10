#include "std_lib_facilities.h"

void my_square(double x) {
  double square_value = 0;
  for(int i = 0; i < x; ++i){
    square_value += x;
  }
  cout << square_value << "\n";
}

int main() {
  double my_value = 4;
  my_square(my_value);
}
