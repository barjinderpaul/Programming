#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void primeFactors(int n){
	vector<int> primes;
	vector<int> :: iterator uniquePrimes;
	while(n%2 == 0 ){
		primes.push_back(2);
		n/=2;
	}
	for(int p=3;p*p<=n;p+=2){
		if(n%p == 0){
			primes.push_back(p);
			n/=p;
		}
	}
	if(n>2)
		primes.push_back(n);
	cout<<"Prime Factors : " ;
	for(int i=0;i<primes.size();i++)
		cout<<primes[i]<< " ";
	
	cout<<endl << "Unique Primes " ;		
	uniquePrimes = unique(primes.begin(),primes.end());
	primes.resize(distance(primes.begin(),uniquePrimes));
	for(uniquePrimes = primes.begin();uniquePrimes!=primes.end();uniquePrimes++)
		cout<<*uniquePrimes<<" ";
}

int main(){
	int n;
	cin>>n;
	primeFactors(n);
	
}
