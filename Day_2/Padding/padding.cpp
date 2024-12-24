#include<iostream>
using namespace std;

struct typea{
	int a;
	char b;
	double c;
	short d;
};

struct typeb{
	char a;
	short b;
	int c;
	double d;
};

int main(){
	struct typea a;
	struct typeb b;

	int exp=sizeof(int)+sizeof(char)+sizeof(double)+sizeof(short);

	cout<<"Expected Size of Type A Struct: "<<exp<<endl;
	cout<<"Actual Size of Type A Struct: "<<sizeof(a)<<endl<<endl;

	cout<<"Expected Size of Type B Struct: "<<exp<<endl;
	cout<<"Actual Size of Type B Struct: "<<sizeof(b)<<endl<<endl;

	return 0;
}
