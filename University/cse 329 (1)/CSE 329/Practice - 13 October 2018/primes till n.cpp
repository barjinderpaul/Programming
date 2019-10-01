#include<iostream>
#include<vector>
using namespace std;
vector<int> primeNumbers;
void primes(int n){
	bool primes[n+1];

	primes[0] = primes[1] =false;
	for(int i=2;i<n;i++)
		primes[i] = true;
	
	for(int i=2;i*i<=n;i++){
		if(primes[i] == true){
			for(int j=i*i;j<=n;j+=i)
				primes[j]=false;
		}
	}
	for(int i=2;i<n;i++)
		if(primes[i] == true)
			primeNumbers.push_back(i);
			
			cout<<primeNumbers.size();
}

int returnAns(int l,int r){
	return primeNumbers[r] - primeNumbers[l-1]; 
}
	
int main(){
	int n,t,left,right;
	primes(12);
	cin>>t;
	while(t--){
		cin>>left>>right;
		cout<<returnAns(left,right)<<endl;
	}
}
