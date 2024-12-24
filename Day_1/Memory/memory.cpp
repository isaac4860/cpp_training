#include<iostream>
using namespace std;

int main(){
	int *p1,*p2;
	p1=(int*)malloc(sizeof(int));
	p2=(int*)calloc(4,sizeof(int));
	p1[0]=5;
	p2[0]=10;
	p2[1]=19;
	
	cout<<p1[0]<<endl<<p2[0]<<endl<<p2[1]<<endl;

	//If memory cannot be re-allocated, NULL is returned
	int *rp=(int*)realloc(p1,4*sizeof(int));
	if(rp==NULL)
	cout<<"Memory re-allocation failed.\n";

	free(p1);
	free(p2);

	return 0;
}
