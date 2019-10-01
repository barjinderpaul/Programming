#include<bits/stdc++.h>
using namespace std;

vector<int>primeNumbers;

void primes(int n){
	//Sieve of eratosthenes 
	bool primes[n+1];
	for(int i=0;i<n;i++)
		primes[i]=true;
	for(int p=2;p*p<=n;p++){
		if(primes[p]==true)
			{
				
				for(int i=p*2;i<=n;i+=p){
					primes[i]=false;
				}
			}
	}
	int count=0;
	for(int i=2;i<=n;i++)
		if(primes[i]){
			primeNumbers.push_back(i);
			cout<<count<<" "<<i<<endl;
			count+=1;
			}
	cout<<" pr = "<<primeNumbers[65];
}

int main(){
	int n;
	cin>>n;
	primes(n);
}
