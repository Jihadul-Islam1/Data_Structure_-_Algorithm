#include <bits/stdc++.h>
using namespace std;

int quick(int arr[],int beg,int end){
    int left=beg,right=end,loc=beg;
    while (true)
    {
        while (arr[loc]<=arr[right] && loc!=right)
        {
            right--;
        }
        if (loc==right) return loc;
        if (arr[loc]>arr[right])
        {
            swap(arr[loc],arr[right]);
            loc=right;
        }
        
        while (arr[left]<=arr[loc] && left!=loc)
        {
            left++;
        }
        if (loc==left) return loc;
        if (arr[left]>arr[loc])
        {
            swap(arr[left],arr[loc]);
            loc=left;
        }
        
        
    }
    
}

void quickSort(int arr[], int beg, int end)
{
    if (beg < end)
    {
        int loc = quick(arr, beg, end);
        quickSort(arr, beg, loc - 1);
        quickSort(arr, loc + 1, end);
    }
}
void printP(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Unsorted Array: " << endl;
    printP(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "Sorted Array: " << endl;
    printP(arr, n);
}

// #include <iostream>
// using namespace std;

// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int quickSortProcess(int *arr, int beg, int end) {
//     int left = beg, right = end, loc = beg;
//     while (true) {
//         while (arr[loc] <= arr[right] && loc != right) {
//             right--;
//         }
//         if (loc == right) return loc;
//         if (arr[loc] > arr[right]) {
//             swap(&arr[loc], &arr[right]);
//             loc = right;
//         }

//         while (arr[left] <= arr[loc] && left != loc) {
//             left++;
//         }
//         if (loc == left) return loc;
//         if (arr[left] > arr[loc]) {
//             swap(&arr[left], &arr[loc]);
//             loc = left;
//         }
//     }
// }

// void quickSort(int *arr, int beg, int end) {
//     if (beg < end) {
//         int pivotIndex = quickSortProcess(arr, beg, end);
//         quickSort(arr, beg, pivotIndex - 1);   // Sort the left subarray
//         quickSort(arr, pivotIndex + 1, end);   // Sort the right subarray
//     }
// }

// int main() {
//     int arr[] = {44, 33, 11, 55, 77, 90, 40, 60, 99, 22, 88, 66};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     quickSort(arr, 0, n - 1);

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
