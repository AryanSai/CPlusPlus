#include <iostream>
#include <vector>
#include <execution>

using namespace std;

int main()
{
    vector<int> vec = {3, 2, 6, 1, 6, 9, 3, 7};
    sort(execution::par, vec.begin(), vec.end());

    for (auto &itr : vec)
    {
        cout << itr << endl;
    }
}