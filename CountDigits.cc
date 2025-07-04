// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int digits(int num)
{
    int count = 0;
    while (num > 0)
    {
        count++;
        num /= 10;
    }
    return count;
}

int main()
{
    cout << digits(10);
    return 0;
}