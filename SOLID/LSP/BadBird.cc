#include <iostream>
using namespace std;

class Bird
{
public:
    void fly()
    {
        cout << "Bird is flying." << endl;
    }
};

class Ostrich : public Bird
{
public:
    void fly()
    {
        throw runtime_error("Ostrich cannot fly.");
    }
};