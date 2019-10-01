#include<bits/stdc++.h>
using namespace std;
vector<int> primeNumbers;
uint64_t productUsingSieveOfEratosthenes(int n){
	bool primes[n+1];
	uint64_t product=1;
	primes[0]=false;primes[1]=false;
	for(int i=2;i*i<=n;i++){
		primes[i]=true;
	}
	for(int p=2;p*p<=n;p++){
		if(primes[p] == true){
			for(int i=p*2;i<=n;i+=p)
				primes[i]=false;
		}
	}
	for(int i=2;i<=n;i++){
		if(primes[i]){
			primeNumbers.push_back(i);
		}
	}

}

bool isPrime(uint64_t n){
		if(n<=1)
			return false;
		if(n<=3)
			return true;
		if(n%2==0 || n%3==0)
			return false;
		for(uint64_t i=5;i*i<=n;i+=6)
			if(n%i==0 || n%(i+2)==0)
				return false;
		return true;
}

uint64_t returnProduct(int n){
	uint64_t product=1;
	for(int i=0;i<n;i++){
//		cout<<"p = "<<primeNumbers[i]<<endl;
		product=product * primeNumbers[i];
	}
	return product;
}

uint64_t greaterPrime(uint64_t product){
	
	for(int i=0;i<primeNumbers.size();i++){
		if(isPrime(primeNumbers[i] + product))
			{
				return primeNumbers[i];				
			}
	}
}

int nFortunateNumber(int n){
	uint64_t product = returnProduct(n);
	uint64_t p = greaterPrime(product);
	
	cout<<"product = "<<product<<endl;
	cout<<"P = "<<p<<endl;
	return p;	
}

int main(){
	int n;
	cin>>n;
	productUsingSieveOfEratosthenes(10000);
	cout<<nFortunateNumber(n);
}
