#include <iostream>
#include "Toy.cc"
using namespace std;

class Doll : public Toy
{
public:
    int price;
    Doll()
    {
        price = 120;
    }

    void prepareToyParts() override
    {
        cout << "Doll Parts Prepared!" << endl;
    }

    void assembleToyParts() override
    {
        cout << "Doll Parts assembled!" << endl;
    }

    void packToy() override
    {
        cout << "Doll packing done!" << endl;
    }

    void showToy() override
    {
        cout << "The price of the doll is " << this->price << endl;
    }
};
