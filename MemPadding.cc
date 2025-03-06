#include <iostream>
using namespace std;

class Student
{
    int id;
    bool check2;
    bool check;
};

int main()
{
    struct student
    {
        int id;
        bool check2;
        bool check;
    };

    student s;
    cout << sizeof(s.id) << endl;
    cout << sizeof(s.check) << endl;
    cout << sizeof(s) << endl;

    Student st;
    cout << sizeof(st) << endl;
    
    return 0;
}