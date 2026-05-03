#include <iostream>
using namespace std;

int main() {
    int A[3][3], B[3][3], C[3][3];

    // Input first matrix
    cout << "Enter elements of first 3x3 matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }

    // Input second matrix
    cout << "Enter elements of second 3x3 matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> B[i][j];
        }
    }

    // Matrix addition
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display result matrix
    cout << "Resultant matrix after addition:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}