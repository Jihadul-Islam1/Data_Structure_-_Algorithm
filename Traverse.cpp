#include<iostream>
using namespace std;

void traverse(int arr[],int lb,int ub){
    for (int i = lb; i < ub; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    traverse(arr,0,n);
    
}