#include <iostream>
using namespace std;

class Bird
{
};

class FlyingBird
{
public:
    virtual void fly() = 0;
};

class Sparrow : public FlyingBird
{
    void fly() override
    {
        cout << "Sparrow is flying." << endl;
    }
};

class Ostrich : public Bird
{
public:
    void run()
    {
        cout << "Ostrich is running." << endl;
    }
};