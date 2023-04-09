#include "std_lib_facilities.h"

int main()
{
  //save way to get the value of a character with no information loss
  char c = 'x';
  int i1 = c;
  int i2 = 'x';
  cout << "value c: " << c << " value i1: " << i1 << " value i2: " <<  i2 << "\n";

  //you can copy the resutling int back into a char and get the original value
  char c2 = i1;
  cout << "value of c2: " <<  c2 << "\n";

  //unsave conventions e.g. initialization of char with an int

  double d = 0;
  while(cin>>d){

    int i = d;
    char c = i;
    int i2 = c;

    cout << "d == " << d
         << " i == " << i
         << " i2 == " << i2
         << " char(" << c << ")\n";
  }
}
 
