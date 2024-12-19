#include <utility>
#include <iostream>
#include <cmath>


using Zeros = std::pair<double, double>;
using Solution = std::pair<bool, Zeros>;

Solution solveQuadratic(double a, double b, double c) {
    if (b*b < 4*a*c) {
        return std::pair{false, Zeros{}};
    }

    double root = sqrt(b*b - 4*a*c);
    double foo = (-b-root) / (2*a);
    double bar = (-b+root) / (2*a);

    return std::pair{true, std::pair{foo,bar}};
}

int main() {
    auto result = solveQuadratic(5, 10, 5);
    std::cout << result.first << std::endl;
    std::cout << result.second.first << std::endl;
    std::cout << result.second.second << std::endl;
}
