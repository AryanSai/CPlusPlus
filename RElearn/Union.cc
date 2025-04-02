#include <iostream>
using namespace std;

union student
{
    char name;
    int id;
    long int id2;
};

int main()
{
    student s;
    cout << sizeof(s) << endl;
}