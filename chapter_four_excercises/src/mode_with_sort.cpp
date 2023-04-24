#include "mode_with_sort.hpp"
//#include "std_lib_facilities.h"
#include <vector>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int find_mode_value(vector<int> values){ // insgesamt O(n*log n)
  sort(values.begin(), values.end()); // O(n* log n)
  int mode {values[0]};
  int count {1};
  int remember_count {1};
  
  for(int i = 1;i<values.size();i++){ // O(n)
    if(values[i] == values[i-1])
    {
      count++;
    }
    else {
      if(count > remember_count){
        remember_count = count;
        mode = values[i-1];
        count = 1;
      }
      count = 1;
    }
  }

  if(count > remember_count){
    remember_count = count;
    mode = values[values.size()-1];
  }
  return mode;
}
