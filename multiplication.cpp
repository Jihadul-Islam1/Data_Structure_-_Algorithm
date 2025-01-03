#include <iostream>
using namespace std;

void matmul(int A[][10], int B[][10], int C[][10], int M, int P, int N) {
    for (int I = 0; I < M; I++) {
        for (int J = 0; J < N; J++) {
            C[I][J] = 0;
         
            for (int K = 0; K < P; K++) {
                C[I][J] += A[I][K] * B[K][J];
            }
        }
    }
}

int main() {
    int M, P, N;

    cout << "Enter dimensions M, P, N (for matrices A[M][P] and B[P][N]): ";
    cin >> M >> P >> N;

    int A[10][10], B[10][10], C[10][10];

    // Input elements of matrix A
    cout << "Enter elements of matrix A:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < P; j++) {
            cin >> A[i][j];
        }
    }

    // Input elements of matrix B
    cout << "Enter elements of matrix B:" << endl;
    for (int i = 0; i < P; i++) {
        for (int j = 0; j < N; j++) {
            cin >> B[i][j];
        }
    }

    matmul(A, B, C, M, P, N);

    // Display the result matrix C
    cout << "Resultant matrix C after multiplication:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
