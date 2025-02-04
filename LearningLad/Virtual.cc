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

//if this class did not override the introduce function, then it would call the student introduce function only
class GraduateStudent : public Student {
public:
    void introduce() {
        cout << "Hello from Graduate Student" << endl;
    }
};

void whoisthis(Person &p){
    p.introduce();
}

int main() {
    GraduateStudent g;
    g.introduce();  
    return 0;
}
