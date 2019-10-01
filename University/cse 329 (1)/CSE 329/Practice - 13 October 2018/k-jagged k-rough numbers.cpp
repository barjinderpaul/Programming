//K-Jagged Numbers, K-Rough Numbers;
/*
if a number's smallest prime factor >= K,
then that number is known as a K-Jagged or a K-Rough Number
*/

//CHECKS WHETHER A NUMBER IS A K-JAGGED/K-ROUGH NUMBER OR NOT :

/*
#include<bits/stdc++.h>
using namespace std;
int returnSmallestPrime(int num)
{
		vector<int> primeFactors;
		for(int p=2;p*p<=num;p++){
			while(num%p == 0){
				primeFactors.push_back(p);
				num = num/ p;
			}
		}
		if(num>1){
			primeFactors.push_back(num);
			}
		return primeFactors[0];
}

void jaggedRoughNumber(int n,int k){
	int spf = returnSmallestPrime(n);
	if(spf >= k)
		cout<<n<<" is a "<< k << "-rough/jagged number"<<endl;
	}

using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	jaggedRoughNumber(n,k);	
}
*/

//PRINTS FIRST N K-JAGGED/K-ROUGH NUMBERS;
#include<bits/stdc++.h>
using namespace std;

int returnSmallestPrime(int num){
	vector<int> primes;
	for(int p=2;p*p<=num;p++){
		if(num%p ==0){
			primes.push_back(p);
			num/=p;
		}
	}
	if(num>1)
		primes.push_back(num);
	return primes[0];
}

void roughJaggedNumbers(int n,int k){
	int spf = returnSmallestPrime(n);
	if(spf >= k)
		cout<<n<<" is a "<< k << "-rough/jagged number"<<endl;
	}

int main(){
	int n,k;
	cin>>n>>k;
	for(int i=2;i<=n;i++){
		roughJaggedNumbers(i,k);		
	}
}
