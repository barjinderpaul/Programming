#include<bits/stdc++.h>
using namespace std;
void findFactorSum(uint64_t n){
	uint64_t sum=0;
	for(uint64_t i=1;i*i<=n;i++){
		if(n%i==0){
		//	cout<<"i = "<<i<<"n/i"<<n/i<<endl;
			if(i==(n/i))
				sum+=i;
			else
				sum+=(i+n/i);
		}
	}
	cout<<sum<<endl;
}
int main(){
	uint64_t t,n;
	cin>>t;
	while(t--){
		cin>>n;
		findFactorSum(n);
	}
}
