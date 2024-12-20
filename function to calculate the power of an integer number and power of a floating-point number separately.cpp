#include <iostream>
#include <cmath>
using namespace std;

class Power {
public:
    int power(int base, int exponent) {
        return pow(base, exponent);
    }

    double power(double base, double exponent) {
        return pow(base, exponent);
    }

    // Additional overload for handling mixed types (int base, double exponent)
    double power(double base, int exponent) {
        return pow(base, exponent);
    }
};

int main() {
    Power obj;
    cout << "Power of integer: " << obj.power(2, 3) << endl;
    cout << "Power of floating-point: " << obj.power(2.5, 3) << endl;

    return 0;
}

