#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;

public:
    Complex() : real(0), imag(0) {}

    Complex(float r, float i) : real(r), imag(i) {}

    Complex operator + (const Complex &other) {
        return Complex(real + other.real, imag + other.imag);
    }

    friend ostream& operator << (ostream &out, const Complex &c) {
        out << c.real << " + " << c.imag << "i";
        return out;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.5, 4.5), c2(1.5, 2.5);
    Complex result = c1 + c2;
    cout << "Sum of complex numbers: " << result << endl;
    return 0;
}

