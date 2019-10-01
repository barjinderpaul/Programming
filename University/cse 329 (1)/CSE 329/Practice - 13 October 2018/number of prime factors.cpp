#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> primes;
vector<int> :: iterator uniquePrimes;
void primeFactors(int n){
	int count=0;
	while(n%2 == 0){
		cout<<"2 ";
		primes.push_back(2);
		count+=1;
		n/=2;
	}
	for(int i=3;i*i<=n;i+=2){
		while(n%i == 0){
			cout<<i<<" ";
			primes.push_back(i);
			n/=i;
			count++;
		}
	}
	if(n>2){
		count+=1;
		primes.push_back(n);
		cout<<n<< " ";
	}
	cout<<endl<<"Total Primes = "<<count<<endl;
	uniquePrimes=unique(primes.begin(),primes.end());
	primes.resize(distance(primes.begin(),uniquePrimes));
	for(uniquePrimes = primes.begin();uniquePrimes!=primes.end();++uniquePrimes){
		cout<<*uniquePrimes<< " ";
	}
}

int main(){
	int n;
	cin>>n;
	primeFactors(n);
}
