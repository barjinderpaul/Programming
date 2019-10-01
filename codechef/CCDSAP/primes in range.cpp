#include<bits/stdc++.h>
using namespace std;

void sieve(int l,int r){
	bool primes[r+1];
	for(int i=0;i<r+1;i++)
		primes[i] = true;
	for(int p=2;p*p<=r;p++){
		if(primes[p] == true){
			for(int i=p*p;i<=r;i+=p){
				primes[i]=false;
			}
		}
	}
	for(int i=l-1;i<=r;i++){
		if(primes[i])
			cout<<i<<" ";
	}
}


int main(){
	int l,r;
	cin>>l>>r;
	sieve(l,r);

}
