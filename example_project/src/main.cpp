#include "std_lib_facilities.h"

int main()
{
  cout << "Please enter your first name and last name:\n";
  string first_name;
  string second_name;
  cin >> first_name;
  cin >> second_name;
  cout << "Hello, " << first_name  << " " << second_name << "!\n";
  return 0;
}
