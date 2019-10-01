#include<bits/stdc++.h>
using namespace std;

uint64_t returnMod(uint64_t base, uint64_t exp, uint64_t p){
	uint64_t t=1;
	base = base % p;
	while(exp>0){
		if(exp%2!=0)
			t = (t*base)%p;
		base = (base * base)%p;
			exp/=2;
	}
	return t%p;
}

int main(){
	uint64_t base,exp,p;
	cin>>base>>exp>>p;
	uint64_t ans = returnMod(base,exp,p);
	cout<<ans<<endl;
}
