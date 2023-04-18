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
  cout << "How many half dollars you have?\n";
  cin >> half_dollars;
  cout << "How many dollars you have?\n";
  cin >> dollars;
  
  value_in_pennies += pennies;
  value_in_pennies += nickels * 5;
  value_in_pennies += dimes * 10;
  value_in_pennies += quarters * 25;
  value_in_pennies += half_dollars * 50;
  value_in_pennies += dollars * 100;

  if(pennies == 1)
    cout << "You have " << pennies << " penny\n";
  else
    cout << "You have " << pennies << " pennies\n";
  if(nickels == 1)
    cout << "You have " << nickels << " nickel\n";
  else
    cout << "You have " << nickels << " nickels\n";
  if(dimes == 1)
    cout << "You have " << dimes << " dime\n";
  else
    cout << "You have " << dimes << " dimes\n";
  if(quarters == 1)
     cout << "You have " << quarters << " quarter\n";
  else
     cout << "You have " << quarters << " quarters\n";
  if(half_dollars == 1)
     cout << "You have " << half_dollars << " half dollar\n";
  else
     cout << "You have " << half_dollars << " half dollars\n";
  if(dollars == 1)
     cout << "You have " << dollars << " dollars\n";
  cout << "The value of all your coins is " << value_in_pennies/100 << " dollars\n";
}


int main(){
  count_user_money();
}
