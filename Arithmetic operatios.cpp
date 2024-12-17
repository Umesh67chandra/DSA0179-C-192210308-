#include <iostream>
int main() {
    int num1, num2;
    std::cout << "Enter first integer: ";
    std::cin >> num1;
    std::cout << "Enter second integer: ";
    std::cin >> num2;
    std::cout << "Sum: " << num1 + num2 << std::endl;
    std::cout << "Difference: " << num1 - num2 << std::endl;
    std::cout << "Product: " << num1 * num2 << std::endl;
    if (num2 != 0) {
        std::cout << "Quotient: " << static_cast<double>(num1) / num2 << std::endl;
    } else {
        std::cout << "Division by zero is not allowed." << std::endl;
    }
    return 0;
}

