#include<iostream>
#include<regex>
using namespace std;

int main(){
	regex r1("\\d");
	string s1;

	cout<<"Enter text below with at least one digit:\n";
	cin>>s1;

	if(regex_search(s1,r1)){
		cout<<"Digit found in string.\n";
	}
	else cout<<"No digits found.\n";

	regex r2("Sample");
	string s2;

	cout<<"Enter the text 'Sample' below:\n";
	cin>>s2;

	if(regex_match(s2,r2)){
			cout<<"Match.\n";
	}
	else cout<<"No Match.\n";

	return 0;
}
