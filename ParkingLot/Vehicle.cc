#include <iostream>

using namespace std;

class Vehicle
{
private:
    string numberPlate;
    string vehicleType;

public:
    Vehicle(string _numberPlate, string _vehicleType) : numberPlate(_numberPlate),
                                                      vehicleType(_vehicleType)
    {
    }

    string getVechileNumberPlate(){
        return numberPlate;
    }

    string getVechileType(){
        return vehicleType;
    }

    virtual double calculateFee(int hoursParked);
};