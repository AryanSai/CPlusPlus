#include<iostream>
using namespace std;

void display(const int *start, const int *end){
	const int *ptr;
	for(ptr=start;ptr!=end;ptr++){
		cout << *ptr << endl;
	}
}

int main(){
	int nums[3]={1,2,3};
	display(nums,nums+3);
	return 0;
}
