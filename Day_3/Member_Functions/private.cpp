#include<iostream>
using namespace std;

class Sample{
	public:
		void publicf(){
			cout<<"Public function called\n";
		}

		void callprivate(){
			cout<<"Calling private function...\n";
			privatef();
		}
	private:
		void privatef(){
			cout<<"Private function called\n";
		}
};

int main(){
	Sample s;

	s.publicf();
	s.callprivate();

	return 0;
}
