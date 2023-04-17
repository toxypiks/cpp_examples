#include "std_lib_facilities.h"

void analyze_values(double val1, double val2){
  if(val1 < val2)
    cout << val2 << " is bigger then " << val1 << "\n";
  else
    cout << val1 << " is bigger then " << val2 << "\n";
  double sum = val1 + val2;
  cout << "The sum of " << val1 << " and " << val2 << " is: " << sum << "\n";
  double difference = val1 - val2;
  cout << "The difference between " << val1 << " and " << val2 << " is: " << difference << "\n";
  double product = val1 * val2;
  cout << "The product of " << val1 << " and " << val2 << " is: " << product << "\n";
  double ratio = val1 / val2;
  cout << "The ratio of " << val1 << " and " << val2 << " is: " << ratio << "\n";
}


int main(){
  cout << "Type in two floating-point numbers: \n";
  double user_val1 {0};
  double user_val2 {0};
  cin >> user_val1 >> user_val2;
  analyze_values(user_val1, user_val2);
}
