#include <iostream>
#include <string>

using namespace std;

class Animal{
    public:
        void noise(){
            cout << "makes noise" << endl;
        }
};

class Dog : public Animal{
    public:
        void noise(){
            Animal::noise();
            cout << "barks!!" << endl;
        }
};

int main(){
    Dog d;
    d.noise();
    d.Animal::noise();  //to call an overridden method
    return 0;
}