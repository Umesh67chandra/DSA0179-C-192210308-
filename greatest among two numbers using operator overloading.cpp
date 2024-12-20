#include <iostream>
using namespace std;
class Number {
private:
    int value;
public:
    Number(int v) : value(v) {}
    bool operator > (const Number &other) {
        return value > other.value;
    }
    int getValue() const {
        return value;
    }
};
int main() {
    Number num1(10), num2(20);
    if (num1 > num2) {
        cout << num1.getValue() << " is the greatest." << endl;
    } else {
        cout << num2.getValue() << " is the greatest." << endl;
    }
    return 0;
}
