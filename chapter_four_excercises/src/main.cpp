#include "std_lib_facilities.h"

int main(){

  int number_square {0};
  int grains_current_square {0};
  int grains_previous_square {1};

  while(grains_current_square <= 100000){
    grains_current_square = 2* grains_previous_square;
    grains_previous_square = grains_current_square;
    number_square++;
  }
  cout << "You need " << number_square << " squares, to end up with " << grains_current_square << " grains of rice.\n";
}
