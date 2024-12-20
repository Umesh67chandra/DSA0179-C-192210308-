#include <iostream>
#include <stdexcept>  // Include the header for out_of_range
using namespace std;

class Array {
private:
    int* arr;
    int size;

public:
    Array(int s) : size(s) {
        arr = new int[size];
    }

    ~Array() {
        delete[] arr;
    }

    int& operator[](int index) {
        if (index < 0 || index >= size) {
            throw out_of_range("Index out of range");
        }
        return arr[index];
    }

    void input() {
        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; ++i) {
            cin >> arr[i];
        }
    }

    void display() const {
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    Array arr(n);
    arr.input();
    
    cout << "Array elements: ";
    arr.display();
    
    try {
        int index;
        cout << "Enter the index to access an element: ";
        cin >> index;
        cout << "Element at index " << index << ": " << arr[index] << endl;
    }
    catch (const out_of_range& e) {
        cout << e.what() << endl;
    }

    return 0;
}

