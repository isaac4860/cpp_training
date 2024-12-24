#include<iostream>
using namespace std;

class Student{
	public:
		int id;
		string name;
		int age;
		string stream;
};

int main(){
	int n;
	cout<<"Enter no. of students:\n";
	cin>>n;

	Student s[n];
	for(int i=0;i<n;i++){
		s[i].id=i+1;
		cout<<"Student ID: "<<i+1<<"\n";

		cout<<"Enter name of student: ";
		cin>>s[i].name;

		cout<<"Enter students age: ";
		cin>>s[i].age;

		cout<<"Enter students stream: ";
		cin>>s[i].stream;


		cout<<"\n";
	}

	cout<<"Student Details:\n";
	for(int i=0;i<n;i++){
		cout<<"Student ID: "<<i+1<<"\n";

		cout<<"Student Name: ";
		cout<<s[i].name<<"\n";

		cout<<"Student Age: ";
		cout<<s[i].age<<"\n";

		cout<<"Student Stream: ";
		cout<<s[i].stream<<"\n";


		cout<<"\n";
	}

	return 0;
}

