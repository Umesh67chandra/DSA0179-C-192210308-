#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;
    char gender;

public:
    Person(std::string n, int a, char g) : name(n), age(a), gender(g) {}

    void display() {
        std::cout << "Name: " << name << ", Age: " << age << ", Gender: " << gender << std::endl;
    }
};

class Student : public Person {
private:
    int rollNumber;
    std::string studentClass;

public:
    Student(std::string n, int a, char g, int r, std::string c) : Person(n, a, g), rollNumber(r), studentClass(c) {}

    void display() {
        Person::display();
        std::cout << "Roll Number: " << rollNumber << ", Class: " << studentClass << std::endl;
    }
};

class Teacher : public Person {
private:
    std::string subject;
    double salary;

public:
    Teacher(std::string n, int a, char g, std::string s, double sal) : Person(n, a, g), subject(s), salary(sal) {}

    void display() {
        Person::display();
        std::cout << "Subject: " << subject << ", Salary: " << salary << std::endl;
    }
};

int main() {
    Student stu("John", 20, 'M', 101, "Math");
    stu.display();

    Teacher tchr("Mr. Smith", 45, 'M', "Physics", 50000);
    tchr.display();

    return 0;
}

