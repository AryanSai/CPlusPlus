#include <iostream>
#include "Vehicle.cc"

using namespace std;

class BikeVehicle : public Vehicle
{
private:
    const static double HOURLY_RATE = 6.0;

public:
    BikeVehicle(string _numberPlate) : Vehicle(_numberPlate, "Bike")
    {
    }

    double calculateFee(int hoursParked) override
    {
        return hoursParked * HOURLY_RATE;
    }
};