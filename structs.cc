#include <iostream>
using namespace std;

struct student{
	int roll;
	string name;
}global1,global2;

int main(){
	student local2 ={1,"aryan"};
	//dot operator
	student local;
	local.roll=10;
	local.name="sao";
	cout << local.name <<" " << local.roll<<endl;
	cout << local2.name <<" " << local2.roll<<endl;
}
