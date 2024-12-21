#include "Vector.h"
#include <ios>
#include <iostream>

int main() {
    Vector<int> vector;
    Vector<double> doubleVector;
    Vector<std::string> sv;

    for (int i = 0; i < 5; i++) {
        vector.push_back(106);
    }

    vector.at(0) = 100;
    vector[1] = 200;
    vector[2] = 300;

    std::cout << "Size of Vector: " << vector.size() << "\n";
    std::cout << "Vector is Empty: " << std::boolalpha << vector.empty()
              << "\n";
    std::cout << "Contents of vector: ";
    for (const auto& element : vector) {
        std::cout << element << " ";
    }
    std::cout << "\n";
    return 0;
}
