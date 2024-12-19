#include <iostream>
#include <map>

int main() {
    std::map<int, int> m{{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    auto a = m.begin();
    ++a;
    auto b = a;
    ++a;
    auto c = ++a;
    ++a;
    return 0;
}
