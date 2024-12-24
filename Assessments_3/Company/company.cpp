#include<iostream>
using namespace std;

class Company{
	private:
		int emp_id;
		string name;
		string dept;
	public:
		Company () {
			cout<<"Company object created\n";
		}

		virtual	~Company() {
			cout<<"Company object deleted\n";
		}

		void get_id(){
			cout<<"Employee ID: "<<emp_id<<"\n";
		}

		void get_name(){
			cout<<"Employee Name: "<<name<<"\n";
		}

		void set_name(string n){
			name=n;
			cout<<"Employee Name Successfully Updated\n";
		}

		virtual void get_dept(){
			cout<<"Employee Department: "<<dept<<"\n";
		}
};

class HR: public Company{
	public:
		HR(){
			cout<<"HR object created\n";
		}

		~HR() {
			cout<<"HR object deleted\n";
		}

		void get_dept(){
			cout<<"Employee Department: HR\n";
		}
};

class Finance: public Company{
	public:
		Finance(){
			cout<<"Finance object created\n";
		}
		
		~Finance(){
			cout<<"Finance object deleted\n";
		}

		void get_dept(){
			cout<<"Employee Department: Finance\n";
		}
};

class Support: public Company{
	public:
		Support(){
			cout<<"Support object created\n";
		}
		
		~Support(){
			cout<<"Support object deleted\n";
		}

		void get_dept(){
			cout<<"Employee Department: Support\n";
		}
};

int main(){
	Company* c1=new HR();
	Company* c2=new Finance();
	Company* c3=new Support();

	c1->get_dept();
	c2->get_dept();
	c3->get_dept();

	delete c1;
	delete c2;
	delete c3;

	return 0;
}

