#include <iostream>

int main() {
    int num1, num2, num3;

    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    std::cout << "Enter the third number: ";
    std::cin >> num3;

    if (num1 > num2 && num1 > num3) {
        std::cout << num1 << " is greater than " << num2 << " and " << num3 << "." << std::endl;
    } else {
        std::cout << num1 << " is not greater than both " << num2 << " and " << num3 << "." << std::endl;
    }

    return 0;
}

