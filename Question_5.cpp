#include <iostream>
using namespace std;

int main(){
    // Initialize variables used for calculations
    int tempF;
    int tempC = 100;
    
    // Calculate temperature in farenheight and check for equality
    do {
        tempF = 32 + ((9.0/5.0)*(--tempC));
    } 
    while (tempF != tempC);

    cout << "The temperature in Celcius: " << tempC << endl;
    cout << "The temperature in Farenheight: " << tempF << endl;
    return 0;
};