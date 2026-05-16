#include <iostream>
using namespace std;

int main() {

    // Source array
    int source[5] = {1, 2, 3, 4, 5};

    // Destination array
    int destination[5];

    // Copy elements
    for(int i = 0; i < 5; i++) {
        destination[i] = source[i];
    }

    // Display source array
    cout << "Source Array:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << source[i] << " ";
    }

    cout << endl;

    // Display destination array
    cout << "Destination Array:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << destination[i] << " ";
    }

    return 0;
}