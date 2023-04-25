#include "std_lib_facilities.h"

class Token {
 public:
  char kind;
  double value;
};


int main(){
  Token t;
  t.kind = '+';
  Token t2;
  t2.kind = '8';
  t2.value = 3.14;
  cout << t.kind << "\n";
}
