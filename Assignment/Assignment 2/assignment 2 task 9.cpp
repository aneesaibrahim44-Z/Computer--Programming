#include <iostream>
using namespace std;

const int R = 4; // regions
const int D = 7; // days

// Function: total consumption per region
void regionTotal(float grid[R][D]) {
    cout << "\nTotal consumption per region:\n";

    for(int i = 0; i < R; i++) {
        float sum = 0;
        for(int j = 0; j < D; j++) {
            sum += grid[i][j];
        }
        cout << "Region " << i + 1 << ": " << sum << " MW" << endl;
    }
}

// Function: day with highest total demand
void highestDay(float grid[R][D]) {
    float maxDaySum = 0;
    int maxDay = 0;

    for(int j = 0; j < D; j++) {
        float daySum = 0;

        for(int i = 0; i < R; i++) {
            daySum += grid[i][j];
        }

        if(daySum > maxDaySum) {
            maxDaySum = daySum;
            maxDay = j;
        }
    }

    cout << "\nDay with highest demand: Day " << maxDay + 1
         << " (" << maxDaySum << " MW)" << endl;
}

// Function: overall average consumption
void overallAverage(float grid[R][D]) {
    float sum = 0;
    int totalElements = R * D;

    for(int i = 0; i < R; i++) {
        for(int j = 0; j < D; j++) {
            sum += grid[i][j];
        }
    }

    cout << "\nOverall average consumption: "
         << (sum / totalElements) << " MW" << endl;
}

int main() {
    float grid[R][D];

    // Input data
    cout << "Enter power consumption (MW) for 4 regions over 7 days:\n";

    for(int i = 0; i < R; i++) {
        cout << "\nRegion " << i + 1 << ":\n";
        for(int j = 0; j < D; j++) {
            cin >> grid[i][j];
        }
    }

    // Function calls
    regionTotal(grid);
    highestDay(grid);
    overallAverage(grid);

    return 0;
}