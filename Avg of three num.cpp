#include <iostream>

int main() {
    int num1, num2, num3;

    std::cout << "Enter first integer: ";
    std::cin >> num1;
    std::cout << "Enter second integer: ";
    std::cin >> num2;
    std::cout << "Enter third integer: ";
    std::cin >> num3;

    double average = (num1 + num2 + num3) / 3.0;

    std::cout << "Average: " << average << std::endl;

    return 0;
}

