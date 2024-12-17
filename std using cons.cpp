#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float grade;

public:
    Student(string n, int r, float g) : name(n), rollNumber(r), grade(g) {
        cout << "Student created: " << name << " (Roll No: " << rollNumber << "), Grade: " << grade << endl;
    }

    ~Student() {
        cout << "Student " << name << " (Roll No: " << rollNumber << ") is being destroyed." << endl;
    }

    void display() {
        cout << "Name: " << name << ", Roll No: " << rollNumber << ", Grade: " << grade << endl;
    }
};

int main() {
    Student student1("John Doe", 101, 88.5);
    student1.display();
    return 0;
}

