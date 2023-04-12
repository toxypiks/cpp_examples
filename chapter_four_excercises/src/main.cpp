#include "std_lib_facilities.h"

int main() {

  vector<double> temps;
  for(double temp; cin>>temp;)
    temps.push_back(temp);

  double median = 0;
  sort(temps);
  int middle = temps.size()/2;
  if(temps.size() % 2 != 0)
    median = temps[middle];
  else
    median = (temps[middle -1] + temps[middle]) / 2;

  cout << "Median value of all temps: " << median << "\n";
}
