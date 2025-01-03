#include <iostream>
using namespace std;

void insertAtPosition(int arr[], int n, int pos, int value) {
    if (pos < 0 || pos > n) {
        cout << "Invalid position!" << endl;
        return;
    }

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    n++;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int n = 5;
    int value = 99;
    int position = 2;

    cout << "Original array: ";
    printArray(arr, n);

    insertAtPosition(arr, n, position, value);

    cout << "Array after insertion: ";
    printArray(arr, n);

    return 0;
}
