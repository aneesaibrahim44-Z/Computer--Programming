#include <iostream>
using namespace std;

int main() {

    // 4x4 array initialization
    int arr[4][4] = {
        {12, 25, 7, 19},
        {45, 10, 33, 28},
        {16, 50, 21, 9},
        {14, 31, 8, 40}
    };

    // Assume first element is maximum
    int max = arr[0][0];

    // Find maximum value
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {

            if(arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    // Display maximum value
    cout << "Maximum Value = " << max << endl;

    return 0;
}