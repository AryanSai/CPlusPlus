#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    Animal()
    {
        cout << "Animal Constructor" << endl;
    }
    void walk()
    {
        cout << "animal walks" << endl;
    }
};

class Lion : virtual public Animal
{
public:
    Lion()
    {
        cout << "Lion Constructor" << endl;
    }
};

class Tiger : virtual public Animal
{
public:
    Tiger()
    {
        cout << "Tiger Constructor" << endl;
    }
};

class Liger : public Tiger, public Lion
{
public:
    Liger()
    {
        cout << "Liger Constructor" << endl;
    }
};
int main()
{
    Liger l;
    l.walk();
}