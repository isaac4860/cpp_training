#include<iostream>
using namespace std;

class Sample{
	public:
	int a=9;

	void f1(){
		cout<<"Hello"<<endl;
	}

	int f2(){
		return 1;
	}
};

int main(){
	Sample s;
	s.f1();
	cout<<sizeof(s)<<endl;
	return 0;
}
