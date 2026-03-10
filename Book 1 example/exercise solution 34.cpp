#include <iostream>   // Library for input and output
#include <cmath>      // Required for pow() function

using namespace std;

// Function declaration (prototype)
int octalToDecimal(int octalNumber);

int main() {
    int octalNumber;   // Variable to store octal number

    cout << "Enter an octal number: ";
    cin >> octalNumber;   // Take octal input from user

    // Call function and display result
    cout << octalNumber << " in octal"
         << " = " << octalToDecimal(octalNumber)
         << " in decimal" << endl;

    return 0;   // End of program
}

// Function to convert octal number to decimal
int octalToDecimal(int octalNumber) {

    int decimalNumber = 0;  // Store final decimal value
    int i = 0;              // Power position (starts from 0)
    int rem;                // Store remainder (last digit)

    // Loop runs until octal number becomes 0
    while (octalNumber != 0) {

        rem = octalNumber % 10;   // Get last digit of octal number

        octalNumber /= 10;        // Remove last digit

        // Add (digit × 8^position) to decimal value
        decimalNumber += rem * pow(8, i);

        i++;   // Move to next power
    }

    return decimalNumber;   // Return decimal result
}