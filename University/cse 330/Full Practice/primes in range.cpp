#include<bits/stdc++.h>
using namespace std;

void primes(int left,int right){
	bool primes[right+1];
	primes[0]=false;primes[1]=false;primes[1]=false;
	for(int i=2;i<=right;i++)
		primes[i] = true;
	for(int p=2;p*p<=right;p++){
		if(primes[p]==true){
			for(int i=p*2;i<=right;i+=p){
				primes[i]=false;
			}
		}
	}
	for(int i=left;i<=right;i++)
		if(primes[i])
			cout<<i<<" ";
}

int main(){
	int left,right;
	cin>>left>>right;
	primes(left,right);
}
