#include "std_lib_facilities.h"

int main() {
  vector<string> words;
  for(string word; cin>>word;)
    words.push_back(word);
  cout << "Number of words: " << words.size() << "\n";

  string disliked = "lemon";
  for(int i = 0; i < words.size(); i++) 
    if(words[i] == disliked)
      cout << "BLEEP\n";
    else
      cout << words[i] << "\n";
}
