#include <iostream>
using namespace std;

class Sum {
public:
    void sum(int arr1[], int arr2[], int size) {
        for (int i = 0; i < size; ++i) {
            cout << arr1[i] + arr2[i] << " ";
        }
        cout << endl;
    }

    void sum(int mat1[2][2], int mat2[2][2], int rows, int cols) {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << mat1[i][j] + mat2[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Sum obj;
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    obj.sum(arr1, arr2, 3);
    
    int mat1[2][2] = {{1, 2}, {3, 4}};
    int mat2[2][2] = {{5, 6}, {7, 8}};
    obj.sum(mat1, mat2, 2, 2);

    return 0;
}

