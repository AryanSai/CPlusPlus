#include <iostream>
// #include <bitset>
using namespace std;

int main()
{
    bitset<32> a(5); //It represents a fixed-size sequence of 32 bits (0s and 1s).
    cout << a << endl;

    int num = 6;
    bitset<4> numBit(num);
    cout << numBit << endl;
    
}