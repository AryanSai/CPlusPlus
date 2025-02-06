#include <iostream>
using namespace std;

class Inline
{
    void printer(int a){}; // by default they are inline
};

inline void print(int a)
{
    cout << "Print: " << a << endl;
}

int main()
{
    print(10);
}