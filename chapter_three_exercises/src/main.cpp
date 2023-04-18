#include "std_lib_facilities.h"

void count_user_money(){
  double pennies {0};
  double nickels {0};
  double dimes {0};
  double quarters {0};
  double half_dollars {0};
  double dollars {0};
  double value_in_pennies {0};
  cout << "How many pennies you have?\n";
  cin >> pennies;
  cout << "How many nickels you have?\n";
  cin >> nickels;
  cout << "How many dimes you have?\n";
  cin >> dimes;
  cout << "How many quarters you have?\n";
  cin >> quarters;
  cout << "How many half_dollars you have?\n";
  cin >> half_dollars;
  cout << "How many dollars you have?\n";
  cin >> dollars;
  
  value_in_pennies += pennies;
  value_in_pennies += nickels * 5;
  value_in_pennies += dimes * 10;
  value_in_pennies += quarters * 25;
  value_in_pennies += half_dollars * 50;
  value_in_pennies += dollars * 100;

  cout << "You have " << pennies << " pennies\n";
  cout << "You have " << nickels << " nickels\n";
  cout << "You have " << dimes << " dimes\n";
  cout << "You have " << quarters << " quarters\n";
  cout << "You have " << half_dollars << " half_dollars\n";
  cout << "You have " << dollars << " dollars\n";
  cout << "The value of all your coins is " << value_in_pennies << " cents\n";
}


int main(){
  count_user_money();
}
