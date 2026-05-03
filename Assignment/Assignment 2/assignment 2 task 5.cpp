#include <iostream>
using namespace std;

// Function to calculate total load
int totalLoad(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to find peak load
int peakLoad(int arr[], int size) {
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int load[24];

    // Input load for 24 hours
    cout << "Enter load (MW) for 24 hours:\n";
    for(int i = 0; i < 24; i++) {
        cin >> load[i];
    }

    // Function calls
    int total = totalLoad(load, 24);
    int peak = peakLoad(load, 24);

    // Output results
    cout << "\nTotal Load: " << total << " MW" << endl;
    cout << "Peak Load: " << peak << " MW" << endl;

    return 0;
}