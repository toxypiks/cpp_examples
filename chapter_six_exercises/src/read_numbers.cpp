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

void print_out(vector<int> numbers) {
  if(numbers.size() == 4) {
	cout << numbers[0] << numbers[1] << numbers[2] << numbers[3] << " is " << numbers[0] << " thousand and " << numbers[1] << " hundred and " << numbers[2] << " tens and " << numbers[3] << " ones.\n";
  }
  else if (numbers.size() == 3) {
	cout << numbers[0] << numbers[1] << numbers [2] << " is " << numbers[0] << " hundred and " << numbers[1] << " tens and " << numbers[2] << " ones.\n";
  }
  else if (numbers.size() == 2) {
	cout << numbers[0] << numbers[1] << " is " << numbers[0] << " tens and " << numbers[1] << " ones.\n";
  }

  else if (numbers.size() == 1) {
	cout << numbers[0] << " is " << numbers[0] << " ones\n";
  }
}

int main() {
  try {
	cout << "Please type a number between 1 and 9999: \n";
	vector<int> user_input = read_numbers_from_input();
	print_out(user_input);
	return 0;
  }
  catch (invalid_argument& e) {
	cerr << e.what() << '\n';
	return -1;
  }
  catch (...) {
	cerr << "Unknown Exception" << '\n';
	return -1;
  }
  
}
