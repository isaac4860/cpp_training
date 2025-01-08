#include<iostream>
#include<fstream>
#include<sstream>
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

		//Log Parser function
		void parse(){
			//Used to read original log file
			ifstream inp_f("auth.log");
			string s;	

			//Deletes any existing file and remakes an empty one
			ofstream new_f("outlog.txt",ios::out);
			new_f.close();

			//Used to append to final log output
			ofstream app_f("outlog.txt",ios::app);

			while(getline(inp_f,s)){
				stringstream ss(s);
				string w;

				//Skips timestamp values
				for(int i=0;i<3;i++){
					ss>>w;
				}

				//
				for(int i=0;i<3;i++){
					ss>>w;
					app_f<<w<<" ";
				}
				
				app_f<<endl;
			}

			inp_f.close();
			app_f.close();
		}
};

ST* ST::ptr=nullptr;

int main(){
	//Creating a pointer to the one object instance
	ST* p=ST::getp();
	p->s_text("sample");
	cout<<"The stored text in the instance is "<<p->g_text()<<endl;
	p->parse();

	return 0;
}
