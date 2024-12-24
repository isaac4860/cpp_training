#include<iostream>
using namespace std;

int main(){
	int a,*b;
	string c;

	a=9;
	b=&a;
	c="sample";

	cout<<"The size of int is "<<sizeof(a)<<endl;
	cout<<"The size of int pointer is "<<sizeof(b)<<endl;
	cout<<"The size of string is "<<sizeof(c)<<endl;

	return 0;
}
