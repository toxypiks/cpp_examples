#include "std_lib_facilities.h"
#include <iostream>
#include <deque>
#include <sstream>

using namespace std;

/* english grammar rules:

   Sentence:
       Article Noun Verb [(conjunction) Article Noun Verb [(conjunction) Article Noun Verb]] 
       //Sentence Conjuction Sentence
   Conjunction:
       "and"
       "or"
       "but"
   Noun:
       "birds"
       "fish"
       "C++"
   Article:
       "the"
       "The"
   Verb:
       "rules"
       "fly"
       "swim"
*/

enum WordType{
  Conjunction,
  Noun,
  Article,
  Verb  
};

class Token{
 public:
  WordType kind;
  string value;
  Token(string word): value(word) {
    if(word == "and" || word == "or" || word == "but")
      kind = WordType::Conjunction;
    else if (word == "birds" || word == "fish" || word == "C++")
      kind = WordType::Noun;
    else if(word == "rules" || word == "fly" || word == "swim")
      kind = WordType::Verb;
    else if(word == "The" || word == "the")
      kind = WordType::Article;
    else {
      std::stringstream error_msg;
      error_msg << "Sorry, I don't know the word: " << word;
      error(error_msg.str());
    }
  }
};

class TokenStream {
 public:
  TokenStream();   // make a TokenStream that reads from cin
  Token get();      // get a Token (get() is defined elsewhere)
  void putback(Token t);    // put a Token back
  void putfront(Token t);
  bool is_empty();
 private:
  //    bool full;        // is there a Token in the buffer?
  std::deque<Token> buffer;     // here is where we keep a Token put back using putback()
};

// The constructor just sets full to indicate that the buffer is empty:
TokenStream::TokenStream()
  :buffer()    // no Token in buffer
{
}

//------------------------------------------------------------------------------

void TokenStream::putback(Token t)
{
    buffer.push_back(t);      
}

void TokenStream::putfront(Token t)
{
    buffer.push_front(t);      
}

Token TokenStream::get() {
  Token t = buffer.front();
  buffer.pop_front();
  return t;
}

bool TokenStream::is_empty() {
  buffer.empty();  
}

bool conjunct(TokenStream &ts) {
  if (ts.is_empty())
    return false;
  Token t = ts.get();
  if (t.kind == WordType::Conjunction)
    return true;
  return false;
}

bool verb(TokenStream &ts) {
  if (ts.is_empty())
    return false;
  Token t = ts.get();
  if (t.kind == WordType::Verb)
    return true;
  return false;
}

bool noun(TokenStream &ts) {
  if (ts.is_empty())
    return false;
  Token t = ts.get();
  if (t.kind == WordType::Noun)
    return true;
  return false;
}

bool article(TokenStream &ts) {
  if (ts.is_empty())
    return false;
  Token t = ts.get();
  if (t.kind == WordType::Article )
    return true;
  return false;
}

bool sentence(TokenStream &ts) {
  if (ts.is_empty())
    return false;
  bool article_ok = article(ts);
  bool noun_ok = noun(ts);
  bool verb_ok = verb(ts);
  bool rest_ok{false};
  if (conjunct(ts)) {
    rest_ok = sentence(ts);
  } else {
    rest_ok = true;  
  }
  bool alles_ok = article_ok && noun_ok && verb_ok && rest_ok; 
  return alles_ok;
}

int main(){
  TokenStream ts{};
  cout << "Please write a sentence in english grammar: \n";
  try {
    while (cin) {
      string word{""};
      cin >> word;
      if (word == "."){
        break;
      }
      Token t(word);
      ts.putback(t);
    }
    bool is_ok = sentence(ts);
    if (is_ok){
      cout << "english sentence\n";
    } else {
      cout << "nope!\n";
    }    
  }
  catch (exception& e) {
    cerr << "error: " << e.what() << '\n';
    return 1;
  }
  catch (...) {
    cerr << "Oops: unknown exception!\n";
    return 2;
  }
}
