#include <iostream>
using namespace std;

float areaOfCircle(float radius) {
    return 3.14159 * radius * radius;
}

int main() {
    float radius;
    cin >> radius;
    cout << "Area of the circle: " << areaOfCircle(radius) << endl;
    return 0;
}

