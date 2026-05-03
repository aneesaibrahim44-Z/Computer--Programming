#include <iostream>
using namespace std;

// Function to calculate total energy
float totalEnergy(float arr[], int size) {
    float sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to find hour of maximum generation
int maxHour(float arr[], int size) {
    int index = 0;
    for(int i = 1; i < size; i++) {
        if(arr[i] > arr[index]) {
            index = i;
        }
    }
    return index;
}

// Function to calculate average energy
float averageEnergy(float arr[], int size) {
    float sum = totalEnergy(arr, size);
    return sum / size;
}

int main() {
    float energy[24];

    // Input data
    cout << "Enter energy generated (kWh) for 24 hours:\n";
    for(int i = 0; i < 24; i++) {
        cin >> energy[i];
    }

    // Function calls
    float total = totalEnergy(energy, 24);
    int peakHour = maxHour(energy, 24);
    float avg = averageEnergy(energy, 24);

    // Display results
    cout << "\nTotal Energy Generated: " << total << " kWh" << endl;
    cout << "Maximum Generation at Hour: " << peakHour 
         << " (Value: " << energy[peakHour] << " kWh)" << endl;
    cout << "Average Energy per Hour: " << avg << " kWh" << endl;

    return 0;
}