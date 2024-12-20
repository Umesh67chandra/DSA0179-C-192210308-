#include <iostream>
#include <cmath>
using namespace std;

class AbsoluteValue {
public:
    int abs(int n) {
        return (n < 0) ? -n : n;
    }

    double abs(double n) {
        return (n < 0) ? -n : n;
    }
};

int main() {
    AbsoluteValue obj;
    cout << "Absolute value of integer: " << obj.abs(-5) << endl;
    cout << "Absolute value of floating-point: " << obj.abs(-5.5) << endl;

    return 0;
}

