#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<string> v;
	v.push_back("first");
	v.insert(v.begin()+1,"second");
	
	cout<<v.at(1)<<endl;
	
	//Removes element
	v.erase(v.begin()+1);

	//Removes all elements
	v.clear();

	if(v.size()==0){
		cout<<"Vector is cleared of all elements.\n";
	}

	return 0;
}
