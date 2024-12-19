#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> m{
        {"Chris", 31}, {"Nick", 51}, {"Sean", 35}};

    for (const auto& pair : m) {
        std::cout << pair.first << " ";
        std::cout << pair.second << std::endl;
    }
}
