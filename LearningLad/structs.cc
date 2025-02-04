#include <iostream>
#include <string>
using namespace std;

struct Address
{
	int housenum;
	string street;
};

struct Student
{
	int roll;
	string name;
	Address addr;
} global1;

struct StudentWithAddrPointer
{
	int roll;
	string name;
	Address *addr;
};

// overloading
void display(Student s)
{
	cout << s.name << " " << s.roll << endl;
}

void display(Student *s)
{
	cout << s->name << " " << s->roll << endl;
}

void change(Student s)
{
	s.roll = 0;
	s.name = "cant change"; // since not by reference
}

void change(Student *s)
{
	s->roll = 0;
	s->name = "can change"; // since by reference
}

int main()
{
	global1 = {1, "aryan"};
	cout << global1.name << " " << global1.roll << endl;

	Student local;
	local.roll = 10;
	local.name = "sai";
	cout << local.name << " " << local.roll << endl;

	// for pointers
	Student s = {99, "swami"};
	Student *sp = &s;
	// can do the below also
	//  sp->roll = 99;
	//  sp->name = "swami";
	cout << sp->name << " " << sp->roll << endl;
	cout << s.name << " " << s.roll << endl;

	cout << "using functions" << endl;
	display(s);
	cout << "call by object, cant change" << endl;
	change(s);
	display(&s);
	display(s);

	cout << "call by pointer" << endl;
	change(&s);
	display(s);

	s.addr.housenum = 120;
	s.addr.street = "sai nagar";
	cout << s.addr.housenum << " " << s.addr.street << endl;

	cout << "using pointers" << endl;
	sp->addr.housenum = 120;
	sp->addr.street = "sai nagar";
	cout << sp->addr.housenum << " " << sp->addr.street << endl;

	cout << "using address pointers" << endl;
	StudentWithAddrPointer ptr = {1, "aryansai"};
	Address adr = {45, "chy nagar"};
	ptr.addr = &adr;
	cout << ptr.addr->housenum << " " << ptr.addr->street << endl;

	cout << "Size of student: " << sizeof(ptr) << endl;
}
