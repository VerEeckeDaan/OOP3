#include <iostream>

using namespace std;

int main() {
  
  float VAT = 0;
  double valueWithoutVAT = 0;
  double valueWithVAT = 0;

  std::cout << "Please enter  with VAT: ";
  std::cin >> valueWithVAT;

  VAT = valueWithVAT * 0.21;
  valueWithoutVAT = valueWithVAT - VAT;

  std::cout << "VAT = " << VAT << std::endl;
  std::cout << "value with VAT = " << valueWithVAT << std::endl;
  std::cout << "value without VAT = " << valueWithoutVAT << std::endl;


  return 0;
}