#include <iostream>
#include <map>
#include <vector>

int main()
{
    std::map<std::string, int> ages{{"Alice", 25}, {"Bob", 30}, {"Charlie", 35}};
    std::cout << "Alice's age: " << ages["Alice"] << std::endl;
    std::cout << "Bob's age: " << ages.at("Bob") << std::endl;

    std::vector<int> numbers{1, 2, 3, 4, 5};
    for (int num : numbers)
    {
        std::cout << num << "  ";
    }
}
