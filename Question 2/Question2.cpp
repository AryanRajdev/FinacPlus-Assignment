// 2. Write a program that finds the most optimized set of 6 units to shop with for values
// fewer than 100. Example: Units used are 1, 2, 5, 10, 20, 50 1: 1 (1 unit used) 2: 2 (1
// unit used) 3: 1+2 (2 units used) 4: 2+2 (2 units used) … 98: 1+2+5+20+20+50 (6 units
// used) 99: 2+2+5+20+20+50 (6 units used) AVG of units = 3.4

#include <bits/stdc++.h>
using namespace std;

// Function to calculate average units used from 1 to limit-1

double averageUnitsUsed(const vector<int>& units, int limit) {
    int totalUnitsUsed = 0;

    for (int value = 1; value < limit; value++) {
        int remaining = value;
        int count = 0;

        for (int i = 0; i < units.size(); i++) {
            count += remaining / units[i];
            remaining %= units[i];
        }

        totalUnitsUsed += count;
    }

    return (double)totalUnitsUsed / (limit - 1);
}

int main() {
    vector<int> units = {50, 20, 10, 5, 2, 1};  
    int limit = 100; 

    double avg = averageUnitsUsed(units, limit);

    cout<<"ans : "<< avg<<endl;

    return 0;
}

// Time Complexity - O(limit * units)
// Space Complexity - O(1)