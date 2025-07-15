#include <iostream>
#include "Vehicle.cc"
#include "CarVehicle.cc"
#include "BikeVehicle.cc"
#include "ParkingSpot.cc"

using namespace std;

class Ticket
{
private:
    ParkingSpot parkingSpot;
    Vehicle vehicle;
    // LocalDateTime startTime;
public:
    Ticket(ParkingSpot parkingSpot, Vehicle vehicle)
        : parkingSpot(parkingSpot), vehicle(vehicle)
    {
        // startTime
    }
};