#include<iostream>
#include<thread>
#include<chrono>
using namespace std;

void func1(){
	cout<<"This function is done by the first thread.\n";
	this_thread::sleep_for(chrono::seconds(5));
}

void func2(){
	cout<<"This function is done by the second thread.\n";
	this_thread::sleep_for(chrono::seconds(5));
}

int main(){
	thread t1(func1);
	t1.join();
	cout<<"First thread terminated...\n";
	
	thread t2(func2);
	t2.join();	
	cout<<"Second thread terminated...\n";

	cout<<"All threads terminated. End of program.\n";

	return 0;
}
