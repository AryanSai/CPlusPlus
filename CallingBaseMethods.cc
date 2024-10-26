#include<iostream>
using namespace std;

class Person{
    public:
        void introduce(){
            cout << "person introduction" << endl;
        }
};

class Student: public Person{
    public:
        void introduce(){
            cout << "student introduction" << endl;
        }
};

void outIntro(Person p){
    p.introduce();
}

int main(){
    Student s;
    s.introduce();
    outIntro(s);
}