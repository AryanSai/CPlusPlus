#include <iostream>
using namespace std;

class Base
{
public:
    virtual ~Base() {}
};

class Derived : public Base
{
};

int main()
{
    int *p = new int;
    *p = 20;
    cout << *p << endl;
    const type_info &t = typeid(p);
    cout << t.name() << endl;
    cout << typeid(p).name() << endl;

    int a = 10;
    double b = 5.5;
    Base *ptr = new Derived;

    cout << "Type of a: " << typeid(a).name() << endl;
    cout << "Type of b: " << typeid(b).name() << endl;
    cout << "Type of ptr: " << typeid(*ptr).name() << endl;

    delete ptr;
    return 0;
    return 0;
}