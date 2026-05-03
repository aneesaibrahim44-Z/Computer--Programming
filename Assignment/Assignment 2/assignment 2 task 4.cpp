#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[5];
    string temp;

    // Input names
    cout << "Enter 5 student names:\n";
    for(int i = 0; i < 5; i++) {
        cin >> names[i];
    }

    // Sorting (Bubble Sort)
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4 - i; j++) {
            if(names[j] > names[j + 1]) {
                temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }

    // Display sorted names
    cout << "\nSorted names:\n";
    for(int i = 0; i < 5; i++) {
        cout << names[i] << endl;
    }

    return 0;
}