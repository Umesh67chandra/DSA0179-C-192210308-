#include <iostream>
#include <string>

class Person {
public:
    std::string name;
    int age;

    Person(std::string n, int a) : name(n), age(a) {}
};

int main() {
    Person p("Alice", 30);
    Person* ptr = &p;
    std::cout << "Name: " << ptr->name << ", Age: " << ptr->age << std::endl;
    return 0;
}

