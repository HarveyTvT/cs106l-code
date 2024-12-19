#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> map{
        {"Chris", 2}, {"CS106L", 42}, {"Keith", 14}, {"Nick", 51}, {"Sean", 35},
    };

    int sean = map["Sean"];
    std::cout << sean << "\n";

    map["Chris"] = 31;

    // map as a collection of pair
    for (auto kv : map) {
        std::string key = kv.first;
        int value = kv.second;

        std::cout << key << ": " << value << "\n";
    }

    // structured bindings come in handy when iterating a map
    for (const auto& [key, value] : map) {
        std::cout << key << ": " << value << "\n";
    }
}
