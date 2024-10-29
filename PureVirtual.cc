#include<iostream>
using namespace std;

class Person{
    public:
        virtual void introduce()=0; //declaring it as a pure function
};

void Person::introduce(){
    cout << "Hello from person!"<< endl;
}

class Student:public Person{
    public:
        void introduce() override{
            Person::introduce();
            cout << "Hello"<< endl;
        }
};

int main(){
    Student s;
    s.introduce();
}