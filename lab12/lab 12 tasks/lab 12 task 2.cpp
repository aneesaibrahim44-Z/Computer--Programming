#include <iostream>
using namespace std;

int main() {

    // Array declaration
    int numbers[] = {5, 10, 15, 20, 25};

    // Pointer declaration and initialization
    int *ptr = numbers;

    // Display array elements using pointer arithmetic
    cout << "Array elements are:" << endl;

    for(int i = 0; i < 5; i++) {
        cout << *(ptr + i) << endl;
    }

    return 0;
}