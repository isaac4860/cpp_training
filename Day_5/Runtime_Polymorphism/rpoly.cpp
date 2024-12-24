#include<iostream>
using namespace std;

class S{
	public:
		virtual void func() {}
};

class T: public S{
	public:
		void func(){
			cout<<"Runtime Polymorphism Example 1"<<endl;
		}
};

class U: public T{
	public:
		void func(){
			cout<<"Runtime Polymorphism Example 2"<<endl;
		}
};

int main(){
	S* ptr1=new T();
	ptr1->func();

	T* ptr2=new U();
	ptr2->func();

	return 0;
}
