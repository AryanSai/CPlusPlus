#include <iostream>
using namespace std;

template <typename T, int N>

class Array
{
private:
    T array[N];

public:
    int getSize() const
    {
        return N;
    }
};

int main()
{
    Array<int, 5> arr;
    cout << arr.getSize() << endl;
}