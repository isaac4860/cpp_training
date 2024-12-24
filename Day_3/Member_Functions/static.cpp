#include<iostream>
using namespace std;

class Employee{
	public:
		int id;
		string name;
		static int age;

		Employee(int p1,string p2){
			id=p1;
			name=p2;
		}
};

int Employee::age=25;

int main(){
	cout<<"The value of age is "<<Employee::age<<"\n";

	Employee e1(1,"N1");
	Employee e2(2,"N2");
	cout<<"The age of Employee N2 is "<<e2.age<<"\n";

	cout<<"Setting age of Employee N1 as 40...\n";
	e1.age=40;
	cout<<"The age of Employee N2 is "<<e2.age<<"\n";

       	return 0;
}	
