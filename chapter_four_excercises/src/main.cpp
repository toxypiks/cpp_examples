#include "std_lib_facilities.h"

int main() {

  vector<double> distances;
  for(double distance; cin>>distance;)
    distances.push_back(distance);
  
  double sum_dist = 0;
  double mean = 0;
  double min_dist = 0;
  double max_dist = 0;

  sort(distances);
  min_dist = distances[0];
  max_dist = distances[distances.size()-1];

  for(double value: distances)
    sum_dist += value;

  mean = sum_dist / distances.size();

  cout << "sum: " << sum_dist << " min: " << min_dist << " max: " << max_dist << " mean: " << mean << "\n";
}
