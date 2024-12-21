#include <iostream>
#include <vector>

template <typename T>
concept Comparable = requires(const T a, const T b) {
    { a < b } -> std::convertible_to<bool>;
};

template <Comparable T> T min(const T& a, const T& b) { return a < b ? a : b; }

template <Comparable T> T min2(const T& a) { return a; }

template <Comparable T, Comparable... Args>
T min2(const T& v, const Args&... args) {
    auto m = min2(args...);
    return v < m ? v : m;
}

template <std::input_iterator T, typename U>
int find(T begin, T end, U target) {
    for (int i = 0; begin + i != end; ++i) {
        if (*(begin + i) == target) {
            return i;
        }
    }
    return -1;
}

int main() {

    std::vector<int> a = {1, 2, 3, 4, 5};

    auto i = find(a.begin(), a.end(), 1);

    std::cout << i << "\n";
}
