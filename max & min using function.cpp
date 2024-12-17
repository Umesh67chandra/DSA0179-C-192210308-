#include <iostream>
using namespace std;
void findMaxMin(int arr[], int size, int &max, int &min) {
    max = arr[0];
    min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
}
int main() {
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max, min;
    findMaxMin(arr, size, max, min);
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
    return 0;
}

