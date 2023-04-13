#include "std_lib_facilities.h"

double my_calculator(double first_num, double second_num, char operation){
  if (operation == '+')
    return first_num + second_num;
  else if (operation == '/')
    return first_num / second_num;
  else if (operation == '*')
    return first_num * second_num;
  else if (operation == '-')
    return first_num - second_num;
  return -1;
}


int main(){

  double first_num {0};
  double second_num {0};
  char operation {' '};

  cout << "Please type in 2 numbers and the operation you wanna execute ('+','-','/','*')\n";
  cin >> first_num >> second_num >> operation;
  double result = my_calculator(first_num, second_num, operation);
  cout << first_num << " " << operation << " " << second_num << " equals " << result << "\n"; 

}
