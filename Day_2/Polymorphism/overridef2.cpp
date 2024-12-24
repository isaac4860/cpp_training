#include<iostream>
using namespace std;

class Base{
	public:
		void show() {}
};

class Derived{
	public:
		void show(){
			cout<<"Base class show function successfully overridden\n";
		}
};

int main(){
	Base b;
	Derived d;

	b.show();
	d.show();

	return 0;
}
