#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, int> mp;
    // stores the keys in sorted order
    // keys are unique
    mp[0] = 12;
    mp[12] = 122;
    mp.insert({1, 2});
    for (auto it : mp)
    {
        cout << it.first << "=" << it.second << endl;
    }
    cout << mp[12];
    cout << mp[13];
    return 0;
}