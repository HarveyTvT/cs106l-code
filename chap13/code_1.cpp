#include <cstdlib>
#include <iostream>

class MoveMe {
  public:
    int* data;

    // Constructor
    MoveMe(int value = 0) : data(new int(value)) {
        std::cout << "Constructor: " << *data << " at " << data << std::endl;
    }

    // Copy constructor
    MoveMe(const MoveMe& other) : data(new int(*other.data)) {
        std::cout << "Copy constructor: " << *data << " at " << data << " from "
                  << other.data << std::endl;
    }

    // Move constructor
    MoveMe(MoveMe&& other) noexcept : data(other.data) {
        other.data = nullptr;
        std::cout << "Move constructor: " << *data << " at " << data << " from "
                  << &other << std::endl;
    }

    // Copy assignment operator
    MoveMe& operator=(const MoveMe& other) {
        if (this != &other) {
            delete data;
            data = new int(*other.data);
            std::cout << "Copy assignment: " << *data << " at " << data
                      << " from " << other.data << std::endl;
        }
        return *this;
    }

    // Move assignment operator
    MoveMe& operator=(MoveMe&& other) noexcept {
        if (this != &other) {
            delete data;
            data = other.data;
            other.data = nullptr;
            std::cout << "Move assignment: " << *data << " at " << data
                      << " from " << &other << std::endl;
        }
        return *this;
    }

    // Destructor
    ~MoveMe() {
        if (data != nullptr) {
            std::cout << "Destructor: " << *data << " at " << data << std::endl;
            delete data;
        } else {
            std::cout << "Destructor: null pointer" << std::endl;
        }
    }
};

int main() {
    MoveMe a(10);
    MoveMe b(20);

    std::cout << "Before move assignment:" << std::endl;
    std::cout << "a.data = " << a.data << ", *a.data = " << *a.data
              << std::endl;
    std::cout << "b.data = " << b.data << ", *b.data = " << *b.data
              << std::endl;

    // Perform move assignment
    a = std::move(b);

    std::cout << "After move assignment:" << std::endl;
    std::cout << "a.data = " << a.data << ", *a.data = " << *a.data
              << std::endl;
    std::cout << "b.data = " << b.data << std::endl;

    return 0;
}
