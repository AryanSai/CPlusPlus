#include <iostream>

using namespace std;

class NonVirtual
{
    int a, b, c; // Only 4 bytes (assuming int is 4 bytes)
};

class WithVirtual
{
    int a, b, c;
    virtual void func() {} // Adding a virtual function
};

int main()
{
    cout << "Size of NonVirtual class: " << sizeof(NonVirtual) << " bytes" << endl;
    cout << "Size of WithVirtual class: " << sizeof(WithVirtual) << " bytes" << endl;
    return 0;
}
