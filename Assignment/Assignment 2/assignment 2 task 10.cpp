#include <iostream>
using namespace std;

const int STUDENTS = 5;
const int DAYS = 7;

// Function: total attendance of each student
void studentTotal(int att[STUDENTS][DAYS]) {
    cout << "\nTotal attendance of each student:\n";

    for(int i = 0; i < STUDENTS; i++) {
        int sum = 0;

        for(int j = 0; j < DAYS; j++) {
            sum += att[i][j];
        }

        cout << "Student " << i + 1 << ": " << sum << " days present\n";
    }
}

// Function: find student with highest attendance
void highestAttendance(int att[STUDENTS][DAYS]) {
    int maxIndex = 0, maxCount = 0;

    for(int i = 0; i < STUDENTS; i++) {
        int sum = 0;

        for(int j = 0; j < DAYS; j++) {
            sum += att[i][j];
        }

        if(sum > maxCount) {
            maxCount = sum;
            maxIndex = i;
        }
    }

    cout << "\nStudent with highest attendance: Student "
         << maxIndex + 1 << " (" << maxCount << " days present)\n";
}

// Function: overall class attendance percentage
void classPercentage(int att[STUDENTS][DAYS]) {
    int totalPresent = 0;
    int totalClasses = STUDENTS * DAYS;

    for(int i = 0; i < STUDENTS; i++) {
        for(int j = 0; j < DAYS; j++) {
            totalPresent += att[i][j];
        }
    }

    float percentage = (totalPresent * 100.0) / totalClasses;

    cout << "\nOverall class attendance: "
         << percentage << "%\n";
}

int main() {
    int attendance[STUDENTS][DAYS];

    // Input attendance
    cout << "Enter attendance (1 = present, 0 = absent)\n";

    for(int i = 0; i < STUDENTS; i++) {
        cout << "\nStudent " << i + 1 << ":\n";

        for(int j = 0; j < DAYS; j++) {
            cin >> attendance[i][j];
        }
    }

    // Function calls
    studentTotal(attendance);
    highestAttendance(attendance);
    classPercentage(attendance);

    return 0;
}