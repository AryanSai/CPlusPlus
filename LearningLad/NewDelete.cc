#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int;
    *ptr = 12;

    delete ptr;

    int *arr = new int[12];
    arr[0] = 1;
    arr[1] = 2;

    cout << arr[0] << endl;
    cout << arr[1] << endl;

    cout << *(arr + 0) << endl;
    cout << *(arr + 1) << endl;

    delete arr;
    ptr = nullptr; // avoid dangling pointer reference
    arr = nullptr;
}