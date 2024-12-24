#include<iostream>
using namespace std;

class Sample{
	public:
		int a,b;

		Sample(int x,int y){
			cout<<"Parameter constructor function running...\n";
			a=x;
			b=y;
		}

		Sample(Sample &obj){
			cout<<"Copy constructor function running...\n";
  			a=5*obj.a;
			b=10*obj.b;
		}
};

int main(){
	Sample s(4,5);

	cout<<"Object has been initiaized with integers "<<s.a<<" and "<<s.b<<"\n\n";
	
	Sample s2(s);
	cout<<"A new object has been made with integers "<<s2.a<<" and "<<s2.b<<"\n";

	return 0;
}
