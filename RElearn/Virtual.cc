#include <iostream>
using namespace std;

class Base
{
public:
    void trial()
    {
        cout << "aryan" << endl;
    };
};

class child : public Base
{
public:
    void trial()
    {
        cout << "sai" << endl;
    };
};

int main()
{
    Base *d = new child();
    d->trial();
}