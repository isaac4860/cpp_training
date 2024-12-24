#include<iostream>
#include<chrono>
#include<ctime>
#include<iomanip>
using namespace std;

int main(){
	//Gets current time from system clock
	auto now=chrono::system_clock::now();

	//Converts time to time_t format which can be used with C functions
	time_t t=chrono::system_clock::to_time_t(now);

	//Converts time to tm format which can use components like hours and minutes
	tm* local_time=localtime(&t);

	//Prints time in required format
	cout<<put_time(local_time,"%H:%M:%S\n");

	return 0;
}
