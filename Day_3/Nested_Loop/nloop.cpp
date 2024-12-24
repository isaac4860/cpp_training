#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the size value:\n";
	cin>>n;

	//Nested Loop 1
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n-1;j++)
		{
			cout<<" ";
		}
		cout<<"/";
		for(int j=0;j<2*i;j++)
		{
			cout<<" ";
		}
		cout<<"\\"<<"\n";
	}

	//Nested Loop 2
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<" ";
		}
		cout<<"\\";
		for(int j=0;j<2*(n-i-1);j++)
		{
			cout<<" ";
		}
		cout<<"/"<<"\n";
	}

	return 0;
}
