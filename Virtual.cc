#include <iostream>
using namespace std;

class Person {
public:
    virtual void introduce() {
        cout << "Hello from Person" << endl;
    }
};

class Student : public Person {
public:
    void introduce() {
        cout << "Hello from Student" << endl;
    }
};

class GraduateStudent : public Student {
public:
    void introduce() {
        cout << "Hello from Graduate Student" << endl;
    }
};

int main() {
    Person* personPtr = new GraduateStudent();
    personPtr->introduce();  // Calls GraduateStudent::introduce() due to virtual inheritance

    delete personPtr;
    return 0;
}
