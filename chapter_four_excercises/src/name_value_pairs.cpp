#include "std_lib_facilities.h"

int main(){
  // save name and age in vectors while name should be unique in vector
  cout << "Type in a name and an age: \n";
  string name {""};
  int age{-1};
  vector<string> names;
  vector<int> ages;

  bool run {true};
  bool put_in_string_vec {true};
  
  while(run){
    cin >> name >> age;
    if(name == "NoName" && age == 0){
      run = false;
      put_in_string_vec = false;
    }
    for (int i = 0; i< names.size(); i++){
      if(name == names[i]){
        put_in_string_vec = false;
      }
    }
    if(put_in_string_vec == false && name != "NoName" && age != 0){
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
}
