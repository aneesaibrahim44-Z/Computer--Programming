#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    // take input from user
    cout << "Enter a positive integer: ";
    cin >> num;

    // for loop to calculate sum
    for(int i = 1; i <= num; i++) {
        sum = sum + i;
    }

    // display result
    cout << "Sum from 1 to " << num << " = " << sum << endl;

    return 0;
}