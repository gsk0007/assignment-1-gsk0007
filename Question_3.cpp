// COMP 3000 Assignment 1 Question 2
#include <iostream>
using namespace std;

int main()
{
    // Initialize Constants
    const int GRAV_ACCEL = 32; // ft/s
    // Initialize variables used to calculate distance fallen
    int secondsFall;
    double distanceFall;

    // Output message asking for input and capture input
    cout << "Enter time in seconds. ";
    cin >> secondsFall;

    // Calculate distance with input
    distanceFall = .5*GRAV_ACCEL*(secondsFall*secondsFall);

    // Output result
    cout << "An object in freefall for " << secondsFall << " seconds will fall " << distanceFall << " feet." << endl;
    return 0;
};