#include <cmath>
#include <iostream>
#include <stdio.h>

int squareN(int& num) { return std::pow(num, 2); }

int main() {
    int lValue = 2;
    auto four = squareN(lValue);

    // initial vlaue of reference to non-const must be an lvalue.
    // we cannot pass in an r-value by reference because they're temporary

    // auto fourAgain = squareN(2);

    std::cout << four << std::endl;
}
