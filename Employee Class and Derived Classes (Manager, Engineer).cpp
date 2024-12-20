#include <iostream>
#include <string>

class Employee {
protected:
    std::string name;
    int d;
    double salary;

public:
    Employee(std::string n, int dep, double sal) : name(n), d(dep), salary(sal) {}

    void display() {
        std::cout << "Name: " << name << ", Department: " << d << ", Salary: " << salary << std::endl;
    }
};

class Manager : public Employee {
private:
    std::string department;
    double bonus;

public:
    Manager(std::string n, int dep, double sal, std::string dept, double b) : Employee(n, dep, sal), department(dept), bonus(b) {}

    void display() {
        Employee::display();
        std::cout << "Department: " << department << ", Bonus: " << bonus << std::endl;
    }
};

class Engineer : public Employee {
private:
    std::string specialty;
    int hours;

public:
    Engineer(std::string n, int dep, double sal, std::string spec, int h) : Employee(n, dep, sal), specialty(spec), hours(h) {}

    void display() {
        Employee::display();
        std::cout << "Specialty: " << specialty << ", Hours: " << hours << std::endl;
    }
};

int main() {
    Manager mgr("Alice", 1, 80000, "IT", 5000);
    mgr.display();

    Engineer eng("Bob", 2, 70000, "Software", 40);
    eng.display();

    return 0;
}

