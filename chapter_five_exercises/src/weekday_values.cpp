#include "std_lib_facilities.h"

int main() {
  
  try {
    cout << "Please type each day of the week with a value seperated by a whitespace\n";
    string weekday {""};
    double value {0};

    vector<string> weekdays = {"Monday", "monday", "Mon", "mon", "M", "m", "Tuesday", "tuesday", "Tue", "tue", "Tu", "tu", "Wednesday", "wednesday", "Wed", "wed", "W", "w", "Thursday", "thursday", "Thu", "thu", "Th", "th","Friday", "friday", "Fri", "fri", "F", "f", "Saturday", "saturday", "Sat", "sat", "S", "s", "Sunday", "sunday", "Sun", "sun", "U", "u"};

    vector <string> user_input_weekdays {};
    vector<int> user_input_values {};

    bool run = true;

    while(run) {
      cin >> weekday >> value;
      if(std::find(weekdays.begin(), weekdays.end(),weekday) != weekdays.end()) {
          if(std::find(user_input_weekdays.begin(), user_input_weekdays.end(),weekday) == user_input_weekdays.end()) {
            user_input_weekdays.push_back(weekday);
            if(cin.fail()) {
              throw invalid_argument("Only integer are allowed as second input");
            }
            else
              user_input_values.push_back(value);
          }
          else
            throw invalid_argument("You already typed in this weekday");
        }
        else
          throw invalid_argument("Only weekdays with common synonyms are allowed e.g Monday, monday, Mon, mon, M or m");
      if(user_input_values.size() == 7)
        run = false;
    }
    
    int sum_of_the_week {0};
    for(double input: user_input_values)
      sum_of_the_week += input;
    cout << "Sum of the week is: " << sum_of_the_week << '\n';
  }
  catch (invalid_argument& e)
  {
    cerr << e.what() << '\n';
    return -1;
  }
  catch(...) {
    cerr << "Unknown exception!\n";
  }
  return 0;
}
