#include<iostream>
#include<vector>
using namespace std;

int main(){
	string temp;
	vector<string> inp;

	cout<<"Enter strings of text below:\n";
	while(true){
		getline(cin,temp);

		if(temp!="")
		{
			inp.push_back(temp);
		}
		else break;
	}

	cout<<"The entered strings are:\n";
	for(int i=0;i<inp.size();i++){
		cout<<inp[i]<<"\n";
	}

	return 0;
}
