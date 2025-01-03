#include<iostream>
using namespace std;

int main() {
    int n ;
    cin>>n;
    // Fibonacci series using loop
    int a = 0, b = 1, fib;
    if (n == 0) {
        fib = a;
    } else if (n == 1) {
        fib = b;
    } else {
        for (int i = 2; i <= n; i++) {
            fib = a + b;
            a = b;
            b = fib;
        }
    }
    cout << "The " << n << "th Fibonacci number is: " << fib << "\n";
    
    return 0;
}
