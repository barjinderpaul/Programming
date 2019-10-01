#include<bits/stdc++.h>
using namespace std;
vector<int>primeNumbers;

void sieve(int n){
	bool primes[n+1];

	for(int i=2;i<=n;i++)
		primes[i]=true;
	for(int p=2;p*p<=n;p++){
		if(primes[p]==true){
			for(int i=p*2;i<=n;i+=p)
				primes[i]=false;
		}
	}
	for(int i=2;i<=n;i++)
		if(primes[i])
			primeNumbers.push_back(i);
}
	

int main(){
	int t,a,b;
	sieve(100000);
	cin>>t;
	while(t--){
		cin>>a>>b;
		int sum=a+b;
		vector<int>::iterator position;
		position=upper_bound(primeNumbers.begin(),primeNumbers.end(),sum);
		cout<<(primeNumbers[position-primeNumbers.begin()]-sum)<<endl;
		
	}
}
