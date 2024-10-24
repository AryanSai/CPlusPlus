#include<iostream>
#include<string>

using namespace std;

//base class
class Person{
    protected:
        string knownSecret;
    public:
        string name;
        int age;
        void setName(string iname){
            name=iname;
        }
        void setAge(int iage){
            age=iage;
        }
        void setSecret(string isecret){
            knownSecret=isecret;
        }
};

//sub class
class Student : public Person{
    public:
        int id;
        void setId(int iid){
            id=iid;
        }
        
        void introduce(){
            cout << "Hi, I am " << name << " with id " << id << endl;
            cout << "Since you are a friend, my secret is " << knownSecret << endl;
        }
};


int main(){
    Student s;
    // s.knownSecret; cant do this since it is protected
    s.setName("Aryan");
    s.setAge(24);
    s.setSecret("APRIL FOOl! ");
    s.introduce();
}