#include "std_lib_facilities.h"
#include <algorithm>
#include <random>

enum Guesses {
  NONE = 0,
  COW = 1,
  BULL = 2,
};

vector<int> four_random_number_gen() {
  vector<int> results{};
  std::random_device dev;
  std::mt19937 rng(dev());
  std::uniform_int_distribution<std::mt19937::result_type> dist10(0,9);
  for(int i = 0; i < 4; i++) {
	int zufall = dist10(rng);
	while(std::find(results.begin(), results.end(), zufall) != results.end()){
	  zufall = zufall + 1 % 10;
	} 
	results.push_back(zufall);
  }
  return results;
}

vector<Guesses> compare_guess_with_actual (vector<int> rand_num, vector<int> user_input) {
  vector<Guesses> results {};
  for(int i = 0; i < rand_num.size(); i++) {
	auto found_value_iter = std::find(rand_num.begin(), rand_num.end(), user_input[i]);
	  if(found_value_iter - rand_num.begin() == i) {
		results.push_back(Guesses::BULL);
	  } else if (found_value_iter != rand_num.end() ) {
		results.push_back(Guesses::COW);
	  } else
		results.push_back(Guesses::NONE);
  }
  return results;
}

int main() {
  vector<int> rand_test = four_random_number_gen();
  for (int rand : rand_test)
	cout << rand << '\n';
  cout << std::endl;
  vector<Guesses> my_guesses = compare_guess_with_actual(rand_test, vector<int>({1,2,3,4}));
  for (Guesses guess : my_guesses)
	cout << guess << '\n';
  return 0;  
}
