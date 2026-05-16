#include <iostream>
#include <string>
using namespace std;

// Structure declaration
struct Student {
    string name;
    int age;
    char grade;
};

int main() {

    // Structure variable
    Student student1;

    // Initialize members
    student1.name = "Ali";
    student1.age = 19;
    student1.grade = 'A';

    // Display values
    cout << "Student Information:" << endl;
    cout << "Name: " << student1.name << endl;
    cout << "Age: " << student1.age << endl;
    cout << "Grade: " << student1.grade << endl;

    return 0;
}