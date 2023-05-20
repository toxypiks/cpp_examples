#include "std_lib_facilities.h"

void quadratic_equation_solver(double a, double b, double c) {
  double x1 {0};
  double x2 {0};
  double check_root = (b*b) - (4*a*c);
  cout << check_root << '\n';
  cout << sqrt(check_root) << '\n';
  if(check_root < 0){
    throw "Not a real root\n";
  }
  else {
    x1 = (-b)+sqrt(check_root)/(2*a);
    x2 = (-b)-sqrt(check_root)/(2*a);
  }
  cout << "x1 = " << x1 << " x2 = " << x2 << '\n';
}

int main() {
  double a {0};
  double b {0};
  double c {0};
  cin >> a >> b >> c;
  try{
    quadratic_equation_solver(a,b,c);
  }
  catch(exception& e) {
    cerr << e.what() << '\n';
    return -1;
  }
  return 0;
}
