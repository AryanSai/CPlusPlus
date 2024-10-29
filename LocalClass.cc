#include <iostream>
using namespace std;

void studentList();

int main(){
    studentList();
    // Student s; //identifier "Student" is undefined
    return 0;
}

void studentList(){
    class Student{
        public:
            string name;
            int age;

            void display(){
                cout << name << endl;
            }
    };

    Student s;
    s.name="sai";
    s.age=24;
    s.display();
}