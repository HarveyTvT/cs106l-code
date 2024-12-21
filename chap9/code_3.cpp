#include <cstddef>
#include <iostream>

// 首先声明主模板
template <size_t N> struct Factorial;

// 然后是特化版本
template <> struct Factorial<0> {
    enum { value = 1 };
};

// 主模板定义
template <size_t N> struct Factorial {
    enum { value = N * Factorial<N - 1>::value };
};

int main() {
    std::cout << Factorial<7>::value << std::endl;
    return 0;
}
