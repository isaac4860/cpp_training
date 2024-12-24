#include<iostream>
using namespace std;

class Sample{
	private:
		int a,b;
	public:		
		void set(int x,int y){
			a=x;
			b=y;
		}

		void print(){
			cout<<"The values stored in object are "<<a<<" and "<<b<<endl;
		}
};

int main(){
	Sample s;
	s.set(4,5);
	s.print();

	return 0;
}

