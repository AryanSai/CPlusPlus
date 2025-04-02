#include <iostream>
#include <vector>
using namespace std;

void tryy(vector<int> &vec)
{
    vec[1] = 20;
}

int main()
{
    vector<vector<int>> matrix(3, vector<int>(2));
    cout << matrix.size() << endl;
    cout << matrix[0].size() << endl;

    vector<int> vec(3);
    cout << vec[1] << endl;
    vec[1] = 10;
    cout << vec[1] << endl;
    vec.at(1) = 11;
    cout << vec[1] << endl;
    tryy(vec);
    cout << vec[1] << endl;

    cout << "Size before push back at end:" << endl;
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;

    cout << "Size after push back at end:" << endl;
    vec.push_back(11);
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;

    vector<int> vec2;

    cout << "Initial size: " << vec2.size() << endl;
    cout << "Initial capacity: " << vec2.capacity() << endl;
    cout << "Max size: " << vec2.max_size() << endl;

    vec2.reserve(10);
    cout << "After reserve(10): " << vec2.capacity() << endl;

    vec2.push_back(1);
    vec2.push_back(2);
    cout << "Size after push_back: " << vec2.size() << endl;
    cout << "Capacity after push_back: " << vec2.capacity() << endl;
}