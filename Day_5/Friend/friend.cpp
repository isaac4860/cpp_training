#include<iostream>
using namespace std;

class S{
	private:
		friend class F;

		static const int a=9;

		void func(){
			cout<<"This is a private function"<<endl;
		}
};

class F{
	public:
		void get_mem(){
			cout<<"The int value is "<<S::a<<endl;
		}

		void get_func(){
			S* ptr=new S();
			ptr->func();
			delete ptr;
		}
};

int main(){
	F obj;
	obj.get_mem();
	obj.get_func();

	return 0;
}
