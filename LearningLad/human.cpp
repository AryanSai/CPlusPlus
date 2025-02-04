#include<iostream>
#include<string>

using namespace std;

class Human{
	private: //default is private
		int age;
	public:
		static int count;
		string name;
		
		//default constructor
		Human(){
			name="noname";
			age=0;
			count++;
		}

		//overloaded constructor
		Human(string nam, int ag = 0){
			name = nam;
			age = ag;
			count++;
		}
		
		~Human(){
			cout << this->name << " object killed!" << endl;
		}
		
		static void fcount(){
			cout << "number of humans= " << count << endl ;
		}

		void set_age(int ag){
			age=ag;	
		}

		//since he is your friend, you can share details with him
		friend void display_age(Human h);

		void get_age(){
			cout << "My age is "<< age<< endl;		
		}

		void new_introduce();
				
		void introduce(){
			cout << "I am "<< name << endl;
		}	
};

//if the above declaration with friend is not there cant access age
//since it is not a member function
void display_age(Human h){
	cout << h.name <<"\'s age is "<< h.age<< endl;
}

void Human::new_introduce(){
	cout << "introduction from outside the class!"<< endl;
}

int Human::count=0;

int main(){
	Human::fcount();
	Human b("surya",99);
	b.introduce();
	
	display_age(b);
	
	Human c("jai");
	c.introduce();

	Human h;
	h.name="Aryan";
	h.introduce();
	h.set_age(24);
	h.get_age();

	Human *a = new Human();
	a->name="sai";
	a->introduce();
	a->new_introduce();	
	
	Human::fcount();
	//since dynamic allocn, deallocate
	delete a;
	return 0;
}
