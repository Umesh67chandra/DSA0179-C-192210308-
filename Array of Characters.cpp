#include <iostream>

int main() {
    char arr[] = {'H', 'e', 'l', 'l', 'o'};
    char* ptr = arr;
    std::cout << "Array of characters: ";
    for(int i = 0; i < 5; ++i) {
        std::cout << *(ptr + i);
    }
    std::cout << std::endl;
    return 0;
}

