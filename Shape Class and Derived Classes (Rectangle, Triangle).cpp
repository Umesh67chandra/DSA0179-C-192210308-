#include <iostream>
#include <cmath>

class Shape {
protected:
    double height, width;

public:
    Shape(double h, double w) : height(h), width(w) {}

    virtual void area() = 0;  // Pure virtual function
    virtual void perimeter() = 0;  // Pure virtual function
};

class Rectangle : public Shape {
public:
    Rectangle(double h, double w) : Shape(h, w) {}

    void area() override {
        std::cout << "Area of Rectangle: " << height * width << std::endl;
    }

    void perimeter() override {
        std::cout << "Perimeter of Rectangle: " << 2 * (height + width) << std::endl;
    }
};

class Triangle : public Shape {
public:
    Triangle(double h, double w) : Shape(h, w) {}

    void area() override {
        std::cout << "Area of Triangle: " << 0.5 * height * width << std::endl;
    }

    void perimeter() override {
        double hypotenuse = std::sqrt((height * height) + (width * width));
        std::cout << "Perimeter of Triangle: " << height + width + hypotenuse << std::endl;
    }
};

int main() {
    Rectangle rect(5, 3);
    rect.area();
    rect.perimeter();

    Triangle tri(5, 3);
    tri.area();
    tri.perimeter();

    return 0;
}

