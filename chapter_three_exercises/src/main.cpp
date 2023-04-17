#include "std_lib_facilities.h"

void sort_value_output(string word1, string word2, string word3){
  vector<string> words;
  words.push_back(word1);
  words.push_back(word2);
  words.push_back(word3);
  sort(words);
  cout << words[0] << ", " <<  words[1] << ", " << words[2] << "\n";
}

int main(){
  cout << "Enter three words: \n";
  string word_1 {0};
  string word_2 {0};
  string word_3 {0};
  cin >> word_1 >> word_2 >> word_3;
  sort_value_output(word_1, word_2, word_3);
}
