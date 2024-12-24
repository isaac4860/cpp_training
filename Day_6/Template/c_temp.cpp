#include<iostream>
using namespace std;

template <typename f>

class Sample{
	public:
		f mem;

		f print(){
			return mem;
		}
};

int main(){
	Sample<int> s;
	s.mem=9;
	cout<<s.print()<<endl;

	return 0;
}
