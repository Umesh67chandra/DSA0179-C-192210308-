#include <iostream>
using namespace std;

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}

int main() {
    float celsius;
    cin >> celsius;
    cout << celsius << " Celsius is " << celsiusToFahrenheit(celsius) << " Fahrenheit." << endl;
    return 0;
}

