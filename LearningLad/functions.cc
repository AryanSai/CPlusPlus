#include <iostream>
#include <vector>

using namespace std;

//function prototyping
int add(int,int);

//default parameters
int add2(int, int, int = 10);

int deff(int a, int b, int c=100){
	return a+b+c;
}

void display(){
	cout << "sairam" << endl;
}

int main(){
	display();
	int x = add(2,3);
	cout << x<< endl;

	int y=add2(1,2);
	cout << y<< endl;
	
	int z=deff(1,2);
	cout << z << endl;

	
	return 0;
}

int add2(int a, int b, int c){
	return a+b+c;
}

int add(int a, int b){
	return a+b;
}
