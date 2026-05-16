#include <iostream>
using namespace std;

int main() {

    // 3x3 array initialization
    int arr[3][3] = {
        {2, 4, 6},
        {1, 3, 5},
        {7, 8, 9}
    };

    int totalSum = 0;

    // Row sums
    cout << "Row Sums:" << endl;

    for(int i = 0; i < 3; i++) {
        int rowSum = 0;

        for(int j = 0; j < 3; j++) {
            rowSum += arr[i][j];
        }

        cout << "Row " << i + 1 << " Sum = " << rowSum << endl;
    }

    // Column sums
    cout << endl << "Column Sums:" << endl;

    for(int j = 0; j < 3; j++) {
        int colSum = 0;

        for(int i = 0; i < 3; i++) {
            colSum += arr[i][j];
        }

        cout << "Column " << j + 1 << " Sum = " << colSum << endl;
    }

    // Total sum
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            totalSum += arr[i][j];
        }
    }

    cout << endl << "Total Sum = " << totalSum << endl;

    return 0;
}