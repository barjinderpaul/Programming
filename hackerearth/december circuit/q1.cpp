#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
uint64_t fast_power(uint64_t base, uint64_t exp) {
     uint64_t x = 1;
    uint64_t i;
    uint64_t power = base % MOD;

    for (i = 0; i < sizeof(uint64_t) * 8; i++) {
        uint64_t least_sig_bit = 0x00000001 & (exp >> i);
        if (least_sig_bit)
            x = (x * power) % MOD;
        power = (power * power) % MOD;
    }

    return x;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	uint64_t t;
	uint64_t n,k;
	cin>>t;
	while(t--){
		uint64_t flag=0;
		cin>>n>>k;
		uint64_t count=0,i=1;
		while(count<=n){
			count+=fast_power(k,i);
			if(count>n){
				cout<<"Bob"<<endl;
				flag=1;
				break;
			}
			count+=fast_power(k,i);
			i+=1;
		}
		if(flag!=1)
			cout<<"Alice"<<endl;		
	}
}
