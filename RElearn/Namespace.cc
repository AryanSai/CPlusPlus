#include <iostream>

using namespace std;

namespace n1
{
    int x1 = 100;
};

namespace n2
{
    int x1 = 200;
};

int main()
{
    cout << n1 :: x1 << endl;
    cout << n2 :: x1 << endl;
}
