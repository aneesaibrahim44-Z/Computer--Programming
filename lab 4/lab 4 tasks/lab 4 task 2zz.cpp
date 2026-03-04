#include <iostream>
using namespace std;

int main() {
    char grade;

    cout << "Enter your grade (A, B, C, D, F): ";
    cin >> grade;
		grade = toupper(grade);
    switch(grade) {
        case 'A':
        
            cout << "Excellent";
            break;
        case 'B':
            cout << "Very Good";
            break;
        case 'C':
            cout << "Good";
            break;
        case 'D':
            cout << "Pass";
            break;
        case 'F':
            cout << "Fail";
            break;
        default:
            cout << "Invalid Grade";
    }

    return 0;
}