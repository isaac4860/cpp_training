#include<iostream>
using namespace std;

void func_1(){
	cout<<"This is sample text.\n";
}

void func_2(int n){
	cout<<"The number is "<<n<<endl;
}

int func_3(int x,int y){
	return x+y;
}

void callback_1(void (*cbfunc_1)()){
	cbfunc_1();
}

void callback_2(void (*cbfunc_2)(int),int n){
	cbfunc_2(n);
}

void callback_3(int (*cbfunc_3)(int,int),int x,int y){
	cout<<"The sum is "<<cbfunc_3(x,y)<<endl;
}

int main(){
	//Callback of First Function
	callback_1(func_1);

	//Callback of Second Function
	int n;
	cout<<"Enter a number to print:\n";
	cin>>n;
	callback_2(func_2,n);

	//Callback of Third Function
	int x,y;
	cout<<"Enter two numbers below to add:\n";
	cin>>x;
	cin>>y;
	callback_3(func_3,x,y);

	return 0;
}
