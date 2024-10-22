#include<iostream>
#include<string>

using namespace std;

class Human{
	private:
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
		
		void set_age(int ag){
			age=ag;	
		}

		void get_age(){
			cout << "My age is "<< age<< endl;		
		}

		void new_introduce();
				
		void introduce(){
			cout << "I am "<< name << endl;
		}
	
		
};

void Human::new_introduce(){
	cout << "introduction from outside the class!"<< endl;
}

int Human::count=0;

int main(){
	cout << "number of humans= " << Human::count << endl ;
	Human b("swami",99);
	b.introduce();
	
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
	
	cout << "number of humans= " << Human::count << endl ;

	//since dynamic allocn, deallocate
	delete a;
	return 0;
}
