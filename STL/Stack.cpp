#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;
    st.push(10);
    st.emplace(12);
    cout << st.top() << endl;

    stack<int> st2;
    st2.swap(st);
    cout << st2.top() << endl;

    return 0;
}