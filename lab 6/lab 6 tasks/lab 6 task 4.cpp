#include <iostream>
using namespace std;

int main() {
    int rows;

    // take input from user
    cout << "Enter number of rows: ";
    cin >> rows;

    // outer loop for rows
    for(int i = rows; i >= 1; i--) {
        // inner loop for printing stars
        for(int j = i; j >= 1; j--) {
            cout << "* ";
        }
        cout << endl; // move to next line
    }

    return 0;
}