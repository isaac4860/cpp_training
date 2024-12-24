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
			printb();
			cout<<"Message from Derived Class\n";
		}
};

int main(){
	Base b;
	Derived d;

	b.show();
	d.printc();

	return 0;
}
