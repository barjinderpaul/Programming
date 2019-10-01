#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	if(n<=1)
		return false;
	if(n<=3)
		return true;
	if(n%2==0 || n%3==0)
		return false;
	for(int i=5;i*i<=n;i+=6)
		if(n%i==0 || n%(i+2)==0)
			return false;
	return true;
}


void findCount(int left,int right){
	int totalSetBits,count=0;
	for(int i=left;i<=right;i++){
		totalSetBits = __builtin_popcount(i);
		if(isPrime(totalSetBits))
			count++;
	}
	cout<<"Count = "<<count;
}

int main(){
	int left,right;
	cin>>left>>right;
	findCount(left,right);
}
