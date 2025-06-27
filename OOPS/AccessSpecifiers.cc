#include <iostream>
using namespace std;

class Student
{
protected:
    int secret = 1;

private:
    int marks = 10;

public:
    string name = "sai";

    void getMarks()
    {
        cout << marks << endl;
    }
};

class Child : Student
{
public:
    void tellsecret()
    {
        cout << secret << endl;
    }
};

int main()
{
    Student s;
    // cout << s.marks << endl;
    // cout
    cout << s.name << endl;


    // Child c;
    // c.tellsecret();
}
