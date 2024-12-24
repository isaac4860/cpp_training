#include<iostream>
using namespace std;

class Sample{
	private:
		int a,b;
	public:		
		Sample(int x,int y){
			a=x;
			b=y;
		}

		void print(){
			cout<<"The values stored in object are "<<a<<" and "<<b<<endl;
		}
};

int main(){
	Sample s(4,5);
	s.print();

	return 0;
}

