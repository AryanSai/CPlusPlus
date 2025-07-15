#include <iostream>
#include "Vehicle.cc"

using namespace std;

class CarVehicle : public Vehicle
{
private:
    const static double HOURLY_RATE = 10.0;

public:
    CarVehicle(string _numberPlate) : Vehicle(_numberPlate, "Car")
    {
    }

    double calculateFee(int hoursParked) override
    {
        return hoursParked * HOURLY_RATE;
    }
};