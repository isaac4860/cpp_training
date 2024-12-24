#include<iostream>
using namespace std;

int main(){
	char c='s';
	string s="sample";

	cout<<"The ASCII value of the char value ('c') is "<<int(c)<<".\n\n";
	cout<<"For string ('sample'):\n";
	for(int i=0;i<s.length();i++)
	{
		cout<<"ASCII value of "<<s[i]<<" is "<<int(s[i])<<"\n";
	}

	return 0;
}
