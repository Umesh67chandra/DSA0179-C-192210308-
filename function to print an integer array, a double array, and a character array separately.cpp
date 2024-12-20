#include <iostream>
using namespace std;

class PrintArray {
public:
    void print(int arr[], int size) {
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void print(double arr[], int size) {
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void print(char arr[], int size) {
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    PrintArray obj;
    int intArr[] = {1, 2, 3};
    double doubleArr[] = {1.1, 2.2, 3.3};
    char charArr[] = {'a', 'b', 'c'};
    
    obj.print(intArr, 3);
    obj.print(doubleArr, 3);
    obj.print(charArr, 3);

    return 0;
}

