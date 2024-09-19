#include <iostream>
using namespace std;

void show(int nums[], int len){
	for(int i=0;i<len;i++){
		cout << nums[i] << endl;
	}
}



int main()
{
	int nums[] ={1,2,3,4};
	show(nums,4);
    	return 0;
}
