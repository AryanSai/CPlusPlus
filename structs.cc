#include <iostream>
using namespace std;

int main(){
	struct{
		int data;
		string name;
	}student;

	student.data=2;
	student.name="aryan";

	cout<< student.data << " "<<student.name <<endl;

	//named structs
	struct myData{
		int rank;
		string name;
	};


	myData d;
	d.rank=10;
	d.name="sao";
	cout << d.name <<" " <<d.rank;

}
