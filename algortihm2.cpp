#include <iostream>
#include <string>

using namespace std;

int main() {
    string T, P, Q;
    
    // Input text, pattern to find, and pattern to replace with
    cout << "Enter text T: ";
    getline(cin, T);
    
    cout << "Enter pattern P to find: ";
    getline(cin, P);
    
    cout << "Enter pattern Q to replace with: ";
    getline(cin, Q);
    
    size_t K = T.find(P);
    
    while (K != string::npos) {

        T.replace(K, P.length(), Q);
        
        K = T.find(P, K + Q.length());//K + Q.length(): এখানে K এর পরবর্তী অবস্থান থেকে খোঁজ শুরু হয়, অর্থাৎ, আমরা নিশ্চিত করছি যে আমরা ইতিমধ্যে প্রতিস্থাপন করা অংশটি আবার পরীক্ষা না করি।
    }
    
    cout << "Modified text: " << T << endl;
    
    return 0;
}
