#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
	unordered_map<int,string> u;
	u.insert({1,"first"});
	u.insert({2,"second"});

	//First Case
	if(u.find(1)!=u.end()){
		cout<<"Key-value pair for key 1 exists.\n";
	}
	
	//Second Case
	if(u.find(0)==u.end()){
		cout<<"Key-value pair for key 0 does not exist.\n";
	}

	return 0;
}
