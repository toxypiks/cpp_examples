#include "std_lib_facilities.h"
#include <optional>

string convert_digit_to_spelled_value(int digit) {
  vector<string> words {"zero","one","two","three","four","five","six","seven","eight","nine"};
  if(digit >= 0 || digit <= 9)
    return words[digit];
  else
    return " ";
}

int convert_spelled_value_to_digit(string spelled_value) {
  vector<int> number;
  for (int i = 0; i < 10; i++){
    number.push_back(i);
  }

  if(spelled_value == "zero")
    return number[0];
  else if (spelled_value == "one")
    return number[1];
  else if (spelled_value == "two")
    return number[2];
  else if (spelled_value == "three")
    return number[3];
  else if (spelled_value == "four")
    return number[4];
  else if (spelled_value == "five")
    return number[5];
  else if (spelled_value == "six")
    return number[6];
  else if (spelled_value == "seven")
    return number[7];
  else if (spelled_value == "eight")
    return number[8];
  else if (spelled_value == "nine")
    return number[9];
  return -1;
}

std::optional<int> string_to_int(string input) {
  if(input.size() == 1) {
    int input_value = (input[0] - '0');
    if ( input_value >= 0 && (input_value <= 9)) {
      return {input_value};    
    } else {
      return std::nullopt;
    }
  } else {
    int input_value = convert_spelled_value_to_digit(input);
    if (input_value == -1) {
      return std::nullopt;
    } else {
      return {input_value};  
    }
  }
}

void my_calculator(string first_num, string second_num, char operation){
  int result_num {-1};
  optional<int> first = string_to_int(first_num);
  optional<int> second = string_to_int(second_num);
      
  if( (first == std::nullopt) || (second == std::nullopt) ){
    cout << "error input value" << endl;
    return;
  } else {
    if (operation == '+'){
      result_num = *first + *second;
      cout << convert_digit_to_spelled_value(*first) << " " << operation << " " << convert_digit_to_spelled_value(*second) << " " << result_num << "\n";
    }
    else if (operation == '/'){
      if(second == 0) {
        cout << "error - zero division";
        return;
      }
      result_num =  *first / *second;
      cout << convert_digit_to_spelled_value(*first) << " " << operation << " " << convert_digit_to_spelled_value(*second) << " " << result_num << "\n";
    }
    else if (operation == '*'){
      result_num = *first * *second;
      cout << convert_digit_to_spelled_value(*first) << " " << operation << " " << convert_digit_to_spelled_value(*second) << " " << result_num << "\n";
    }
    else if (operation == '-'){
      result_num = *first - *second;
      cout << convert_digit_to_spelled_value(*first) << " " << operation << " " << convert_digit_to_spelled_value(*second) << " " << result_num << "\n";
    } else {
      cout << "error operator"  << endl;
      return;
    }
  }
}

int main(){

  char operation {' '};
  string input_num_one {" "};
  string input_num_two {" "};

  cout << "Please type in 2 numbers and the operation you wanna execute ('+','-','/','*')\n";
  cin >> input_num_one >> input_num_two >> operation;
  my_calculator(input_num_one, input_num_two, operation);
}
