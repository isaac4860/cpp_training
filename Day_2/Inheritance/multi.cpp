#include<iostream>
using namespace std;

class Base{
	public:
		int a=9;

		void printa(){
			cout<<"Message from Base class\n";
		}

		void show(){
			cout<<p<<"\n";
		}
	private:
		int p=90;
};

class Derived: public Base{
	public:
		int b=100;

		void printb(){
			cout<<"Message from First Derived Class\n";
		}
};

class Derived2: public Derived{
	public:
		int b=100;

		void printc(){
			cout<<"Message from Second Derived Class\n";
		}
};

int main(){
	Derived2 d;

	d.printa();
	d.printb();
	d.printc();

	return 0;
}
