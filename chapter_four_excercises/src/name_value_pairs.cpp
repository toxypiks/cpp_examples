#include "std_lib_facilities.h"

bool does_name_exist(string name, vector<string> names){
  for (int i = 0; i< names.size(); i++){
      if(name == names[i]){
        return true;
      }
    }
  return false;
}

int return_age_of_name(string name,vector<string> names, vector<int> ages){
  for (int i = 0; i< names.size(); i++){
      if(name == names[i]){
        return ages[i];
      }
    }
  return -1;
}
    

int main(){
  // save name and age in vectors while name should be unique in vector
  cout << "Type in a name and an age: \n";
  string name {""};
  int age{-1};
  vector<string> names;
  vector<int> ages;

  bool run {true};
  bool put_in_string_vec {true};
  bool name_exist {false};
  string search_name {""};
  int age_of_name {0};

  
  while(run){
    cin >> name >> age;
    if(name == "NoName" && age == 0){
      run = false;
      put_in_string_vec = false;
    }
    name_exist = does_name_exist(name,names);

    if(name_exist == true && name != "NoName" && age != 0){
      cout << "This name already exists\n";
      break;
    }
    if(put_in_string_vec){
      names.push_back(name);
      ages.push_back(age);
    }
  }
  for(int j = 0; j<names.size();j++){
    cout << names[j] << " " << ages[j] << "\n";
  }
  
  cout << "Which name you want to search for in list? \n";
  cin >> search_name;
  name_exist = does_name_exist(search_name,names);
  if(name_exist){
    age_of_name = return_age_of_name(search_name,names,ages);
    cout << "The age of " << search_name << " is " << age_of_name << "\n";
  }
  else
    cout << "Name not found\n";
}
