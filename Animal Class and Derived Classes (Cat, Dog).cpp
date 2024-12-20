#include <iostream>
#include <string>

class Animal {
protected:
    std::string name, species;
    int age;

public:
    Animal(std::string n, std::string s, int a) : name(n), species(s), age(a) {}

    void display() {
        std::cout << "Name: " << name << ", Species: " << species << ", Age: " << age << std::endl;
    }
};

class Cat : public Animal {
private:
    std::string color, breed;

public:
    Cat(std::string n, std::string s, int a, std::string c, std::string b) : Animal(n, s, a), color(c), breed(b) {}

    void display() {
        Animal::display();
        std::cout << "Color: " << color << ", Breed: " << breed << std::endl;
    }
};

class Dog : public Animal {
private:
    double weight;
    std::string breed;

public:
    Dog(std::string n, std::string s, int a, double w, std::string b) : Animal(n, s, a), weight(w), breed(b) {}

    void display() {
        Animal::display();
        std::cout << "Weight: " << weight << " kg, Breed: " << breed << std::endl;
    }
};

int main() {
    Cat cat("Whiskers", "Cat", 2, "Black", "Siamese");
    cat.display();

    Dog dog("Buddy", "Dog", 4, 20.5, "Labrador");
    dog.display();

    return 0;
}

