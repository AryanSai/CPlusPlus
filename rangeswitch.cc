#include <iostream>
#include <vector>

using namespace std;

int main(){
	int x=19;
	switch(x){
		case 1 ... 15:{
			cout << "Yes" << endl;
			break;
		}
		case 16:{
			cout << "no" << endl;
			break;
		}
		default:
			cout << "Default"<< endl;
}	

	return 0;
}
