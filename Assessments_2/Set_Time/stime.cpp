#include<iostream>
#include<sys/time.h>
#include<cstring>
#include<ctime>
#include<unistd.h>
using namespace std;

int main(){
	//Creating time object
	struct tm timeob;
	timeob.tm_year=2024-1900;
	timeob.tm_mon=12;
	timeob.tm_mday=20;
	timeob.tm_hour=11;
	timeob.tm_min=30;
	timeob.tm_sec=0;

	//Conversion to time_t
	time_t t=mktime(&timeob);
	if(t==-1){
		cout<<"Time object creation failed.\n";
		return 1;
	}

	//Creating timeval object
	struct timeval tv;
	tv.tv_sec=t;
	tv.tv_usec=0;

	//Setting System Time
	int o=settimeofday(&tv,nullptr);
	if(o==0){
		cout<<"Time has been successfully changed.\n";
	}
	else cout<<"Time change unsuccessful.\n";

	return 0;
}
