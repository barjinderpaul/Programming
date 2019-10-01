#include<bits/stdc++.h>
using namespace std;

void sieve(int limit){
	bool primes[limit+1];
	for(int i=0;i<limit+1;i++)
		primes[i] = true;
	for(int p=2;p*p<=limit;p++){
		if(primes[p]==true){
			for(int i=p*p;i<=limit;i+=p){
				primes[i]=false;
			}
				
		}
	}
	for(int i=2;i<limit+1;i++)
		if(primes[i])
			cout<<i<<" ";
}

int main(){
	int64_t limit;
	cin>>limit;
	sieve(limit);
}
