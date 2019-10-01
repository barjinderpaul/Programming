#include<bits/stdc++.h>
using namespace std;

void primes(int n){
	bool primes[n+1];
	vector<int> primeNumbers;
	primes[0] = primes[1] =false;
	for(int i=2;i<n;i++)
		primes[i] = true;
	
	for(int i=2;i*i<=n;i++){
		if(primes[i] == true){
			primeNumbers.push_back(i);
			for(int j=i*i;j<=n;j+=i)
				primes[j]=false;
		}
	}
cout<<primeNumbers[primeNumbers.size()];
	
}

int main(){
	left,right;
	primes(10);
	
}
