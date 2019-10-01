#include<bits/stdc++.h>
using namespace std;
vector<int>primes;
void sieveOfAtkins(int limit){
	if(limit>2)
		primes.push_back(2);
	if(limit>3)
		primes.push_back(3);
	bool sieve[limit];
	for(int i=0;i<limit;i++)
		sieve[i]=false;
	for(int x=1;x*x<limit;x++){
		for(int y=1;y*y<limit;y++){
			int n= (4*x*x) + (y*y);
			if(n<=limit && (n%12==1 || n%12==5))
				sieve[n]^=true;
			n = (3*x*x) + (y*y);
			if(n<=limit && n%12==7)
				sieve[n]^=true;
			n = (3*x*x) - (y*y);
			if(x>y && n<=limit && n%12==11)
				sieve[n]^=true;
		}
	}
	for(int r=5;r*r<limit;r++){
		if(sieve[r]==true){
			for(int i=r*r;i<limit;i+=r*r)
				sieve[i]=false;
		}
	}
	for(int i=5;i<limit;i++)
		if(sieve[i])
			primes.push_back(i);
	
}

bool isPrime(int n){
	if(n<=1)
		return false;
	if(n<=3)
		return true;
	if(n%2==0 || n%3==0)
		return false;
	for(int i=5;i*i<n;i+=6)
		if(n%i==0 || n%(i+2)==0)
			return false;
	return true;
}
int main(){

	sieveOfAtkins(10000);
	int n,product=1;
	//cout<<primes[0];
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
	//	cout<<primes[i]<<" ";
		product*=primes[i];
	}
	int j=0;
	while(!isPrime(primes[j]+product))
		j++;
	cout<<primes[j];
}
