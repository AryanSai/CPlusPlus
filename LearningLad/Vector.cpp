#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vector1 = {1, 2, 3, 4, 5};
    vector1.push_back(6);
    vector1.emplace_back(10);

    for (int i : vector1)
    {
        cout << i << "  ";
    }
    cout << endl;

    // size 5 with element 12
    vector<int> vector3(5, 12);

    for (int i : vector3)
    {
        cout << i << "  ";
    }
    cout << endl;

    // size 5
    vector<int> vector2(5);

    for (int i : vector2)
    {
        cout << i << "  ";
    }
    cout << endl;

    // copy one vector to another
    vector<int> v4(vector1);
    for (int i : v4)
    {
        cout << i << "  ";
    }
    cout << endl;

    // accessing an element
    cout << vector1[3] << endl;

    // iterator
    for (vector<int>::iterator i = vector1.begin(); i != vector1.end(); i++)
    {
        cout << vector1.back() << " ";
        cout << *(i) << endl;
    }

    // iterator
    for (auto i = vector1.begin(); i != vector1.end(); i++)
    {
        cout << *(i) << " ";
    }
    cout << endl;

    // for each loop
    for (auto it : vector1)
    {
        cout << it << " ";
    }
    cout << endl;

    vector1.erase(vector1.begin() + 1, vector1.begin() + 3); // end not included
    for (auto it : vector1)
    {
        cout << it << " ";
    }
    cout << endl;

    // INSERTING
    vector1.insert(vector1.begin() + 2, 123);
    vector1.insert(vector1.begin(), 2, 13323); // insert twice
    for (auto it : vector1)
    {
        cout << it << " ";
    }
    cout << endl;

    // copy elements of one to another
    vector<int> copy(2, 100);
    copy.insert(copy.begin(), vector1.begin(), vector1.end());
    for (auto it : copy)
    {
        cout << it << " ";
    }
    cout << endl;

    //remove the last element
    copy.pop_back();
    for (auto it : copy)
    {
        cout << it << " ";
    }
    cout << endl;
    
    return 0;
}