#include<iostream>
#include<vector>
using namespace std;

//CHECK WHETHER P-SMOOTH OR NOT
/*
void checkPsmooth(int n,int p){
	vector<int> primes;
	while(n%2 ==0 ){
		primes.push_back(2);
		n/=2;
	}
	for(int i=3;i*i<=n;i++){
		while(n%i == 0){
			primes.push_back(i);
			n/=i;
		}
	}
	if(n>2){
		primes.push_back(n);
	}
	if(primes[primes.size()-1] <= p)
		cout<<"p-smooth number";
	else
		cout<<"not a p-smooth number";
	
}

int main(){
	int p,n;
	cin>>n>>p;
	checkPsmooth(n,p);		
}
*/

//CHECK P-SMOOTH IN RANGE :

int checkPsmooth(int n){
	vector<int> primes;
	if(n==1)
		primes.push_back(1);
	while(n%2 ==0 ){
		primes.push_back(2);
		n/=2;
	}
	for(int i=3;i*i<=n;i++){
		while(n%i == 0){
			primes.push_back(i);
			n/=i;
		}
	}
	if(n>2){
		primes.push_back(n);
	}
	return primes[primes.size()-1];
	
}

int main(){
	int p,leftRange,rightRange;
	cin>>leftRange>>rightRange>>p;
	for(int i=leftRange;i<=rightRange;i++){
		if(checkPsmooth(i) <= p)
			cout<<" i = "<<i<<" GPF ="<<checkPsmooth(i)<<" p = " <<p<<endl;
		else
			continue;
	}		
}
