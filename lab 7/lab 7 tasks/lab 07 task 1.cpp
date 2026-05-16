#include <iostream>
using namespace std;

int main() {

    // Array declaration and initialization
    int numbers[5] = {10, 20, 30, 40, 50};

    // Display array elements
    cout << "Array elements are:" << endl;

    for(int i = 0; i < 5; i++) {
        cout << numbers[i] << endl;
    }

    return 0;
}