#include "std_lib_facilities.h"
#include <climits>

void highest_fibonacci() {
  int y {0};
  int x {1};
  int steps {0};
  while(x < INT_MAX - y ) {
    int temp = x;
	x = temp + y;
	y = temp;
	steps +=1;
  }
  cout << "The highest fibonacci number is: " << x << " " << y << " and its the " << steps << "th number.\n";
}

int main () {
  highest_fibonacci();
}
