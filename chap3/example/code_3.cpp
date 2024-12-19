#include <iostream>

int main() {
  // expected err: narrowing conversion of '1.2e+1' from 'double' to 'int'
  // int numOne{12.0};
  int numOne{12};
  float numTwo{12.0};

  std::cout << "numOne is: " << numOne << std::endl;
  std::cout << "numTwo is: " << numTwo << std::endl;
}
