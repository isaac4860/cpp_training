#include<iostream>
using namespace std;

class Base1{
	public:
		int a=9;

		void printa(){
			cout<<"Message from Base class 1\n";
		}

		void show(){
			cout<<p<<"\n";
		}
	private:
		int p=90;
};


class Base2{
	public:
		int a=9;

		void printb(){
			cout<<"Message from Base class 2\n";
		}

		void show(){
			cout<<p<<"\n";
		}
	private:
		int p=90;
};


class Base3{
	public:
		int a=9;

		void printc(){
			cout<<"Message from Base class 3\n";
		}

		void show(){
			cout<<p<<"\n";
		}
	private:
		int p=90;
};

class Derived: public Base1, public Base2, public Base3{
	public:
		int b=100;

		void print(){
			printa();
			printb();
			printc();
			cout<<"Message from Derived Class\n";
		}
};

int main(){
	Derived d;

	d.print();

	return 0;
}
