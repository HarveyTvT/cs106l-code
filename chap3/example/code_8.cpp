#include <iostream>
#include <math.h>
#include <vector>

void shift(std::vector<std::pair<int, int>>& nums) {
    // for (auto [num1, num2] : nums) {
    for (auto& [num1, num2] : nums) {
        num1++;
        num2++;
    }
}

int main() {
    auto foo = std::vector<std::pair<int, int>>{
        std::pair<int, int>{1, 2},
    };
    auto& bar = foo;
    shift(bar);

    std::cout << bar.at(0).first << std::endl;
    std::cout << bar.at(0).second << std::endl;
}
