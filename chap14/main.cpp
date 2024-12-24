#include <iostream>
#include <optional>

std::optional<int> divide(int numerator, int denominator) {
    if (denominator != 0) {
        return numerator / denominator;
    }
    return std::nullopt;
}

int main() {
    int a = 10;
    int b = 2;
    std::optional<int> result = divide(10, 2);
    if (result) {
        std::cout << "Result: " << result.value() << "\n";
    } else {
        std::cout << "Division by zero occurred." << "\n";
    }

    result = divide(10, 0);
    if (result) {
        std::cout << "Result: " << result.value() << "\n";
    } else {
        std::cout << "Division by zero occurred." << "\n";
    }

    return 0;
}
