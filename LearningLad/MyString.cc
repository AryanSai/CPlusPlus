#include <iostream>
using namespace std;

class String
{
    const int constant; // these cant be iniatialised without initialser list since constants
public:
    String() : res(nullptr), length(0), constant(10) {

               };

    // const for safety reasons, someone should not be able to modify this
    String(const char *ch) : constant(10)
    {
        length = strlen(ch);
        res = new char[length + 1];
        strcpy(res, ch);
    };

    // copy constructor; when calling for the first time
    // when we want to create a new object to copy something
    String(const String &s) : constant(10)
    {
        length = s.length;
        res = new char[length + 1];
        strcpy(res, s.res);
    };

    // copy assignment operator
    // when object is already created, then we can use this to modify the object
    String &operator=(const String &s)
    {
        // self assignment
        if (this != &s)
        {
            // there is an existing resource which needs to be deleted
            // to ensure that memory leak is not caused we have to delete
            char* temp=this->res;
            length=s.length;
            res = new char[length + 1];
            strcpy(res, s.res);
            delete[] temp;
        }
        return *this;
    };

    unsigned int size()
    {
        return length;
    };

    // only a friend fn can access a private memner
    friend ostream &operator<<(ostream &out, const String &str);
    friend istream &operator>>(istream &in, const String &str);

private:
    char *res;
    unsigned int length; // positive length only
};

ostream &operator<<(ostream &out, const String &str)
{
    out << str.res;
    return out; // for chaining
}

istream &operator>>(istream &in, const String &str)
{
    in >> str.res;
    return in; // for chaining
}

int main()
{
    String s;            // default constructor
    String s2 = "hello"; // parametrised constrcutor
    String s3 = s2;      // copy constructor
    s3 = s;              // copy assignment operator
    int length = s.size();
    cin >> s; // overloading cin and cout
    cout << s2;
}