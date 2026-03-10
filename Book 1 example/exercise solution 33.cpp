#include <iostream>   // Library for input and output
#include <cmath>      // Library for pow() function
using namespace std;

// Function declaration (prototype)
int convert(long long);

int main() {
    long long n;   // Variable to store binary number

    cout << "Enter a binary number: ";
    cin >> n;   // Take binary input from user

    // Call convert function and display result
    cout << n << " in binary = " << convert(n) << " in decimal";

    return 0;   // End of program
}

// Function to convert binary number to decimal
int convert(long long n) {

    int dec = 0;   // Variable to store decimal result
    int i = 0;     // Power index (position of binary digit)
    int rem;       // Variable to store remainder

    // Loop runs until binary number becomes 0
    while (n != 0) {

        rem = n % 10;   // Get last digit of binary number (0 or 1)

        n /= 10;        // Remove last digit

        // Add (digit × 2^position) to decimal value
        dec += rem * pow(2, i);

        ++i;   // Move to next power of 2
    }

    return dec;   // Return decimal result
}