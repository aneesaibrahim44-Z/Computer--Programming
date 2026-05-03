#include <iostream>
using namespace std;

// Function to reverse array
void reverseArray(int arr[], int size) {
    for(int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

// Function to display array
void displayArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[10];

    cout << "Enter 10 elements:\n";
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    cout << "Array before reversal:\n";
    displayArray(arr, 10);

    reverseArray(arr, 10);

    cout << "Array after reversal:\n";
    displayArray(arr, 10);

    return 0;
}