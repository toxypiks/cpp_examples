#include "std_lib_facilities.h"

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

void my_calculator(double first_num = -1, double second_num = -1,string spelled_first_num = " ", string spelled_second_num = " ",char operation = ' '){
  int result_num {-1};
  string result_spelled {" "};
  if(first_num != -1 && second_num != -1 ){
    if (operation == '+'){
      result_num = first_num + second_num;
      cout << convert_digit_to_spelled_value(first_num) << " " << operation << " " << convert_digit_to_spelled_value(second_num) << " " << result_num << "\n";
    }
    else if (operation == '/'){
      result_num =  first_num / second_num;
      cout << convert_digit_to_spelled_value(first_num) << " " << operation << " " << convert_digit_to_spelled_value(second_num) << " " << result_num << "\n";
    }
    else if (operation == '*'){
      result_num = first_num * second_num;
      cout << convert_digit_to_spelled_value(first_num) << " " << operation << " " << convert_digit_to_spelled_value(second_num) << " " << result_num << "\n";
    }
    else if (operation == '-'){
      result_num = first_num - second_num;
      cout << convert_digit_to_spelled_value(first_num) << " " << operation << " " << convert_digit_to_spelled_value(second_num) << " " << result_num << "\n";
    }
  }
  else if(spelled_first_num != " " && spelled_second_num != " "){
    if (operation == '+'){
      result_num = convert_spelled_value_to_digit(spelled_first_num) + convert_spelled_value_to_digit(spelled_second_num);
      cout << spelled_first_num << " " << operation << " " << spelled_second_num << " " << result_num << "\n";
    }
    else if (operation == '/'){
      result_num =  convert_spelled_value_to_digit(spelled_first_num) / convert_spelled_value_to_digit(spelled_second_num);
      cout << spelled_first_num << " " << operation << " " << spelled_second_num << " " << result_num << "\n";
    }
    else if (operation == '*'){
      result_num = convert_spelled_value_to_digit(spelled_first_num) * convert_spelled_value_to_digit(spelled_second_num);
      cout << spelled_first_num << " " << operation << " " << spelled_second_num << " " << result_num << "\n";
    }
    else if (operation == '-'){
      result_num = convert_spelled_value_to_digit(spelled_first_num) - convert_spelled_value_to_digit(spelled_second_num);
      cout << spelled_first_num << " " << operation << " " << spelled_second_num << " " << result_num << "\n";
    }
  }
}

int main(){

  double first_num {0};
  double second_num {0};
  char operation {' '};
  string spelled_num_one {" "};
  string spelled_num_two {" "};

  cout << "Please type in 2 numbers and the operation you wanna execute ('+','-','/','*')\n";
  cin >> first_num >> second_num >> spelled_num_one >> spelled_num_two >> operation;
  my_calculator(first_num, second_num, spelled_num_one, spelled_num_two, operation);
  

  //cout << "Type in a number between 0 and 9: \n";
  //int number {0};
  //cin >> number;
  //string spelled_word = convert_digit_to_spelled_value(number);
  //cout << spelled_word << "\n";
  //
  //cout << "Type in a number as a word between zero and nine: \n";
  //string spelled_number {" "};
  //cin >> spelled_number;
  //int number_in_digit = convert_spelled_value_to_digit(spelled_number);
  //cout << number_in_digit << "\n";
}
