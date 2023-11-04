#include <iostream>
using namespace std;

int main() {
    int row, col;
    row = 3;

    // Create an array of pointers for the rows
    int** arr = new int*[row];
    int sizes[] = {4, 2, 3};

    // Create columns for each row
    for (int i = 0; i < row; i++) {
        arr[i] = new int[sizes[i]];
    }

    // Initialize the elements in the array
    int num = 1;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < sizes[i]; j++) {
            arr[i][j] = num++;
        }
    }

    cout << "Elements in matrix form as follows:" << endl;

    // Print the elements in the jagged array
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < sizes[i]; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory
    for (int i = 0; i < row; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
