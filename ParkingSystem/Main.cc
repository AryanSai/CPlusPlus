#include <iostream>
#include <vector>
#include "Parking.h"
#include "Car.h"

using namespace std;

int main()
{
    Parking p;
    p.create(3, 2);

    Car c1("1234"), c2("3456");
    p.park(&c1);
    p.printParkingGrid();

    p.park(&c2, 0, 0);
    p.printParkingGrid();

    p.leave(&c1);
    p.printParkingGrid();
    return 0;
}