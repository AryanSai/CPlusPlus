#include <iostream>
using namespace std;

class Student
{
public:
    static int total;
    int trial;
    Student()
    {
        total++;
    }
    static void display()
    {
        // trial++; //a nonstatic member reference must be relative to a specific object
        cout << "Total: " << total << endl;
    }
};

int Student::total = 0;

int counter()
{
    static int count = 0;
    count++;
    return count;
}

int main()
{
    cout << counter() << endl;
    cout << counter() << endl;
    cout << counter() << endl;

    Student st, s2;
    Student::display();
}