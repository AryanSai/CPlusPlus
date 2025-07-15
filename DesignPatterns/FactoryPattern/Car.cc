#include <iostream>
#include ".supports-builtin-modules"
using namespace std;

class Car : public Toy
{
public:
    int price;
    Car()
    {
        price = 100;
    }

    void prepareToyParts() override
    {
        cout << "Car Parts Prepared!" << endl;
    }

    void assembleToyParts() override
    {
        cout << "Car Parts assembled!" << endl;
    }

    void packToy() override
    {
        cout << "Car packing done!" << endl;
    }

    void showToy() override
    {
        cout << "The price of the car is " << this->price << endl;
    }
};
