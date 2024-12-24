#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter a value:\n";
	cin>>n;

	//First Half
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			cout<<" ";
		}
		cout<<"/";
		for(int j=0;j<2*i;j++){
			cout<<" ";
		}
		cout<<"\\"<<"\n";
	}

	//Second Half
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<" ";
		}
		cout<<"\\";
		for(int j=0;j<2*(n-i-1);j++){
			cout<<" ";
		}
		cout<<"/"<<"\n";
	}

	return 0;
}
