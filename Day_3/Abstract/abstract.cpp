#include<iostream>
using namespace std;

class Abstract{
	public:
		virtual void impl_func() {}

		Abstract(){
			cout<<"Abstract object created:"<<endl;
			cout<<"Abstract classes have at least one virtual function"<<endl<<endl;
		}
};

class Child_Abstract: public Abstract{
	public:
		Child_Abstract(){
			cout<<"Child_Abstract object created:"<<endl;
			cout<<"Virtual function is unchanged."<<endl<<endl;
		}
};

class Child_NoAbstract: public Abstract{
	public:
		void impl_func(){
			cout<<"This virtual function is now redefined"<<endl;
			cout<<"This is not an abstract class"<<endl;
		}

		Child_NoAbstract(){
			cout<<"Child_NoAbstract object created:"<<endl;
			impl_func();
		}
};

int main(){
	Abstract obj1;
	Child_Abstract obj2;
	Child_NoAbstract obj3;

	//cout<<"Address of virtual function in obj1: "<<obj1.impl_func<<endl;
	//cout<<"Address of virtual function in obj2: "<<obj2.impl_func<<endl;
	//cout<<"Address of virtual function in obj3: "<<obj3.impl_func<<endl;

	return 0;
}
