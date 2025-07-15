#include <iostream>
#include <vector>
#include "Vehicle.h"

using namespace std;

class Car : public Vehicle
{
public:
    string carNumber;

    Car(string _carNumber)
    {
        carNumber = _carNumber;
    }

    string getType()
    {
        return "Car";
    }

    int calculateParkingFee()
    {
        return 5 * calculateParkingDurationInHours();
    }

    string vechicleNumber()
    {
        return carNumber;
    }
};