#include <iostream>
#include "ToyFactory.cc"

using namespace std;

int main()
{
    int type;
    while (1)
    {
        cout << "Enter the type of the toy: ";
        cin >> type;
        if (!type)
            break;
        Toy *toy = ToyFactory::createToy(type);
        if (toy)
        {
            toy->showToy();
        }
    }
    cout << "Exited!" << endl;
}