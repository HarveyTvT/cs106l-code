#include <iostream>
#include <vector>

template <typename T>
concept Comparable = requires(const T a, const T b) {
    { a < b } -> std::convertible_to<bool>;
};

template <Comparable T> T min(const T& a) { return a; }

template <Comparable T, Comparable... Args>
T min(const T& v, const Args&... args) {
    auto m = min(args...);
    return v < m ? v : m;
}

int main() {
    auto i = min(1, 2, 3, 4, 5);
    std::cout << i << "\n";
}
