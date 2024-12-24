#include<iostream>
using namespace std;

int fact(int n,int c){
	if(n>1){
		return fact(n-1,c*n);
	}
	else return c;
}

int main(){
	int n=10;
	//cout<<"Enter a value:\n";
	//cin>>n;
	
	clock_t t=clock();

	cout<<"The factorial value of "<<n<<" is "<<fact(n,1)<<endl;
	cout<<"Time taken: "<<clock()-t<<endl;
	return 0;
}	
