#include<iostream>
using namespace std;

int err(){
	return 1/0;
}

int main(){
	cout<<"Sample Test Program with GDB"<<endl;
	err();
	return 0;
}
