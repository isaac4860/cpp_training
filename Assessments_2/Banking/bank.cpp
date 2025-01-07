#include<iostream>
#include<map>
using namespace std;

class BankAccount{
	public:
		string account_no;
		string name;
		double balance;
};

class Bank{
	public:
		map<string,BankAccount> records;

		void OpenAccount(string no,string name,double obalance){
			BankAccount ba;
			ba.account_no=no;
			ba.name=name;
			ba.balance=obalance;
			records.insert({no,ba});
		}

		void ShowAccount(string no){
			auto emt=records.find(no);
			if(emt==records.end())
			{
				cout<<"Account not found.\n";
			}
			else
			{
				cout<<"Account No.: "<<records[no].account_no<<"\n";
				cout<<"Account Holder Name: "<<records[no].name<<"\n";
				cout<<"Available Balance: "<<records[no].balance<<"\n";
			}
		}

		void Deposit(string no,double m){
			auto emt=records.find(no);
			if(emt==records.end())
			{
				cout<<"Account not found.\n";
			}
			else
			{
				records[no].balance+=m;
				cout<<"Deposit Successful. ";
				cout<<"New Balance: "<<records[no].balance<<"\n";
			}
		}

		void Withdraw(string no,double m){
			auto emt=records.find(no);
			if(emt==records.end())
			{
				cout<<"Account not found.\n";
			}
			else
			{
				if(records[no].balance<m){
					cout<<"Insufficient Balance.\n";
				}
				else{
					records[no].balance-=m;
					cout<<"Withdrawal Successful. ";
					cout<<"New Balance: "<<records[no].balance<<"\n";
				}
			}
		}
};

int main(){
	int choice,loop=1;
	Bank b;
	cout<<"Banking System:\n";

	string s1,s2;
	double d;
	while(loop==1){
		cout<<"Enter 1 to Open Account.\n";
		cout<<"Enter 2 to Show Account.\n";
		cout<<"Enter 3 to Deposit.\n";
		cout<<"Enter 4 to Withdraw.\n";
		cout<<"Enter 5 to Exit.\n";
		cin>>choice;

		switch(choice){
			case 1:
				cout<<"Enter Account No.:";
				cin>>s1;
				cout<<"Enter Name: ";
				cin>>s2;
				cout<<"Enter Opening Balance: ";
				cin>>d;

				b.OpenAccount(s1,s2,d);
				break;
			case 2:
				cout<<"Enter Account No.: ";
				cin>>s1;

				b.ShowAccount(s1);
				break;
			case 3:
				cout<<"Enter Account No.: ";
				cin>>s1;

				cout<<"Enter Deposit Amount: ";
				cin>>d;

				b.Deposit(s1,d);
				break;
			case 4:
				cout<<"Enter Account No.: ";
				cin>>s1;

				cout<<"Enter Withdrawal Amount: ";
				cin>>d;

				b.Withdraw(s1,d);
				break;
			case 5:
				loop=0;
				break;
			default:
				cout<<"Invalid choice. Please try again.\n";
				break;
		}
	}
}


