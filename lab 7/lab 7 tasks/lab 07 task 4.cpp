#include <iostream>
using namespace std;

int main() {

    int numbers[5];
    int sum = 0;

    // Input numbers
    cout << "Enter 5 numbers:" << endl;

    for(int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    // Calculate sum
    for(int i = 0; i < 5; i++) {
        sum = sum + numbers[i];
    }

    // Display sum
    cout << "Sum of numbers = " << sum << endl;

    return 0;
}