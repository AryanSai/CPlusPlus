#include <iostream>
using namespace std;
int main()
{
    // int val = 10;
    // int *p = &val;

    // cout << "val = " << val << endl;
    // cout << "address = " << p << endl;
    // cout << "val = " << *p << endl;

    // int **pp = &p;
    // cout << "address of pointer = " << pp << endl;
    // cout << "value of pointer to pointer= " << *pp << endl;
    // cout << "value of pointer to pointer= " << **pp << endl;

    // int &ref = val;
    // cout << ref << endl;

    // int arr[5] = {1, 2, 3, 4, 5};
    // int *ptr = arr;
    // // cout << arr << endl;
    // // cout << *arr << endl;
    // cout << *arr + 1 << endl;
    // cout << *(arr + 1) << endl;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << *ptr + i << endl;
    // }

    int nums[2][3] = {{16, 18, 20}, {25, 26, 27}};
    cout << nums << endl;
    cout << **nums << endl;

    return 0;
}