#include <iostream>
using namespace std;

int main()
{   
    int x = 10;
    cout << "before: " << x << endl;
    auto increment = [](int x)
    { x++; };
    increment(10);
    cout << "after: " << x << endl;

    //pass by reference, hence values changes
    int y = 10;
    cout << "before: " << y << endl;
    auto increment2 = [&y]()
    { y++; };
    increment2();
    cout << "after: " << y << endl;

    //pass all by values
    int a = 10, b = 20;
    auto add = [=](int a, int b) -> int
    { return a + b; };
    cout << add(a, b) << endl;

    //pass all by reference
    int aa = 10, bb = 20;
    auto add2 = [&aa](int b){ aa = aa + b; };
    add2(bb);
    cout << aa << endl;
}