#include<bits/stdc++.h>
using namespace std;
uint64_t p=1000000007;
uint64_t calcExpo(uint64_t base, uint64_t expo){
	uint64_t t=1;
	while(expo > 0){
		if(expo%2!=0)
			t = (t*base) % p;
	base = (base*base)%	p;
		expo /= 2; 
		
	}
	return t%p;
}

int main(){
	uint64_t base,expo;
	cin>>base>>expo;
	cout<<calcExpo(base,expo);
}
