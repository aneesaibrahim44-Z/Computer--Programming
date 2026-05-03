#include <iostream>
using namespace std;

// Function to count unsafe readings
void countUnsafe(float arr[], int size, float low, float high) {
    int below = 0, above = 0;

    for(int i = 0; i < size; i++) {
        if(arr[i] < low)
            below++;
        else if(arr[i] > high)
            above++;
    }

    cout << "Readings below safe limit: " << below << endl;
    cout << "Readings above safe limit: " << above << endl;

    if(below > 0 || above > 0) {
        cout << "?? Warning: Unsafe voltage readings detected!\n";
    } else {
        cout << "All readings are within safe limits.\n";
    }
}

// Function to find maximum voltage
float findMax(float arr[], int size) {
    float max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

// Function to find minimum voltage
float findMin(float arr[], int size) {
    float min = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main() {
    float voltage[20];
    float low = 3.0, high = 4.2;

    // Input readings
    cout << "Enter 20 voltage readings:\n";
    for(int i = 0; i < 20; i++) {
        cin >> voltage[i];
    }

    // Function calls
    cout << endl;
    countUnsafe(voltage, 20, low, high);

    float maxV = findMax(voltage, 20);
    float minV = findMin(voltage, 20);

    // Display results
    cout << "Maximum Voltage: " << maxV << " V" << endl;
    cout << "Minimum Voltage: " << minV << " V" << endl;

    return 0;
}