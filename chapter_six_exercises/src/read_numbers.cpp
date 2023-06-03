#include "std_lib_facilities.h"

vector<int> read_numbers_from_input() {
  string numbers {""};
  cin >> numbers;	
  if(numbers.size() > 4) {
	throw invalid_argument("Only numbers between 0 and 9999 are allowed");
	}
  if(numbers.size() == 0) {
	throw invalid_argument("No input given");
	}
  vector<int> int_numbers;
  for(int i = 0; i < numbers.size(); i++) {
	  int converted = numbers[i] - '0';
	  int_numbers.push_back(converted);
	}
  return int_numbers;
}

int main() {
  cout << "Please type a number between 0 and 9999: \n";
  vector<int> user_input = read_numbers_from_input();
  for (int i = 0; i < user_input.size(); i++)
	cout << user_input[i] << '\n';
  
}
