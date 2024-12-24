#include<iostream>
using namespace std;

void sort(int n,int arr[]){
	for(int i=0;i<n-1;i++){
		int p=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[p]){
				p=j;
			}
		}
		if(p!=i){
			int temp=arr[i];
			arr[i]=arr[p];
			arr[p]=temp;
		}
	}
}

int bin_search(int l,int r,int arr[],int s){
	int mid=(l+r)/2;
	if(arr[mid]==s){
		return mid;
	}
	else if(l!=r){
		if(arr[mid]>s){
			return bin_search(l,mid,arr,s);
		}
		else return bin_search(mid+1,r,arr,s);
	}
	else return -1;
}

void print(int n,int arr[]){
	cout<<"The values present are:\n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"\n";
	}
}

int main(){
	int n;
	cout<<"Enter no. of values: ";
	cin>>n;

	int* arr=new int[n];
	cout<<"Enter the values below:\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	};
	
	//New Array Created
	cout<<"Array is filled with values\n";
	print(n,arr);

	//Sorting the Array
	sort(n,arr);
	cout<<"Array is sorted\n";
	print(n,arr);

	//Finding a Value
	int x,p;
	cout<<"Enter a value to search: ";
	cin>>x;
	p=bin_search(0,n-1,arr,x);
	if(p==-1){
		cout<<"Value "<<x<<" not found.\n";
	}
	else cout<<"Value "<<x<<" found at position "<<p<<".\n";

	delete[] arr;

	return 0;
}
