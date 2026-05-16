#include <iostream>
using namespace std;

int main() {
    
    // Integer variable
    int num = 10;

    // Pointer declaration
    int *ptr;

    // Pointer initialization
    ptr = &num;

    // Display values
    cout << "Value of num = " << num << endl;
    cout << "Value pointed by ptr = " << *ptr << endl;

    return 0;
}