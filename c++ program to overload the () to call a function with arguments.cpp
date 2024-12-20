#include <iostream>
using namespace std;

class Functor {
public:
    void operator()(int x, int y) {
        cout << "The sum of " << x << " and " << y << " is: " << x + y << endl;
    }
};

int main() {
    Functor f;
    f(10, 20);

    return 0;
}

