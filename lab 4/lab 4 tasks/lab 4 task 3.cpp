#include <iostream>
using namespace std;

int main() {
    int choice;
    double value, result;

    // Display the menu
    cout << "Conversion Menu:\n";
    cout << "1 → Convert Kilometers to Meters\n";
    cout << "2 → Convert Meters to Centimeters\n";
    cout << "3 → Convert Kilograms to Grams\n";
    cout << "4 → Convert Celsius to Fahrenheit\n";

    // Take user choice
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter kilometers: ";
            cin >> value;
            result = value * 1000;  // 1 km = 1000 m
            cout << value << " kilometers = " << result << " meters";
            break;

        case 2:
            cout << "Enter meters: ";
            cin >> value;
            result = value * 100;  // 1 m = 100 cm
            cout << value << " meters = " << result << " centimeters";
            break;

        case 3:
            cout << "Enter kilograms: ";
            cin >> value;
            result = value * 1000;  // 1 kg = 1000 g
            cout << value << " kilograms = " << result << " grams";
            break;

        case 4:
            cout << "Enter temperature in Celsius: ";
            cin >> value;
            result = (value * 9/5) + 32;  // Celsius to Fahrenheit
            cout << value << "°C = " << result << "°F";
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}