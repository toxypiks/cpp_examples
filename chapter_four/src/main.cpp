#include "std_lib_facilities.h"

int main() {
  int i = 0;
  char j = 'a';
  int char_val = j;
  while(i<26) {
    cout << char(j+i) << "\t" << j+i  << "\n";
    ++i;
  }
}
