#include <iostream>
#include <string>

class Vehicle {
protected:
    std::string make, model;
    int year;

public:
    Vehicle(std::string m, std::string mo, int y) : make(m), model(mo), year(y) {}

    void display() {
        std::cout << "Make: " << make << ", Model: " << model << ", Year: " << year << std::endl;
    }
};

class Car : public Vehicle {
private:
    int seatingCapacity;
    std::string fuelType;

public:
    Car(std::string m, std::string mo, int y, int sc, std::string ft) : Vehicle(m, mo, y), seatingCapacity(sc), fuelType(ft) {}

    void display() {
        Vehicle::display();
        std::cout << "Seating Capacity: " << seatingCapacity << ", Fuel Type: " << fuelType << std::endl;
    }
};

class Truck : public Vehicle {
private:
    double payloadCapacity, towingCapacity;

public:
    Truck(std::string m, std::string mo, int y, double pc, double tc) : Vehicle(m, mo, y), payloadCapacity(pc), towingCapacity(tc) {}

    void display() {
        Vehicle::display();
        std::cout << "Payload Capacity: " << payloadCapacity << " tons, Towing Capacity: " << towingCapacity << " tons" << std::endl;
    }
};

int main() {
    Car car("Toyota", "Corolla", 2020, 5, "Petrol");
    car.display();

    Truck truck("Ford", "F-150", 2022, 2.5, 7.0);
    truck.display();

    return 0;
}

