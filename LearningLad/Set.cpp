#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> st;
    st.insert(10);
    st.insert(102);
    st.insert(103);
    st.insert(103);
    st.insert(103);

    //if present, returns the iterator
    auto it = st.find(10);
    cout << *(it) << endl;

    auto i = st.find(12);
    cout << *(i) << endl;

    //can erase with iterator also
    st.erase(it);

    cout << st.count(103) << endl;
    // cout << "lower bound=" <<st.lower_bound() << endl;
    // cout << "upper bound=" << st.upper_bound() << endl;

    return 0;
}