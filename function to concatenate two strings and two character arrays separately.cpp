#include <iostream>
#include <cstring>
using namespace std;

class Concatenate {
public:
    string concat(const string& a, const string& b) {
        return a + b;
    }

    char* concat(char a[], char b[]) {
        char* result = new char[strlen(a) + strlen(b) + 1];
        strcpy(result, a);
        strcat(result, b);
        return result;
    }
};

int main() {
    Concatenate obj;
    cout << "Concatenated string: " << obj.concat("Hello", " World") << endl;
    
    char arr1[] = "Hello";
    char arr2[] = " World";
    cout << "Concatenated char arrays: " << obj.concat(arr1, arr2) << endl;

    return 0;
}

