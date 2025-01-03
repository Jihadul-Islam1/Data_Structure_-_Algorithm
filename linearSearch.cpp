#include <iostream>
using namespace std;

int LinearSearch(int arr[], int n, int target) {
    int loc = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            loc = i;
            break;
        }
    }
    return loc;
}

int main() {
    int arr[] = {10, 23, 35, 47, 59};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 35;

    int result = LinearSearch(arr, n, target);

    if (result != -1)
        cout << "Target found at index " << result+1 << endl;
    else
        cout << "Target not found" << endl;

    return 0;
}
