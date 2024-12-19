#include <iostream>
#include <math.h>
#include <vector>

// call by reference;
void squareN(int& n) { n = std::pow(n, 2); }

int main() {
    int num = 2;
    squareN(num);
    std::cout << num << std::endl;
}
