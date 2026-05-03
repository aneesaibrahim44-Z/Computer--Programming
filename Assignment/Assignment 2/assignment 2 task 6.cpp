#include <iostream>
#include <string>
using namespace std;

// Function to find topper
void findTopper(string names[], int marks[], int size) {
    int maxIndex = 0;

    for(int i = 1; i < size; i++) {
        if(marks[i] > marks[maxIndex]) {
            maxIndex = i;
        }
    }

    cout << "\nTopper: " << names[maxIndex]
         << " with marks = " << marks[maxIndex] << endl;
}

// Function to display pass/fail
void passFail(string names[], int marks[], int size) {
    cout << "\nPass/Fail Status:\n";
    for(int i = 0; i < size; i++) {
        if(marks[i] >= 50) {
            cout << names[i] << " : Pass\n";
        } else {
            cout << names[i] << " : Fail\n";
        }
    }
}

// Function to search student
void searchStudent(string names[], int marks[], int size) {
    string searchName;
    cout << "\nEnter name to search: ";
    cin >> searchName;

    bool found = false;

    for(int i = 0; i < size; i++) {
        if(names[i] == searchName) {
            cout << "Found! " << names[i]
                 << " has marks = " << marks[i] << endl;
            found = true;
            break;
        }
    }

    if(!found) {
        cout << "Student not found.\n";
    }
}

int main() {
    const int SIZE = 5;
    string names[SIZE];
    int marks[SIZE];

    // Input data
    cout << "Enter names and marks of 5 students:\n";
    for(int i = 0; i < SIZE; i++) {
        cout << "Student " << i+1 << " name: ";
        cin >> names[i];
        cout << "Marks: ";
        cin >> marks[i];
    }

    // Function calls
    findTopper(names, marks, SIZE);
    passFail(names, marks, SIZE);
    searchStudent(names, marks, SIZE);

    return 0;
}