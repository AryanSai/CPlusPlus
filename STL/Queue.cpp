#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;
    q.push(12);
    q.push(13);
    q.push(14);
    cout << q.front() << endl;
    q.front() += 5;
    cout << q.front() << endl;

    return 0;
}