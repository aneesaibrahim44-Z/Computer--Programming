#include <iostream>   // Library for input and output
using namespace std;  // Allows us to use cout, cin directly

int main()
{
    string s1, s2, result;   // Declare three string variables

    cout << "Enter string s1: ";
    getline(cin, s1);   // Take full line input (including spaces) for s1

    cout << "Enter string s2: ";
    getline(cin, s2);   // Take full line input (including spaces) for s2

    result = s1 + s2;   // Concatenate (join) both strings

    cout << "Resultant String = " << result;   // Display combined string

    return 0;   // End of program
}