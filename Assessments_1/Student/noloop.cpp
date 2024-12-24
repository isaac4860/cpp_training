#include<iostream>
using namespace std;

class Student{
	public:
		int id;
		string name;
		int age;
		string stream;
};

void regist(Student s[],int n,int c){
	if(c<n)
	{
		s[c].id=c+1;
		cout<<"Student ID: "<<c+1<<"\n";

		cout<<"Enter name of student: ";
		cin>>s[c].name;

		cout<<"Enter students age: ";
		cin>>s[c].age;

		cout<<"Enter students stream: ";
		cin>>s[c].stream;


		cout<<"\n";

		regist(s,n,++c);
	}
}

int main(){
	int n;
	cout<<"Enter no. of students:\n";
	cin>>n;

	Student s[n];
	regist(s,n,0);

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

