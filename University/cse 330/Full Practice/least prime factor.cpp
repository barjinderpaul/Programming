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

int primeFactors(int n){

	for(int i=3;i*i<=n;i++){	//primeFactors till n from 3;
			if(n%i==0)
				return i;
	}
}

int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			if(i==1){
				cout<<"1 ";
				continue;}
			else if(isPrime(i)){
				cout<<i<<" ";
				continue;}
			else if(i%2==0){
				cout<<"2 ";
				continue;}
			else 
				cout<<primeFactors(i)<<" ";
		}
		cout<<endl;
	}
}
