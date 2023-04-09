#include "std_lib_facilities.h"

int main()
{
  //Drill of the third chapter

  cout << "Enter the name of the person you want to write to: \n";
  string addresser_name;
  cin >> addresser_name;
  cout << "Dear " << addresser_name << ",\n"
       <<"How are you? I'm fine. I miss you. \n";

  cout << "Enter the name of another person your addresser is connected with: \n";
  string friend_of_addresser;
  cin >> friend_of_addresser;

  cout << "Have you seen " << friend_of_addresser << " lately?\n";
  string friend_sex = "0";
  cout << "Type in 'm' if your friend is male and 'f' if your friend is female: \n";
  cin >> friend_sex;

  if(friend_sex == "m")
    cout << "If you see " << friend_of_addresser << " please ask him to call me.\n";
  if(friend_sex == "f")
    cout << "if you see " << friend_of_addresser << " please ask her to call me.\n";

  cout << "Please enter the age of your addresser: \n";
  int age = 0;
  cin >> age;
  if(age == 0 || age > 120)
    simple_error("You're kidding!");
  cout << "I hear you just had a birthday and you are " << age << " years old.\n";
  if(age < 12)
    cout << "Next year you will be " << age+1 << "!\n";
  if(age == 17)
    cout << "Next year you will be able to vote!\n";
  if(age > 70)
    cout << "I hope you are enjoying retirement.\n";
}
 
