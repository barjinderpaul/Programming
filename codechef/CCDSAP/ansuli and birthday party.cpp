#include<bits/stdc++.h>
using namespace std;

long long int calcExp(long long int base, long long int exp, long long int mod){
	long long int result=1;
	while(exp>0){
		if(exp%2==1)
			result=(result*base)%mod;
		base = (base*base)%mod;
		exp/=2;
	}
	return result;
}

int main(){
	int64_t base,exp,mod=1000000007,t;
	cin>>t;
	while(t--){
		cin>>base>>exp;
		cout<<calcExp(base,exp,mod)<<endl;
	}
}
