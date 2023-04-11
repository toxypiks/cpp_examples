#include "std_lib_facilities.h"
#include <thread>
#include <random>
#include <cmath>
#include <chrono>

void pow_wow(double* my_values, size_t start, size_t length) {
  for(unsigned int i = start; i < start + length; i++){
    my_values[i] = pow(my_values[i],0.123);
  }
}

int main () {
  std::random_device dev;
  std::mt19937 rng(dev());
  std::uniform_real_distribution<double> unif(0,1);
  
  double* my_values = new double[100000000];
  for(unsigned int i =0;i<100000000;i++) {
    my_values[i] = unif(rng);  
  }

  auto start = std::chrono::steady_clock::now();
  std::thread t1(pow_wow, my_values, 0, 50000000);
  std::thread t2(pow_wow, my_values, 50000000, 50000000);
      
  t1.join();
  t2.join();
  auto end = std::chrono::steady_clock::now();
  auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);


  cout << "time: " << duration.count() << endl;
  for(unsigned int i =10;i<20;i++){
    cout << my_values[i] << endl;
  }
  for(unsigned int i =50000000;i<50000020;i++){
    cout << my_values[i] << endl;
  }
}
