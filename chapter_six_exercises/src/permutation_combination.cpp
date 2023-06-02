#include "std_lib_facilities.h"
#include <iostream>
#include <sstream>
#include <tuple>

enum calculation{
  p = 0,
  c = 1,
};

std::tuple<int, int, calculation>  einlesen() {
  string zahl1_string{""};
  string zahl2_string{""};
  string c_oder_p_string{""};

  int zahl1{0};
  int zahl2{0};
  
  cin >> zahl1_string;
  cin >> zahl2_string;
  cin >> c_oder_p_string;
  try {
    zahl1 = stoi(zahl1_string);
  }
  catch (std::invalid_argument& e) {
	cerr << "keine Integer zahl! (" << e.what() << ")" << endl;
	exit(-1);
  }
  catch (std::out_of_range& e) {
	cerr << "out of range! (" << e.what() << ")" << endl;
	exit(-1);
  }
  catch (...) {
    cerr << "Unknown Exception!!!" << endl;
	exit(-1);
  }
  
  try {
    zahl2 = stoi(zahl2_string);
  }
  catch (std::invalid_argument& e) {
	cerr << "keine Integer zahl! (" << e.what() << ")" << endl;
	exit(-1);
  }
  catch (std::out_of_range& e) {
	cerr << "out of range! (" << e.what() << ")" << endl;
	exit(-1);
  }
  catch (...) {
    cerr << "Unknown Exception!!!" << endl;
	exit(-1);
  }
  if (zahl1 < zahl2){
	throw invalid_argument("first number needs higher than second");
  }

  if ((c_oder_p_string != "c") && (c_oder_p_string != "p")) {
	throw invalid_argument("input only c or p");  
  }
  if (c_oder_p_string == "c") {
	  return {zahl1, zahl2, calculation::c};
  }
  return {zahl1, zahl2, calculation::p}; 
}

int main() {
  try {
    std::tuple<int, int, calculation> p_c_values = einlesen();
  }
  catch (std::invalid_argument& e) {
    cerr << e.what() << endl;
	exit(-1);
  }
}
