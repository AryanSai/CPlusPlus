#include <iostream>
using namespace std;
#include <unordered_map>

int main()
{
    unordered_map<int, int> mp;
    mp.insert({1, 2});

    for (auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }
}