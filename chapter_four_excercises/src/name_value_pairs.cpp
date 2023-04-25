#include "std_lib_facilities.h"

bool does_name_exists(string name, vector<string> names){
  for (int i = 0; i< names.size(); i++){
      if(name == names[i]){
        return true;
      }
    }
  return false;
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
  bool name_exists {false};
  string search_name {""};
  bool name_in_vec {false};

  
  while(run){
    cin >> name >> age;
    if(name == "NoName" && age == 0){
      run = false;
      put_in_string_vec = false;
    }
    name_exists = does_name_exists(name,names);

    if(name_exists == true && name != "NoName" && age != 0){
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
  name_in_vec = does_name_exists(search_name,names);
  if(name_in_vec)
    cout << "The name " << search_name << " does exist.\n";
}
