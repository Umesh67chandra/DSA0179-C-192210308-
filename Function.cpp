#include <iostream>

void sayHello() {
    std::cout << "Hello, World!" << std::endl;
}

int main() {
    void (*ptr)() = &sayHello;
    ptr();  // Calling the function using the pointer
    return 0;
}

