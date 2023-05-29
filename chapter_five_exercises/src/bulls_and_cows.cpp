#include "std_lib_facilities.h"
#include <random>

enum Guesses {
  None = 0,
  Cow = 1,
  Bull = 2,
};

vector<int> four_random_number_gen() {
  vector<int> result{};
  std::random_device dev;
  std::mt19937 rng(dev());
  std::uniform_int_distribution<std::mt19937::result_type> dist10(0,9);
  for(int i = 0; i < 4; i++) {
	int zufall = dist10(rng);
	while(std::find(result.begin(), result.end(), zufall) != result.end()){
	  zufall = zufall + 1 % 10;
	}
	result.push_back(zufall);
  }
  return result;
}

//vector<Guesses> compare_guess_with_actual (vector<int> rand_num, vector<int> user_input) {
//  
//}
//
int main() {
  vector<int> rand_test = four_random_number_gen();
  for (int rand : rand_test)
	cout << rand << '\n';
  return 0;  
}
