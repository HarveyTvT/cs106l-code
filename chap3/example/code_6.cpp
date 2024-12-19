#include <iostream>

int main() {
    int num = 5;
    int& ref = num;

    ref = 10;

    std::cout << num << std::endl;
}
