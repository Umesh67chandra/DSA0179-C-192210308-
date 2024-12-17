#include <iostream>
using namespace std;

int countCharacters(string str) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

int main() {
    string str;
    cin >> str;
    cout << "Number of characters: " << countCharacters(str) << endl;
    return 0;
}

