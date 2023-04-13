#include "std_lib_facilities.h"

int my_binary_search(vector<int> numbers) {

  int low_pointer {numbers[0]};
  int high_pointer {numbers[numbers.size()-1]};
  int middle_element {(low_pointer + (high_pointer - low_pointer))/2};
  char answer {' '};

  while(low_pointer <= high_pointer){
    int range_left = middle_element - low_pointer;
    int range_right = high_pointer - middle_element;
    cout << "Is the number: " << middle_element << " ?(y/n)\n";
    cin >> answer;
    if(answer == 'y'){
      return middle_element;
    }
    else {
      if ((range_left == 0) && (range_right == 1))
        return middle_element + 1;
      if ((range_left == 1) && (range_right == 0))
        return middle_element - 1;
      cout << "Is the number higher then: " << middle_element << " ?(y/n)\n";
      cin >> answer;
    }
    if (answer == 'y'){ 
      low_pointer = middle_element+1;
      middle_element = ((high_pointer - low_pointer)/2) + low_pointer;
    }
    else {
      high_pointer = middle_element-1;
      middle_element = high_pointer/2; //gucken ob gerade oder ungerade
    }
    if(low_pointer == high_pointer)
      return  low_pointer;
  }
  return -1;
}


int main() {
  int number {0};
  cout<<"Guess a number between 1 and 20: \n";

  vector<int> numbers(20);
  for (int i = 0; i < numbers.size(); i++) {
    numbers[i] = i+1;
  }
  int result = my_binary_search(numbers);
  cout<<result;
  return -1;
} 
