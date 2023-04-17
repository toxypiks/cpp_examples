#include "std_lib_facilities.h"

void words_to_digits(string word){
  if (word == "zero")
    cout << 0 << "\n";
  else if (word == "one")
    cout << 1 << "\n";
  else if (word == "two")
    cout << 2 << "\n";
  else if (word == "three")
    cout << 3 << "\n";
  else if (word == "four")
    cout << 4 << "\n";
  else
    cout << "Sorry, I dont know the word: " << word << "\n";
    
}

int main(){
  cout << "Write out a number between zero and four: \n";
  string user_input {" "};
  cin >> user_input;
  words_to_digits(user_input);
}
