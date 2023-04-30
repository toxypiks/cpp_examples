#include "std_lib_facilities.h"

class Name_value{
 public:
  string name;
  int value;
  Name_value(string first_name, int age)
      :name(first_name), value(age) { }
};
 

bool does_name_exist(string first_name, vector<Name_value> nv){ 
  for (auto const& [name,value] : nv){
    if(first_name == name){
        return true;
      }
    }
  return false;
}

int return_age_of_name(string first_name,vector<Name_value> nv){
  for (auto const& [name,value] : nv){
      if(first_name == name){
        return value;
      }
    }
  return -1;
}

vector<string> return_names_by_age(int age,vector<Name_value> nv){
  vector<string> resulting_names;
  for(auto const& [name,value] : nv){
    if(age == value)
      resulting_names.push_back(name);
  }
  return resulting_names;
}
    

int main(){
  // save name and age in vectors while name should be unique in vector
  cout << "Type in a name and an age: \n";
  string name {""};
  int age{-1};
  
  vector<Name_value> nv;
 
  bool run {true};
  bool put_in_string_vec {true};
  bool name_exist {false};
  string search_name {""};
  int age_of_name {0};
  int search_age {0};
 
  while(run){
    cin >> name >> age;
    if(name == "NoName" && age == 0){
      run = false;
      put_in_string_vec = false;
    }
    name_exist = does_name_exist(name,nv);

    if(name_exist == true && name != "NoName" && age != 0){
      cout << "This name already exists\n";
      break;
    }
    if(put_in_string_vec){
      nv.push_back(Name_value(name,age));
    }
  }
  for(auto const& [name,value] : nv){
    cout << name << " " << value << "\n";
  }
  
  cout << "Enter age to search for corresponding names: \n";
  cin >> search_age;
  vector<string>result;
  result = return_names_by_age(search_age,nv);
  if(result.size()>0){
    for(string data:result){
      cout << data << "\n";
    }
  }
  else
    cout << "Score not found\n";
}
