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
};

int main(){
	Sample s(4,5);

	cout<<"Object has been initiaized with integers "<<s.a<<" and "<<s.b<<endl;

	return 0;
}
