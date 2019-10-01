#include<bits/stdc++.h>
using namespace std;
vector<int> primeNumbers;
void productUsingSieveOfEratosthenes(int n){
	bool primes[n+1];
//	uint64_t product=1;
	primes[0]=false;primes[1]=false;
	for(int i=2;i<=n;i++){
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
int main(){
	int t,n;
	productUsingSieveOfEratosthenes(100001);
	cin>>t;
	while(t--){
		cin>>n;
	//	cout<<"prime[n-1] = "<<primeNumbers[n-1]<<"n = "<<n<<endl;
		cout<<(primeNumbers[n-1]+1)*n<<endl;
	}
	
}
