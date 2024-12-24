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
			printa();
			cout<<"Message from First Derived Class\n";
		}
};


class Derived2: public Base{
	public:
		int b=100;

		void printb(){
			printa();
			cout<<"Message from Second Derived Class\n";
		}
};

int main(){
	Base b;
	Derived d1;
	Derived2 d2;

	b.show();
	d1.printb();
	d2.printb();

	return 0;
}
