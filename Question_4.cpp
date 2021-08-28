#include <iostream>
using namespace std;

int main(){
    // Initialize constants used for calculations
    const double WATER_DENS = 62.4; // lb/ft^3

    // Initialize variables used for i/o and calculations
    double sphereWeight; // Weight of sphere in pounds
    double sphereRadius; // Radius of sphere in feet
    double sphereVolume; // Volume of sphere in ft^3
    double bouyForce; // Bouyant force of sphere

    // Prompt user to input radius and weight and recieve input
    cout << "Input weight of the sphere in pounds.";
    cin >> sphereWeight;
    cout << "Input radius of sphere in feet.";
    cin >> sphereRadius;

    // Perform calculations to see if the sphere will sink or float
    sphereVolume = (4.0/3.0)*3.14*(sphereRadius*sphereRadius*sphereRadius);
    bouyForce = sphereVolume*WATER_DENS;

    // Check to see if the sphere will float or sink and output answer
    if(bouyForce >= sphereWeight){
        cout << "The sphere will float in water.\n";
    } else {
        cout << "The sphere will sink in water.\n";
    };

    return 0;
};