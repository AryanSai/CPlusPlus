#include <iostream>
using namespace std;

int main()
{
    int *p = new int;
    // int x = 10;
    // p = &x;

    // cout << *p << endl;

    *p = 20;
    cout << *p << endl;

    delete p;
    p = nullptr;
    return 0;
}