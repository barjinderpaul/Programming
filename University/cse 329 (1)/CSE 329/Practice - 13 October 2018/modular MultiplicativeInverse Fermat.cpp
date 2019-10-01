#include<bits/stdc++.h>
using namespace std;

uint64_t moduloExponential(uint64_t base, uint64_t expo, uint64_t p){
	uint64_t t=1;
	base %= p;
	while(expo > 0){
		if(expo%2!=0)
			t = (t*base) % p;
		base = (base*base)%p;
		expo /= 2; 
		
	}
	return t%p;
}



int modularMultiplicativeInverse(int a,int m)
{
	if(__gcd(a,m)!=1)
		cout<<"No inverse found";
	else{
		cout<<moduloExponential(a,m-2,m);
	}
}
int main(){
	int a,m;
	cin>>a>>m;
	modularMultiplicativeInverse(a,m);
}
