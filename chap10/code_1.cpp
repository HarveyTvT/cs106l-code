#include <iostream>
#include <vector>

template <typename It, typename Pred> It find_if(It first, It last, Pred pred) {
    for (auto it = first; it != last; ++it) {
        if (pred(*it))
            return it;
    }
    return last;
}

bool isEven(int i) { return i % 2 == 0; }

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    auto it = find_if(v.begin(), v.end(), isEven);
    std::cout << *it << "\n";

    int n;
    std::cin >> n;
    it = find_if(v.begin(), v.end(), [n](int x) { return x < n; });
    std::cout << *it << "\n";
}
