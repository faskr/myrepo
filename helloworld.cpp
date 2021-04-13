#include <iostream>

void world() {
    std::cout << "world";
}

int main() {
    int a = 1;
    std::cout << "hello ";
    world();
    std::cout << std::endl;
    std::cout << a << std::endl;
}