#include<iostream>
using namespace std;

int main(){
	char s1[10],s2[10];

	cout<<"Enter strings below:\n";
	cin.get(s1,3);
	cin.getline(s2,5);

	cout<<"String 1 is "<<s1<<endl;
	cout<<"String 2 is "<<s2<<endl;

	return 0;
}
