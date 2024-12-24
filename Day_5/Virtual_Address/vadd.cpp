#include<iostream>
using namespace std;

class Base{
	public:
		virtual void func_a() {}

		virtual void func_b() {}
};

class Derived: public Base{
	public:
		void func_a(){
			int a=9;
		}
};

int main(){
	//For Base object
	Base b;
	void** vtab1=*(void***)&b;
	void* vfa1=vtab1[0];
	void* vfa2=vtab1[1];
	cout<<"For Base object:"<<endl;
	cout<<"Address of virtual function a is "<<vfa1<<endl;
	cout<<"Address of virtual function b is "<<vfa2<<endl<<endl;

	//For Derived object
	Derived d;
	void** vtab2=*(void***)&d;
	void* vfb1=vtab2[0];
	void* vfb2=vtab2[1];
	cout<<"For Derived object:"<<endl;
	cout<<"Address of virtual function a is "<<vfb1<<endl;
	cout<<"Address of virtual function b is "<<vfb2<<endl<<endl;

	return 0;
}
