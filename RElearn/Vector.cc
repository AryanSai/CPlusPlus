#include <iostream>
using namespace std;

void printV(const vector<int> &vec)
{
    for (int i : vec)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v1(5, 0);
    vector<int> v2 = {1, 2, 3, 4};
    vector<int> v3;

    printV(v1);
    printV(v2);
    printV(v3);

    // cout << v2[10] << endl;    // if index is invalid, gives garbage
    // cout << v2.at(10) << endl; // if invalis, out of bounds error

    cout << v2.max_size() << endl;


    return 0;
}