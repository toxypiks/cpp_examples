#include "std_lib_facilities.h"
#include <climits>

void highest_fibonacci() {
  int y {0};
  int steps {0};
  while(y < INT_MAX) {
    int x {1};
    x = x + y;
    y = x + y;
    steps += 1;
  }
  cout << "The highest fibonacci number is: " << y << " and its the " << steps << "th number.\n";
}

int main () {
  highest_fibonacci();
}
