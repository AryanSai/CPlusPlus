// this is an abstract class
#include <iostream>
#include <vector>

using namespace std;

#pragma once

class Vehicle
{
private:
    int rowNum;
    int spotNum;
    // parkingStartTime
public:
    Vehicle()
    {
        // cant be zero, since it indicates [0][0]
        rowNum = -1;
        spotNum = -1;
    }

    void occupySpot(int r, int c)
    {
        rowNum = r;
        spotNum = c;
    }

    void vacateSpot()
    {
        rowNum = -1;
        spotNum = -1;
    }

    int calculateParkingDurationInHours()
    {
        return 1;
    }

    // these are dependent on the derived class
    virtual string vechicleNumber() = 0;
    virtual int calculateParkingFee() = 0;
    virtual string getType() = 0;
};