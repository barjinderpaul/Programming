#include<bits/stdc++.h>
using namespace std;
vector<int>primes;
void primeFactors(int n){
	int product = 1;
	if(n%2==0){
		product*=2;
		while(n%2==0){
			n=n/2;			//divide n/2 till it becomes 2;
	}
	}
	
	for(int i=3;i*i<=n;i++){	//primeFactors till n from 3;
		if(n%i==0){
			product*=i;
		while(n%i==0){
			n=n/i;
		}}
	}
	if(n>2){
		product*=n;
	}
	cout<<"product = "<<product;
}

int main(){
	int n;
	cin>>n;
	primeFactors(n);
}

