#include <iostream>
using namespace std;

// Function to calculate sum
int calculateSum(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[10];

    // Taking input from user
    cout << "Enter 10 integers:" << endl;
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    // Calling function
    int sum = calculateSum(arr, 10);

    // Calculating average
    double average = (double)sum / 10;

    // Display results
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}