#include<iostream>
using namespace std;

class Sample{
	public:
		int n=9;

		void f1(){
			cout<<"This is a non-constant function\n";
			n=15;
		}

		void f2() const{
			cout<<"This is a constant function\n";
		}
};

int main(){
	Sample s;

	s.f1();
	s.f2();

	return 0;
}
