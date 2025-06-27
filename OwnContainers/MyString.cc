#include <iostream>
#include <stdexcept>

using namespace std;

class MyString
{
    char *data;

public:
    MyString() : data(new char[1])
    {
        data[0] = '\0';
    }
};