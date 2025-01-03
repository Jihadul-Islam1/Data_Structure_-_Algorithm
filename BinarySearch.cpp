#include <iostream>
using namespace std;
int BinarySearch(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = ((low+high)/2);
        if (arr[mid] == target) {
            return mid;  
        }
        else if (arr[mid] < target) {
            low = mid + 1; 
        }
        else {
            high = mid - 1;  
        }
    }
    return -1;
}
void printResult(int result) {
    if (result != -1) {
        cout << "Target found at index: " << result+1 << endl;
    } else {
        cout << "Target not found." << endl;
    }
}
int main() {
    int arr[] = {2, 3, 4, 10, 40}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int target=4 ; 

    int result = BinarySearch(arr, n, target);
    printResult(result); 

    return 0;
}
