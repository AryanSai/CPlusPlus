#include <iostream>
using namespace std;

class Person
{
    public:
        virtual void introduce(){
            cout << "hey from person" << endl;
        }
};

class Student:public Person
{
    public:
        void introduce(){
            cout << "hey from student" << endl;
        }
};

class Farmer:public Person
{

};

void whoisthis(Person &p){ //if we dont pass it as a pointer or a reference
// In this code, the function whoisthis takes a Person object by value, causing object slicing when you pass
//  a Farmer or Student object to it. Because of this, only the Person part of the derived object is passed,
//   and Person::introduce() is called instead of the overridden introduce() methods in Farmer or Student.
    p.introduce();
}

int main(){
    Farmer f;
    Student s;
    whoisthis(s); //overridden with virtual
    whoisthis(f); //not overridden
    // f.introduce();
    return 0;
}