#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    int year;

public:
    Book(string t, string a, int y) : title(t), author(a), year(y) {
        cout << "Book created: " << title << " by " << author << " (" << year << ")" << endl;
    }

    ~Book() {
        cout << "Book '" << title << "' by " << author << " is being destroyed." << endl;
    }

    void display() {
        cout << "Title: " << title << ", Author: " << author << ", Year: " << year << endl;
    }
};

int main() {
    Book book1("1984", "George Orwell", 1949);
    book1.display();
    return 0;
}

