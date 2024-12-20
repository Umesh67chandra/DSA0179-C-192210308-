#include <iostream>
using namespace std;
class Counter {
private:
    int value;
public:
    Counter(int val = 0) : value(val) {}
    Counter operator+(const Counter& other) {
        return Counter(value + other.value);
    }
    void display() const {
        cout << "Value: " << value << endl;
    }
};
int main() {
    Counter c1(10);
    Counter c2(20);
    cout << "Before addition:" << endl;
    c1.display();
    c2.display();
    Counter c3 = c1 + c2;
    cout << "After addition:" << endl;
    c3.display();
    return 0;
}
