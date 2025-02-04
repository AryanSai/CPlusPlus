#include <iostream>
#include <exception>
#include <string>
using namespace std;

class OverSpeed : public exception
{
    int speed;

public:
    string what()
    {
        return "check your car speed";
    }
    void getSpeed()
    {
        cout << "Speed = " << speed << endl;
    }
    void setSpeed(int speed)
    {
        this->speed = speed;
    }
};

class Car
{
    int speed;

public:
    Car()
    {
        speed = 0;
    }
    void accelerate()
    {
        for (;;)
        {
            speed += 10;
            cout << "Speed is " << speed << endl;
            if (speed >= 250)
            {
                OverSpeed s;
                s.setSpeed(speed);
                throw s;
            }
        }
    }
};

int main()
{
    Car c;
    try
    {
        c.accelerate();
    }
    catch (OverSpeed s)
    {
        cout << s.what() << endl;
        s.getSpeed();
    }
    return 0;
}