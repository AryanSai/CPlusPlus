#include <iostream>
using namespace std;

int sum()
{
    return 0;
}

int main()
{
    auto age = 10;
    cout << age << endl;

    // error: declaration of variable 'age' with deduced type 'auto' requires an initializer
    // auto age;
    // cout << age<< endl;

    auto summ = sum();
}