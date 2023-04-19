#include "std_lib_facilities.h"

vector<int> check_prime_numbers(vector<int> numbers){
  vector<int> prime_numbers;
  for(int i = 0; i < numbers.size();i++){
    int counter {0};
    for(int j = 1; j <= numbers[i];j++){
      if(numbers[i] % j == 0)
        counter++;
    }
    if(counter == 2)
      prime_numbers.push_back(numbers[i]);
  }
  return prime_numbers;
}

int main(){
  vector<int> numbers_to_check;
  for(int i = 1; i <= 100;i++){
    numbers_to_check.push_back(i);
  }
  vector<int> my_prime = check_prime_numbers(numbers_to_check);
  for(int i = 0; i < my_prime.size();i++)
    cout << my_prime[i] << "\n";
}
