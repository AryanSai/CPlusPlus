#include <iostream>
using namespace std;
int main()
{
    auto x = 10;
    cout << x << endl;

    int a = 10;
    int b = a;
    cout << b << endl;
    a = 11;
    cout << b << endl;
}