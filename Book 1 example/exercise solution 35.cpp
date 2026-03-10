#include <iostream>   // for input and output
#include <cmath>      // for using pow() function
using namespace std;

// Function to convert binary number to octal
int convertBinarytooctal(long long);

int main()
{
    long long binaryNumber;   // variable to store binary number

    cout << "Enter a binary number: ";
    cin >> binaryNumber;   // taking binary input from user

    // calling function and printing result
    cout << binaryNumber << " in binary = "
         << convertBinarytooctal(binaryNumber)
         << " in octal";

    return 0;   // program finished successfully
}

// Function definition
int convertBinarytooctal(long long binaryNumber)
{
    int octalNumber = 0;      // to store final octal number
    int decimalNumber = 0;    // first we convert binary to decimal
    int i = 0;                // power value for 2

    // Step 1: Convert Binary to Decimal
    while (binaryNumber != 0)
    {
        // taking last digit and multiplying with 2^i
        decimalNumber += (binaryNumber % 10) * pow(2, i);

        ++i;                  // increase power
        binaryNumber /= 10;   // remove last digit
    }

    i = 1;   // reset i for octal place value

    // Step 2: Convert Decimal to Octal
    while (decimalNumber != 0)
    {
        // getting remainder when divided by 8
        octalNumber += (decimalNumber % 8) * i;

        decimalNumber /= 8;   // divide by 8
        i *= 10;              // increase place value
    }

    return octalNumber;   // returning final octal value
}