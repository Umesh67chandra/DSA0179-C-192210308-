#include <iostream>
using namespace std;

class MaxValue {
public:
    int max(int a, int b) {
        return (a > b) ? a : b;
    }

    double max(double a, double b) {
        return (a > b) ? a : b;
    }

    char max(char a, char b) {
        return (a > b) ? a : b;
    }
};

int main() {
    MaxValue obj;
    cout << "Max of integers: " << obj.max(10, 20) << endl;
    cout << "Max of floating points: " << obj.max(10.5, 20.3) << endl;
    cout << "Max of characters: " << obj.max('a', 'z') << endl;
    return 0;
}

