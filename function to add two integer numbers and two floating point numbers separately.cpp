#include <iostream>
using namespace std;

class OverloadAdd {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    OverloadAdd obj;
    cout << "Integer sum: " << obj.add(10, 20) << endl;
    cout << "Floating-point sum: " << obj.add(10.5, 20.3) << endl;
    return 0;
}

