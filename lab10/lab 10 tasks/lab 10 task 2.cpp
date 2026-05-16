#include <iostream>
using namespace std;

// Function declaration (return type first)
int getSquare(int number);

int main() {
    int result;

    // Function call
    result = getSquare(7);

    // Display result
    cout << "Square = " << result << endl;

    return 0;
}

// Function definition
int getSquare(int number) {
    return number * number;
}