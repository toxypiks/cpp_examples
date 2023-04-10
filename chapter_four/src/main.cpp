#include "std_lib_facilities.h"

int main() {
  char j = 'A';
  int char_val = j;
  for (int i = 0; i<58; i++) {
    cout << char(j+i) << "\t" << j+i  << "\n";
  }
}
