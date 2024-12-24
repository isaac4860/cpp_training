#include<iostream>
using namespace std;

int main(){
	int n=10;
	//cout<<"Enter a value:\n";
	//cin>>n;

	clock_t t=clock();

	int c=1;
	for(int i=n;i>1;i--)
	{
		c=c*i;
	}
	cout<<"The factorial value of "<<n<<" is "<<c<<endl;
	cout<<"Time taken: "<<clock()-t<<endl;

	return 0;
}
