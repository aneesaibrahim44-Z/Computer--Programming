#include <iostream>
using namespace std;

int main() {

    // Character array
    char message[] = "HELLO";

    // Access and display each character
    cout << "Characters are:" << endl;

    for(int i = 0; message[i] != '\0'; i++) {
        cout << message[i] << endl;
    }

    return 0;
}