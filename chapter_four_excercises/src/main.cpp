#include "std_lib_facilities.h"

int main(){
  cout << "Lets play paper, rock, scissors. Type in p, r or s: \n";
  char player_input {' '};
  cin >> player_input;
  vector<char> computer_input;
  computer_input.push_back('p');
  computer_input.push_back('r');
  computer_input.push_back('s');

  srand((unsigned) time(NULL));
  int random = rand() % 3;
  char computer_input_rand = computer_input[random];

  if(player_input == 'p'){

    switch(computer_input_rand){
      case'p':
      cout << "You chose " << player_input << ", the computer chose " << computer_input_rand << ". Nobody wins.\n";
      break;

      case'r':
      cout << "You chose " << player_input << ", the computer chose " << computer_input_rand << ". You win.\n";
      break;

      case's':
      cout << "You chose " << player_input << ", the computer chose " << computer_input_rand << ". The computer wins.\n";
      break;
    }
  }
  else if(player_input == 'r'){
    
    switch(computer_input_rand){
      case'p':
      cout << "You chose " << player_input << ", the computer chose " << computer_input_rand << ". The computer wins.\n";
      break;

      case'r':
      cout << "You chose " << player_input << ", the computer chose " << computer_input_rand << ". Nobody wins.\n";
      break;

      case's':
      cout << "You chose " << player_input << ", the computer chose " << computer_input_rand << ". You win.\n";
      break;
    }
  }
  else if(player_input == 's'){

    switch(computer_input_rand){
      case'p':
      cout << "You chose " << player_input << ", the computer chose " << computer_input_rand << ". You win.\n";
      break;

      case'r':
      cout << "You chose " << player_input << ", the computer chose " << computer_input_rand << ". The computer wins.\n";
      break;

      case's':
      cout << "You chose " << player_input << ", the computer chose " << computer_input_rand << ". Nobody wins.\n";
      break;
    }
  }
}
