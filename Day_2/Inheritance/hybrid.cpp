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

	protected:
		void other(){
			cout<<"This is a Protected Function\n";
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

class Derived3: public Derived{
	public:
		int c=500;

		void printc(){
			other();
		}
};

int main(){
	Base b;
	Derived d1;
	Derived2 d2;
	Derived3 d3;

	b.show();
	d1.printb();
	d2.printb();
	d3.printc();

	return 0;
}
