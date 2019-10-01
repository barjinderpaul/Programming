#include<iostream>
using namespace std;
int rotate(int a[],int n){
	int temp=a[0];
	for(int i=0;i<n;i++){
		a[i]=a[i+1];
	}
	a[n-1]=temp;
}
int main(){
	int t;
	cin>>t;
	while(t>0){
	int n,d;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>d;
	while(d>0){ //O(n*d)
	rotate(a,n);
	d--;
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";	
	}
	cout<<endl;
	t--;
}
return 0;
}
