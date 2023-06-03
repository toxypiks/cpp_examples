#include "std_lib_facilities.h"
#include <iostream>
#include <sstream>
#include <tuple>

enum calculation{
  p = 0,
  c = 1,
};

std::tuple<int, int, calculation> read_input() {
  string number1_string{""};
  string number2_string{""};
  string c_or_p_string{""};

  int number1{0};
  int number2{0};
  
  cin >> number1_string;
  cin >> number2_string;
  cin >> c_or_p_string;
  try {
    number1 = stoi(number1_string);
  }
  catch (std::invalid_argument& e) {
	cerr << "only integers are allowed as first and second input (" << e.what() << ")" << endl;
	exit(-1);
  }
  catch (std::out_of_range& e) {
	cerr << "out of range (" << e.what() << ")" << endl;
	exit(-1);
  }
  catch (...) {
    cerr << "unknown Exception" << endl;
	exit(-1);
  }
  
  try {
    number2 = stoi(number2_string);
  }
  catch (std::invalid_argument& e) {
	cerr << "only integers are allowed as first and second input (" << e.what() << ")" << endl;
	exit(-1);
  }
  catch (std::out_of_range& e) {
	cerr << "out of range (" << e.what() << ")" << endl;
	exit(-1);
  }
  catch (...) {
    cerr << "unknown Exception" << endl;
	exit(-1);
  }
  if (number1 < number2){
	throw invalid_argument("first number needs to be higher than second");
  }

  if ((c_or_p_string != "c") && (c_or_p_string != "p")) {
	throw invalid_argument("input can only be c or p for third argument");  
  }
  if (c_or_p_string == "c") {
	  return {number1, number2, calculation::c};
  }
  return {number1, number2, calculation::p}; 
}

int factorial(int number) {
  int result {1};
  if(number == 0)
	return 1;
  else {
	for (int i = 1; i <= number; i++) {
	  result *= i;
	}
  }
  return result;
}

int main() {
  //try {
  //  std::tuple<int, int, calculation> p_c_values = read_input();
  //}
  //catch (std::invalid_argument& e) {
  //  cerr << e.what() << endl;
  //	exit(-1);
  //}
  int fact = factorial(10);
  cout << fact << '\n';
}
