#include<iostream>
using namespace std;

//Let 'plus' be a function that either adds or concatenates
class OL{
	public:
		void plus(int a,int b){
			cout<<a+b<<"\n";
		}
		
		void plus(int a,string b){
			cout<<a<<b<<"\n";
		}
};

int main(){
	OL obj;

	obj.plus(4,5);
	obj.plus(9,"sample");

	return 0;
}
