#include<iostream>
using namespace std;

int main(){
	int arr[6]={1,2,3,4,5,6};

	//cout << arr[3] << endl;

	//int marks[2][3]={{1,2,3},{4,5,6}};
	
	//cout << marks[1][2]<< endl;
	
	//when we print arr, we get the address of the array
	cout << arr << endl;
	cout << *arr << endl;
	cout << *(arr+1) << endl;
	return 0;
}
