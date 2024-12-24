#include<iostream>
using namespace std;

class ST{
	private:
		string text;

		//All constructors to be made private.
		ST() {}

		//Single private pointer to return address of only instance
		static ST* ptr;

	public:
		//Delete the copy constructor
		ST(ST& obj)=delete;

		//Function to return the private pointer
		static ST* getp(){
			if(ptr==NULL){
				ptr=new ST;
				return ptr;
			}
			else return ptr;
		}

		//Getter function
		string g_text(){
			return text;
		}

		//Setter function
		void s_text(string s){
			text=s;
		}
};

ST* ST::ptr=nullptr;

int main(){
	//Creating a pointer to the one object instance
	ST* p=ST::getp();
	p->s_text("sample");
	cout<<"The stored text in the instance is "<<p->g_text()<<endl;

	return 0;
}
