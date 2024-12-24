#include<iostream>
using namespace std;

class Emp{
};

class NotEmp{
	public:
		int a=9;
};

int main(){
	Emp ob1;
	NotEmp ob2;

	//cout<<"The size of empty class is "<<sizeof(ob1)<<" and its address is "<<&ob1<<endl;
	//cout<<"The size of non-empty class is "<<sizeof(ob2)<<" and its address is "<<&ob2<<endl;
	cout<<"The size of non-empty class is "<<sizeof(Emp);

	return 0;
}
