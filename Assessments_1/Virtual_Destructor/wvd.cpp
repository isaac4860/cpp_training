#include<iostream>
using namespace std;

//With virtual destructor in Base class

class Base{
	public:
		Base(){
			cout<<"Creating Base Class..."<<endl;
		}

		virtual ~Base(){
				cout<<"Removing Base Class..."<<endl;
		}
};

class Derived: public Base{
	public:
		Derived(){
			cout<<"Creating Derived Class..."<<endl;
		}

		~Derived(){
			cout<<"Removing Derived Class..."<<endl;
		}
};

int main(){
	Base* b=new Derived();
	delete b;

	return 0;
}
