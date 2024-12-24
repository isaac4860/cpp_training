#include<iostream>
using namespace std;

class Op{
	private:
		int a=9,b=10;
	public:
		void show(){
			cout<<"The private members can only be accessed within the class."<<endl;
			cout<<a+b<<endl;
		}
};

int main(){
	Op o;
	o.show();

	return 0;
}
