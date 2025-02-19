// g++ -std=c++17 main.cpp -o main && ./main

#include <iostream>

using namespace std;

struct Person
{
    int age;
    string address;
    long long mobileNumber;
};

int main()
{
    Person p{24, "jgl", 9030597199};

    auto [age, address, mob] = p;

    cout << age << endl;

    pair<int, string> p1 = {1, "Aryan"};
    auto [id, name] = p1; 

    cout << "ID: " << id << ", Name: " << name << endl;
}