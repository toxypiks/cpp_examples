#include "std_lib_facilities.h"

int main(){

  int number_square {0};
  double grains_current_square {0};
  double grains_previous_square {1};
  
  //calc for all squares on a chess board (204)
  //integer can only represent number after 29 squares (1073741824 grains of rice)
  while(number_square <= 204){
    grains_current_square = 2* grains_previous_square;
    grains_previous_square = grains_current_square;
    number_square++;
  }
  cout << "You need " << number_square << " squares, to end up with " << grains_current_square << " grains of rice.\n";
}
