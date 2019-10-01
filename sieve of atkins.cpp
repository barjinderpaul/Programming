#include<bits/stdc++.h>
using namespace std;

void primes(int limit,vector<int>&prime){
	if(limit>2)
		prime.push_back(2);
	if(limit>3)
		prime.push_back(3);
	bool sieve[limit];
	for(int i=0;i<limit;i++)
		sieve[i] = false;
	for(int x=1;x*x<limit;x++){
		for(int y=1;y*y<limit;y++){
			int n = (4*x*x) + (y*y);
			if(n<=limit && (n%12==1 || n%12==5))
				sieve[n]^=true;
			n = (3*x*x) + (y*y);
			if(n<=limit && n%12==7)
				sieve[n]^=true;
			n = (3*x*x) - (y*y);
			if(n<=limit && x>y && n%12==1 )
				sieve[n]^=true;
		}
	}
	for(int r=5;r*r<limit;r++){
		if(sieve[r]){
			for(int i=r*r;i<limit;i+=r*r)
				sieve[i]=false;
		}
	}
	for(int a=5;a<limit;a++)
		if(sieve[a])
			prime.push_back(a);
}


int main(){
	vector<int> prime;
	primes(100,prime);
	for(auto x:prime){
		cout<<x<<" ";
	}
}
