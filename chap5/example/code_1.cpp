#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec{1, 2, 3, 4, 5};
    for (auto elem : vec) {
        std::cout << elem << " ";
    }

    for (const auto& elem : vec) {
        std::cout << elem << "  ";
    }
}
