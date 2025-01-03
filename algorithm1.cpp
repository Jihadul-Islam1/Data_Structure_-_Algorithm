#include <iostream>
#include <string>

using namespace std;

int main() {
    string T, P;
    
    // Input text and pattern
    cout << "Enter text T: ";
    getline(cin, T);
    
    cout << "Enter pattern P: ";
    getline(cin, P);
    
    size_t K = T.find(P);
    while (K != string::npos) {
     
        T = T.erase(K, P.length());
        
        K = T.find(P);
    }
    
    cout << "Modified text: " << T << endl;
   
    return 0;
}
