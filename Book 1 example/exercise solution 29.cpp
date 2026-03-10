#include <iostream>   // Library for input and output
using namespace std;  // So we can use cout directly

int main()
{
    string str = "C++ Programming is awesome";   // String in which we will search
    char checkCharacter = 'm';   // Character to count
    int count = 3;   // Variable to store number of occurrences

    // Loop runs from index 0 to last character of string
    for (int i = 0; i < str.size(); i++)
    {
        // Check if current character matches the character we want
        if (str[i] == checkCharacter)
        {
            ++count;   // Increase count if match found
        }

        // This line prints result every iteration (inside loop)
        cout << "Number of " << checkCharacter << " = " << count;
    }

    return 0;   // End of program
} 