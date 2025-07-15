#include <iostream>
#include "Vehicle.cc"
#include "CarVehicle.cc"
#include "BikeVehicle.cc"

using namespace std;

class VehicleFactory
{
public:
    Vehicle creatVehicle(string numberPlate, string vehicleType)
    {
        if (vehicleType == "Car")
            return CarVehicle(numberPlate);
        else
            return BikeVehicle(numberPlate);
    }
};