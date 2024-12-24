#include "./include/StudentID.h"

#include <iostream>
#include <vector>

template <typename T>
concept Comparable = requires(const T a, const T b) {
    { a < b } -> std::convertible_to<bool>;
};

template <Comparable T> T min(const T& a, const T& b) { return a < b ? a : b; }

bool operator<(const StudentID& lhs, const StudentID& rhs) {
    return lhs.idNumber < rhs.idNumber;
}

int main() {
    StudentID jacob = StudentID{"jacob", "001", 1};
    StudentID fabio = StudentID{"fabio", "001", 2};

    auto minStanfordID = min<StudentID>(jacob, fabio);
    std::cout << minStanfordID.getID() << "\n";
}
