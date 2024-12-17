#include <iostream>
using namespace std;

class Car {
private:
    string model;
    int year;

public:
    Car(string carModel, int carYear) : model(carModel), year(carYear) {
        cout << "Car " << model << " (" << year << ") has been created." << endl;
    }

    ~Car() {
        cout << "Car " << model << " (" << year << ") is being destroyed." << endl;
    }

    void display() {
        cout << "Car Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    Car car1("Toyota Camry", 2020);
    car1.display();
    return 0;
}

