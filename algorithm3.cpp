#include <iostream>
#include <string>

using namespace std;

int main() {
    string T, P;
    cout << "Enter text T: ";
    getline(cin, T);

    cout << "Enter pattern P: ";
    getline(cin, P);

    int R = P.length();  
    int S = T.length(); 
    int INDEX = -1;    

    int K = 0;         
    int MAX = S - R+1;    

    while (K <= MAX) {
       
        int L = 0;
        while (L < R) {

            if (P[L] != T[K + L]) {
                break; 
            }
            L++; 
        }

        if (L == R) {
            INDEX = K+1; 
            break;
        }

        
        K++; 
    }

    if (INDEX == -1) {
        cout << "Pattern not found." << endl;
    } else {
        cout << "Pattern found at index: " << INDEX << endl;
    }
    return 0;
}
