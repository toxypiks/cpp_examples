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

bool check_won(vector<Guesses> guesses) {
  int cows {0};
  int bulls {0};
  for(int i = 0; i < guesses.size(); i++)
	if(guesses[i] == Guesses::COW)
	  cows += 1;
	else if (guesses[i] == Guesses::BULL)
	  bulls += 1;

  if (bulls == 4) {
	return true;
  }
  return false;
}

void format_output(vector<Guesses> guesses) {
  int cows {0};
  int bulls {0};
  for(int i = 0; i < guesses.size(); i++)
	if(guesses[i] == Guesses::COW)
	  cows += 1;
	else if (guesses[i] == Guesses::BULL)
	  bulls += 1;
  cout << "You have: " << cows << " cows and " << bulls << " bulls!\n";
}

int main() {
  cout << "Lets play a guessing game. Guess four unique numbers between 1 - 10 and see if they are correct (right number & right place = bull, right number wrong place = cow): \n";
  bool won = false;
  vector<int> rand_test = four_random_number_gen();
  while(!won) {
    int input {0};
    vector <int> user_inputs {};
    for (int i = 0; i < 4; i++) {
	  if(cin >> input)
	    user_inputs.push_back(input);
	  else throw invalid_argument("only integers as input are allowed");
    }
    cout << std::endl;
    vector<Guesses> my_guesses = compare_guess_with_actual(rand_test, user_inputs);
	
    format_output(my_guesses);
    won = check_won(my_guesses);
  }
  return 0;
}
