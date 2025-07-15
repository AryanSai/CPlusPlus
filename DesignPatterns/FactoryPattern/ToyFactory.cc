#include <iostream>
#include "Toy.cc"
#include "Car.cc"
#include "Doll.cc"

using namespace std;

class ToyFactory
{
public:
    static Toy *createToy(int type)
    {
        Toy *toy = nullptr;
        switch (type)
        {
        case 1:
            toy = new Car();
            break;
        case 2:
            toy = new Doll();
            break;
        default:
            break;
        }
        toy->prepareToyParts();
        toy->assembleToyParts();
        toy->packToy();
        return toy;
    }
};