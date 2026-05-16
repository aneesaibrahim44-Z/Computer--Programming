#include <iostream>
#include <string>
using namespace std;

// Structure declaration
struct Person {
    string name;
    int age;
    string address;
};

int main() {

    // Structure variable declaration
    Person person1;

    // Initialize members
    person1.name = "Aneesa";
    person1.age = 20;
    person1.address = "Islamabad";

    // Display structure members
    cout << "Person Information:" << endl;
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Address: " << person1.address << endl;

    return 0;
}