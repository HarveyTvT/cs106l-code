#include <iostream>
#include <map>
#include <sstream>
#include <string>

std::string soundex(std::string s) {
    std::stringstream ss;
    size_t size = 0;

    std::map<char, int> digits = {
        {'A', 0}, {'E', 0}, {'I', 0}, {'O', 0}, {'U', 0}, {'H', 0}, {'W', 0},
        {'Y', 0}, {'B', 1}, {'F', 1}, {'P', 1}, {'V', 1}, {'C', 2}, {'G', 2},
        {'J', 2}, {'K', 2}, {'Q', 2}, {'S', 2}, {'X', 2}, {'Z', 2}, {'D', 3},
        {'T', 3}, {'L', 4}, {'M', 5}, {'N', 5}, {'R', 6},
    };

    for (auto i = s.begin(); i != s.end(); i++) {
        if (i != s.begin() && std::toupper(*i) == std::toupper(*(i - 1))) {
            continue;
        }

        char ch = std::toupper((*i));
        int dg = digits[ch];

        if (dg == 0) {
            continue;
        }

        if (i == s.begin()) {
            ss << ch;
        } else {
            ss << dg;
        }

        if (++size == 4) {
            break;
        }
    }

    for (; size < 4; size++) {
        ss << 0;
    }
    return ss.str();
}

int main() {
    std::cout << soundex("Roberts") << "\n";
    std::cout << soundex("Rupert") << "\n";
    std::cout << soundex("Rr") << "\n";
}
