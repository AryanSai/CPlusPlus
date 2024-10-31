#include <iostream>
using namespace std;

class Marks
{
    int intmark;
    int extmark;

public:
    Marks()
    {
        intmark = 0;
        extmark = 0;
    }
    Marks(int im, int em)
    {
        intmark = im;
        extmark = em;
    }
    void display()
    {
        cout << intmark << " " << extmark << endl;
    }
    Marks operator+(Marks m)
    {
        Marks temp;
        temp.intmark = intmark + m.intmark;
        temp.extmark = extmark + m.extmark;
        return temp;
    }
    void operator+=(Marks bonus)
    {
        this->intmark += bonus.intmark;
        this->extmark += bonus.extmark;
    }
    void operator+=(int bonus)
    {
        this->intmark += bonus;
        this->extmark += bonus;
    }
    void operator++()
    {
        this->intmark += 1;
        this->extmark += 1;
    }
    void operator++(int) //post increment operator
    {
        this->intmark += 1;
        this->extmark += 1;
    }
    Marks operator-(Marks m);

    friend void operator-=(Marks &m, int negative); // since a friend, 'this' is not available

    friend void operator--(Marks &m);
};

void operator-=(Marks &m, int negative)
{
    m.intmark -= negative;
    m.extmark -= negative;
}

void operator--(Marks &m)
{
    m.intmark -= 1;
    m.extmark -= 1;
}

Marks Marks::operator-(Marks m)
{
    Marks temp;
    temp.intmark = intmark - m.intmark;
    temp.extmark = extmark - m.extmark;
    return temp;
}

int main()
{
    Marks m1(10, 20), m2(30, 40);
    Marks m3 = m1 + m2;
    m3.display(); // the first object 'm1' is automatically passed
    Marks m4 = m1 - m2;
    m4.display(); // since the operator is a member function, we need not pass both the objects

    // add an int
    m1 += 10;
    m1.display();

    // add an object
    m1 += m3;
    m1.display();

    // for friend functions we need to pass both the operators
    m4 -= 10;
    m4.display();

    //incremement and decrement operators
    ++m4;
    m4.display();

    --m4;
    m4.display();

    m1++;
    m1.display();
    return 0;
}