//#include "std_lib_facilities.h"
#include <vector>
#include <iostream>

using namespace std;

void sieve_of_eratosthenes(int max){
  vector<bool> prime;
  for(int i = 0; i <= max; i++)
    prime.push_back(true);

  for(int p = 2; p*p <= max;p++){
    if (prime[p] == true){
      for(int j = 2; j*p <= max;j++)
        prime[j*p] = false;
    }
  }
  for (int q = 2; q <=max;q++)
    if(prime[q] == true)
      cout << q << "\n";
}

int main(){
  int my_int {10};
  sieve_of_eratosthenes(my_int);
}
