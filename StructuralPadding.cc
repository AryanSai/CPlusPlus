#include <iostream>
using namespace std;

// #pragma pack(1) //disables padding

struct A
{
    int i;
    double d;
};

struct B
{
    int j;
    double d2;
    A aa; //compiler opens up A here
};

int main()
{
    B a;
    cout << sizeof(a) << endl;
    
    return 0;
}