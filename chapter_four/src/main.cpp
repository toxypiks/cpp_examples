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
  //drill forth chapter
  int x {0};
  double one {0.0};
  double min_num {10000.0};
  double max_num {0.0};
  string unit = {" "};
  vector<double> values_in_meter;
  cout << "Please type in a number followed by a unit (cm, in, ft or m) \n";
  while(x < 3) {
    cin >> one >> unit;
    if(unit == " " && unit != "cm" && unit != "in" && unit != "ft" && unit != "m")
      cout << "Sorry, I dont know the unit " << unit << "\n";
    else {
      if(one < min_num){
        cout << "the smallest value so far: " << one << "\n";
        min_num = one;
        values_in_meter.push_back(formatted_push_back(one,unit));
      }
      else if(one > max_num && one > min_num){
        cout << "the largest value so far: " << one << "\n";
        max_num = one;
        values_in_meter.push_back(formatted_push_back(one,unit));
      }
    } 
    x++;
  }
  cout << min_num << " " << max_num << " " << values_in_meter.size() << "\n";
  sort(values_in_meter);
  for(double value: values_in_meter) cout << value << "\n";
}
