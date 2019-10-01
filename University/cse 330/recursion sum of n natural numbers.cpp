#include<bits/stdc++.h>
using namespace std;
int sum(int n){
	if(n!=0)
		return n+ sum(n-1);
	else
		return 0;
}
int main(){
	int n;
	cout<<"enter number upto which you want to find sum of natural numbers";
	cin>>n;
	cout<<sum(n);
}
