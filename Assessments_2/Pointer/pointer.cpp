#include<iostream>
#include<memory>
using namespace std;

int main(){
	//Normal Pointer
	int* np=new int(9);
	delete np;

	//Unique Smart Pointer
	unique_ptr<int> usp= make_unique<int>(44);
	
	//Shared Smart Pointer
	shared_ptr<int> ssp1= make_shared<int>(20);
	shared_ptr<int> ssp2= ssp1;

	return 0;
}
