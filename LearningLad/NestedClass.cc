#include <iostream>
using namespace std;

class Person
{
public:
    string name;

    class Address
    {
    public:
        string city;
        string country;
    };

    Address addr;
    void giveAddress()
    {
        cout << addr.city << " " << addr.country << endl;
    }
};

int main()
{
    Person p;
    p.name = "aryan";
    p.addr.city = "jgl";
    p.addr.country = "india";
    p.giveAddress();

    Person::Address ad;

    return 0;
}