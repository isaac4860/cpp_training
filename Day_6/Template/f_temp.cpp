#include<iostream>
using namespace std;

template <typename f>

f add(f p1, f p2){
	return p1+p2;
}

int main(){
	cout<<"4 + 5 is "<<add(4,5)<<"\n";
	cout<<"2.5 + 11.0 is "<<add(2.5,11.0)<<"\n";
	return 0;
}
