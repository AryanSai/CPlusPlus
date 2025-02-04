#include <iostream>
#include <string>

using namespace std;

// base class
class Father {
public:
    int height;
    string name;

    Father(string iname) {
        name = iname;
    }

    void askFather() {
        cout << "Am your father and ask me anything!" << endl;
    }
};

class Mother {
public:
    string skincolor;

    void askMother() {
        cout << "Am your mother and ask me anything!" << endl;
    }
};

class Child : public Father, public Mother {
public:
    Child(string childName, string fatherName) : Father(fatherName) {
        name = childName; 
    }

    void askParents() {
        cout << "Asking parents!!" << endl;
    }

    void setColorHeight(string color, int iheight) {
        skincolor = color;
        height = iheight;
    }

    void display() {
        cout << "Height is " << height << " and color is " << skincolor << endl;
    }
};

int main() {
    Child c("Aryan", "Anand"); // 
    c.setColorHeight("white", 5);
    c.askParents();
    c.askFather();
    c.askMother();
    c.display();

    return 0;
}