#include <iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
double divide(int a, int b) {
    if (b != 0)
        return (double)a / b;
    else {
        cout << "Error! Division by zero." << endl;
        return 0;
    }
}
double add(double a, double b) {
    return a + b;
}
double subtract(double a, double b) {
    return a - b;
}
double multiply(double a, double b) {
    return a * b;
}
double divide(double a, double b) {
    if (b != 0)
        return a / b;
    else {
        cout << "Error! Division by zero." << endl;
        return 0;
    }
}
int main() {
    int intNum1 = 10, intNum2 = 5;
    double floatNum1 = 10.5, floatNum2 = 5.5;
    cout << "Integer Operations: " << endl;
    cout << "Addition: " << add(intNum1, intNum2) << endl;
    cout << "Subtraction: " << subtract(intNum1, intNum2) << endl;
    cout << "Multiplication: " << multiply(intNum1, intNum2) << endl;
    cout << "Division: " << divide(intNum1, intNum2) << endl;
    cout << "\nFloating-point Operations: " << endl;
    cout << "Addition: " << add(floatNum1, floatNum2) << endl;
    cout << "Subtraction: " << subtract(floatNum1, floatNum2) << endl;
    cout << "Multiplication: " << multiply(floatNum1, floatNum2) << endl;
    cout << "Division: " << divide(floatNum1, floatNum2) << endl;
    return 0;
}

