#include <iostream>
using namespace std;

// Function declaration
void multiply(int num1, int num2);

int main() {
    // Calling function with values
    multiply(5, 4);
    return 0;
}

// Function definition
void multiply(int num1, int num2) {
    int product = num1 * num2;
    cout << "Product = " << product << endl;
}