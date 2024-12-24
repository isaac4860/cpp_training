#include<iostream>
using namespace std;

class Other{
	public:
		int a=9;

		Other() {}
};

class Sample{
	public:
		int a,b;

		Other* oth;

		Sample(){
			a=0;
			b=0;
			oth=new Other;
		}

		Sample(int p1,int p2){
			a=p1;
			b=p2;
			oth=new Other;
		}

		Sample(Sample &obj)=delete;

		Sample(Sample* &&obj){
			cout<<"Move constructor function running...\n";
  			a=obj->a;
			b=obj->b;
			oth=obj->oth;
			obj->oth=nullptr;
		}
};

int main(){
	Sample s1(4,5);
	cout<<"Object has been initiaized with integers "<<s1.a<<" and "<<s1.b<<"\n";
	cout<<"The address of 'oth' is "<<s1.oth<<"\n\n";
	
	Sample s2((Sample*) &s1);
	cout<<"A new object has been made with integers "<<s2.a<<" and "<<s2.b<<"\n";
	cout<<"The address of 'oth' in the new object is "<<s2.oth<<"\n";
	cout<<"The address of 'oth' in the old object is "<<s1.oth<<"\n"; 

	return 0;
}
