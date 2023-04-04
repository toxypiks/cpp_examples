#include "std_lib_facilities.h"

int main()
{
  cout << "Please enter your first name and your age:\n";
  string first_name;
  double age;
  cin >> first_name;
  cin >> age;
  double age_months = age * 12;
  cout << "Hello, " << first_name  << "(age in months "<< age_months <<")!\n";
  return 0;
}
