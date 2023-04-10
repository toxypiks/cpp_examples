#include "std_lib_facilities.h"

int main() {
  //drill forth chapter
  int x = 0;
  double one = 0;
  double min_num = 100000;
  double max_num = 0;
  while(x < 100) {
    cin >> one;
    if(one < min_num){
      cout << "the smallest value so far: " << one << "\n";
      min_num = one;}
    else if(one > max_num && one > min_num){
      cout << "the largest value so far: " << one << "\n";
      max_num = one;}
    x++;
  }
