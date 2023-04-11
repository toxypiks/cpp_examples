#include "std_lib_facilities.h"

double formatted_push_back(double one, string unit){
  if(unit == "cm")                                    
    return one/100;           
  else if(unit == "in")                               
    return (one*2.54)/100;    
  else if (unit == "ft")                               
    return ((one*12)*2.54)/100;
  else
    return one;
}

int main() {
  //drill fourth chapter
  int x {0};
  double one {0.0};
  double double_one_in_meter {0.0};
  double min_num {10000.0};
  double max_num {0.0};
  string unit = {" "};
  vector<double> values_in_meter;
  cout << "Please type in a number followed by a unit (cm, in, ft or m) \n";
  while(x < 7) {
    cin >> one >> unit;
    if(unit == " " || unit != "cm" && unit != "in" && unit != "ft" && unit != "m")
      cout << "Sorry, I dont know the unit " << unit << "\n";
    else {
      double_one_in_meter = formatted_push_back(one, unit);
      if (x == 0) {
        min_num = double_one_in_meter;
        max_num = double_one_in_meter;
        cout << "the smallest value so far: " << double_one_in_meter << "\n";
        cout << "the largest value so far: " << double_one_in_meter << "\n";
      }
      if(double_one_in_meter < min_num){
        cout << "the smallest value so far: " << double_one_in_meter << "\n";
        min_num = double_one_in_meter;
      }
      else if(double_one_in_meter > max_num){
        cout << "the largest value so far: " << double_one_in_meter << "\n";
        max_num = double_one_in_meter;
      }
      values_in_meter.push_back(double_one_in_meter);
    } 
    x++;
  }
  cout << "min:" << min_num << " max: " << max_num << " size of vec: " << values_in_meter.size() << "\n";
  sort(values_in_meter);
  for(double value: values_in_meter) cout << value << "\n";
}
