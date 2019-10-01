//whether a number divides every number in the array:
#include<bits/stdc++.h>
using namespace std;

int number(int a[],int n){
	int gcd = a[0];
	for(int i=0;i<n;i++){
		if(i==n-1)
			break;
		gcd = __gcd(gcd,a[i+1]);
	}
	for(int i=0;i<n;i++){
		if(gcd == a[i])
			return gcd;
		else
			return -1;
	}
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}	
	cout<<number(a,n);
}

//Another approach;
/*
Find the smallest number in the array and if the number divides in the array , it is the number else not
*/


