#include "std_lib_facilities.h"

vector<int> read_numbers_from_input() {
  string numbers {""};
  cin >> numbers;	
  if(numbers.size() > 4) {
	throw invalid_argument("Only numbers between 1 and 9999 are allowed");
	}
  if(numbers == "0") {
	throw invalid_argument("Input cant be 0");
	}
  vector<int> int_numbers;
  for(int i = 0; i < numbers.size(); i++) {
	  int converted = numbers[i] - '0';
	  if(converted < 0)
		throw invalid_argument ("No negative numbers are allowed");
	  if(converted >= 0 && converted <=9)
		int_numbers.push_back(converted);
	  else
		throw invalid_argument ("Only numbers as input are allowed, not characters");
	}
  return int_numbers;
}

int main() {
  cout << "Please type a number between 1 and 9999: \n";
  vector<int> user_input = read_numbers_from_input();
  for (int i = 0; i < user_input.size(); i++)
	cout << user_input[i] << '\n';
  
}
