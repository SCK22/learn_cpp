#include <iostream>

int main() {
  
  double tempf;
  double tempc;
  
  // Ask the user
  
  std::cout << "Enter the temperature in Fahrenheit: ";
  std::cin >> tempf; // should add some checks in place , only float to be accepted.
  tempc = (tempf - 32) / 1.8;
  
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";
  
}