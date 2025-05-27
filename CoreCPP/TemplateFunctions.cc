#include <iostream>
using namespace std;

template <typename T> // T is a variable name
// template <class T> //same

void print(T val)
{
    cout << val << endl;
}

int main()
{
    print(1);
    print("sairam");
    print(1.11);

    //can do this also
    print<int>(1);
    print<string>("sairam");
    print<float>(1.11);
}