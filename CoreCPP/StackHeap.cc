#include <iostream>
using namespace std;

struct vec
{
    float x, y, z;

    vec() : x(0), y(0), z(0)
    {
    }
};

int main()
{
    int val = 5; // allocation in the stack
    int arr[3];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    vec v1;

    int *p = new int(5); // allocation in the heap
    int *arrPointer = new int[3];
    vec *v2 = new vec();
}