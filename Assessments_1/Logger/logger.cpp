#include<iostream>
using namespace std;

//Friend Function
class Priv1{
	private:
		friend class Logger;

		static int const a=9;
};

//Normal Function
class Priv2{
	private:
		string text="secret";

	public:
		void print(){
			cout<<"The value of the member in Priv2 is "<<text<<endl;
		}
};


class Logger{
	public:
		void read1(){
			cout<<"The value of the member in Priv1 is "<<Priv1::a<<endl;
		}

		void read2(){
			Priv2 temp;
			temp.print();
		}
};

int main(){
	Logger l;
	l.read1();
	l.read2();

	return 0;
}
