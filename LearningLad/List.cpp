#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> ls;
    ls.emplace_back(11);
    ls.push_front(10);
    ls.emplace_back(14);
    ls.emplace_front(110);
    cout << "front: " << ls.front() << endl;
    for (auto l : ls)
    {
        cout << l << " ";
    }
    cout << endl;
    return 0;
}