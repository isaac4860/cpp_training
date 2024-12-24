#include<iostream>
#include<map>
using namespace std;

int main(){
	map<int, string> m;
	m.insert({1,"first"});
	m.insert({{9,"second"},{3,"third"}});
	
	cout<<m.at(9)<<endl;
	
	//Removes element
	m.erase(9);

	//Removes all elements
	m.clear();

	if(m.size()==0){
		cout<<"Map is cleared of all elements.\n";
	}

	return 0;
}
