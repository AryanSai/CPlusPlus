#include <iostream>
using namespace std;

int main(){
	char input = 'A';
	switch(input){
		case 'A': {
			cout << "Excellent" <<endl;
			break;
		}
		case 'B':{
			cout << "Bad" <<endl;
			break;
		}
		default:{
			cout << "Default" << endl;
		}
	}
}
