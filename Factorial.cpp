#include<iostream>
using namespace std;

int main() {
    int n ;
    cin>>n;
    // Factorial using loop
    int factLoop = 1;
    for (int i = 1; i <= n; i++) {
        factLoop *= i;
    }
    cout << "Factorial using loop: " << factLoop << "\n";
    
    // Factorial using recursion
    int factRecursion = 1;
    int temp = n;
    while (temp > 1) {
        factRecursion *= temp;
        temp--;
    }
    cout << "Factorial using recursion (simulated): " << factRecursion << "\n";
    
    return 0;
}
