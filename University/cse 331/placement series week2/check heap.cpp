#include<bits/stdc++.h>
using namespace std;
string checkHeap(int a[],int n){
	for(int i=1;i<=(n/2);i++){
		if(a[i]< a[2*i] )
			return "No";
		if(2*i+1<=n && a[i]<a[2*i+1])
			return "No";
	}
	return "Yes";
	
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	cout<<checkHeap(a,n);
}
