#include <iostream>
#include "Flight.h"
#include <cstring>
using namespace std;

    Flight::Flight(int no, const char pOrigin[], const char pDestination[], int pDepTime) {
       flightNo = no;
       strcpy (origin, pOrigin);
       strcpy (destination, pDestination);
       depTime = pDepTime;
    };
    
    void Flight::DisplayFlightDetails() {
       cout << "Flight No : " << flightNo << endl;
       cout << "Origin : " << origin << endl;
       cout << "Destination : " << destination << endl;
       cout << "Departure Time : " << depTime << endl;
    };