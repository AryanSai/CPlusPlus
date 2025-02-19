#include <iostream>

using namespace std;

//get and set employee details
class Employee
{
    int id;
    string name, address;

public:
    Employee(int _id, string _name, string _address)
    {
        id = _id;
        name = _name;
        address = _address;
    }

    int getId()
    {
        return id;
    }

    string getName()
    {
        return name;
    }

    string getAddress()
    {
        return address;
    }

    void setId(int id)
    {
        id = id;
    }

    void setName(string name)
    {
        name = name;
    }

    void setAddress(string address)
    {
        address = address;
    }
};