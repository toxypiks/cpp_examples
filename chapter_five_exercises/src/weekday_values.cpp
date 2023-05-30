#include "std_lib_facilities.h"

int main() {
  
  string weekday {""};
  int value {0};

  vector<string> weekdays = {"Monday", "monday", "Mon", "mon", "M", "m", "Tuesday", "tuesday", "Tue", "tue", "T", "t", "Wednesday", "wednesday", "Wed", "wed", "W", "w", "Thursday", "thursday", "Thu", "thu", "T", "t","Friday", "friday", "Fri", "fri", "F", "f", "Saturday", "saturday", "Sat", "sat", "S", "s", "Sunday", "sunday", "Sun", "sun", "U", "u"};

  vector <string> user_input_weekdays {};
  vector<int> user_input_values {};
  
  while(cin >> weekday && cin >> value) {
    if(std::find(weekdays.begin(), weekdays.end(),weekday) != weekdays.end()) {
        if(std::find(user_input_weekdays.begin(), user_input_weekdays.end(),weekday) == user_input_weekdays.end()){
          user_input_weekdays.push_back(weekday);
          if(isdigit(value))
            user_input_values.push_back(value);
          else
            throw invalid_argument("Only integers as values are allowed");
        }
        else
          throw invalid_argument("You already typed in this weekday");
      }
      else
        throw invalid_argument("Only weekdays with common synonyms are allowed e.g Monday, monday, Mon, mon, M or m");
    }
  return 0;
}
