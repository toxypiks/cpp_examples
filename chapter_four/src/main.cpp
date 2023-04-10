#include "std_lib_facilities.h"

int main() {
  //drill forth chapter
  int x = 0;
  double one = 0;
  double two = 0;
  vector<double> input_numbers;
  while(x < 100) {
    cin >> one >> two;
    input_numbers.push_back(one);
    input_numbers.push_back(two);
    sort(input_numbers);
    if(input_numbers[0] != input_numbers[1] && (input_numbers[1] - input_numbers[0]) < 1.0/100)
      cout << "The smaller value is: " << input_numbers[0] << " The bigger value is: " << input_numbers[1]
           << "\n" << "The numbers are almost equal\n";
    else if(input_numbers[0] != input_numbers[1]&& (input_numbers[1] - input_numbers[0]) > 1.0/100)
      cout << "The smaller value is: " << input_numbers[0] << " The bigger value is: " << input_numbers[1];
    else if(input_numbers[0] == input_numbers[1])
      cout << "The numbers are equal\n";
    input_numbers = {};
    x++;
  }
}
