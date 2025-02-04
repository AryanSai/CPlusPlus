#include <iostream>
using namespace std;

struct Student {
    int roll;
    char name[50];
};

int main() {
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;

    int a;
    cout << "Size of variable a: " << sizeof(a) << " bytes" << endl;
    int arr[10];
    cout << "Size of arr: " << sizeof(arr) << " bytes" << endl; // Total size of the array
    cout << "Size of one element: " << sizeof(arr[0]) << " bytes" << endl; // Size of one element
    cout << "Number of elements in arr: " << sizeof(arr) / sizeof(arr[0]) << endl; // Number of elements

    cout << "Size of Student struct: " << sizeof(Student) << " bytes" << endl;

    int *ptr;
    cout << "Size of pointer: " << sizeof(ptr) << " bytes" << endl; // Size of the pointer, not the pointed data

    return 0;
}