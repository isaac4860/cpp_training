#include<iostream>
using namespace std;

int main(){
	int *a;
	a=(int*)malloc(5*sizeof(int));
	free(a);

	return 0;
}
