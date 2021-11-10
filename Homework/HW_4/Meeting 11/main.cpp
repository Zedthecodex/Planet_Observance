#include <iostream>
#include "Function_template.cpp"





int main() {
  double data[] = {1.5, 4.6, 3.1, 1.1, 3.8, 2.1};
  int numbers[] = {2, 22, 4, 6, 122, 12, 1, 45};

  const int dataSize = sizeof data/sizeof data[0];
  cout << "Minimum double is " << min(data, dataSize) << endl; 
  cout << "Maximum double is " << max(data, dataSize) << endl; 

  const int numbersSize = sizeof numbers/sizeof numbers[0];
  cout << "Minimum integer is " << min(numbers, numbersSize) << endl; 
  cout << "Maximum integer is " << max(numbers, numbersSize) << endl;

  return 0;
}