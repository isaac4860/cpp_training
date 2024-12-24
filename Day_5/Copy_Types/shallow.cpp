#include<iostream>
using namespace std;

class Num{
	public:
		int h=9;
};

class Something{
	public:
		int a;
		Num* v=new Num();

		Something(){
			a=0;
		}

		Something(int x){
			a=x;
		}
};

int main(){
	Something s1(9);
	cout<<"The value in the original object is "<<s1.a<<endl;
	cout<<"The address of the num object is "<<s1.v<<endl<<endl;  

	Something s2=s1;
	cout<<"Copy of the object has been made."<<endl;
	cout<<"The value in the copy object is "<<s2.a<<endl;
	cout<<"The address of the num object is "<<s2.v<<endl<<endl;

	return 0;
}	
