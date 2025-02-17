#include <iostream>

using namespace std;

int main()
{
    int x = 100;
    int &ref = x, *p = &x;

    cout << x << endl;
    cout << ref << endl;
    cout << *p << endl;

    return 0;
}