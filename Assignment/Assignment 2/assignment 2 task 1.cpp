#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum = 0;

    // Input 10 integers
    cout << "Enter 10 integers:\n";
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    // Assume first element as max and min
    int max = arr[0];
    int min = arr[0];

    // Find max and min
    for(int i = 1; i < 10; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    // Calculate average
    float average = (float)sum / 10;

    // Display results
    cout << "Maximum value: " << max << endl;
    cout << "Minimum value: " << min << endl;
    cout << "Average: " << average << endl;

    return 0;
}