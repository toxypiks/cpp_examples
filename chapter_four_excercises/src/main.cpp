#include "std_lib_facilities.h"

vector<int> check_prime_numbers(int max){
  
  vector<int> prime_numbers;
  vector<int> numbers_to_check;
  
  for(int i = 1; i <= max;i++){
    numbers_to_check.push_back(i);
  }
  for(int i = 0; i < numbers_to_check.size();i++){
    int counter {0};
    for(int j = 1; j <= numbers_to_check[i];j++){
      if(numbers_to_check[i] % j == 0)
        counter++;
    }
    if(counter == 2)
      prime_numbers.push_back(numbers_to_check[i]);
  }
  return prime_numbers;
}

int main(){

  int max = 50;
  vector<int> my_prime = check_prime_numbers(50);
  for(int i = 0; i < my_prime.size();i++)
    cout << my_prime[i] << "\n";
}
