#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int age = 10;
	cout << age << endl;
	cout << &age << endl;
	
	int *ageptr;
	ageptr = &age;
	cout << ageptr << endl;

	int *newptr = &age;
	cout << *newptr << endl;

	int value = 100;
	int *ptr = &value; // a pointer of integer type which stores the 'value' variable
	cout << value << "\n";
	cout << &value << "\n"; //&value gives the address of the variable 'value'
	cout << ptr << "\n";	//*ptr gives the address of the variable 'value'
	cout << *ptr << "\n";	// dereference to the value

	*ptr = 120;
	cout << *ptr << "\n"; // modify the value
	cout << value << "\n";
	return 0;
}
