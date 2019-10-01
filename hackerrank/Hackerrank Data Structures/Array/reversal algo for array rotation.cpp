#include<iostream>
using namespace std;
int main(){
	int n,d;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>d;
	if(d>n)
		d=d%n;
	for(int i=0;i<d-1;i++){
		int temp=a[i];
		a[0]=a[d-1];
		a[d-1]=temp;
	}
	for(int i=d;i<n;i++){
		int temp=a[d];
		a[d]=a[n-1];
		a[n-1]=temp;
	}
		for(int i=0;i<n;i++){
		int temp=a[i];
		a[i]=a[n-1];
		a[n-1]=temp;
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
