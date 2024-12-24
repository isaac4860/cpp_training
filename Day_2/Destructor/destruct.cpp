#include<iostream>
using namespace std;

class Sample{
	public:
		Sample(){
			cout<<"Object created.\n";
		}

		~Sample(){
			cout<<"Destructor function running...\n";
		}
};

int main(){
	Sample s;

	return 0;
}
