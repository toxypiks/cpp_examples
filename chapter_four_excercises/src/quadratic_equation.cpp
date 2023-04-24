#include "std_lib_facilities.h"

//write a program to solve ax² + bx + c = 0

void solve_quadratic_equation(double a, double b, double c){
  double x1 {0.0};
  double x2 {0.0};
  double interim_result {0.0};
  
  if(a == 0 && b == 0)
    cout << "Not a valid equation\n";
  if(a == 0 && b!=0)
    x1 = -(c/b);
  if((b*b -4*a*c)>0){
    interim_result = (b*b) - (4*a*c);
    x1 = (-b+sqrt(interim_result))/(2*a);
    x2 = (b+sqrt(interim_result))/(2*a);
  }
  if((b*b -4*a*c)<0)
    cout << "Not a real root\n";
  cout << "x1: " << x1 << " x2: " << x2 << "\n";
}


int main(){
  double a {0.0};
  double b {0.0};
  double c {0.0};
  cout << "Please enter 3 values: \n";
  cin >> a >> b >> c;
  solve_quadratic_equation(a,b,c);
}
