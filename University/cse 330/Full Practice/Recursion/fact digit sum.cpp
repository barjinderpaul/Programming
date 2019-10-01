#include<bits/stdc++.h>
using namespace std;
int fact[10] = {1,1,2,6,24,120,720,5040,40320,362880};
void factDigitSum(int n, vector<int>&v,int d){
	if(n==0)
		return;
	if(fact[d] > n){
		d--;
		factDigitSum(n,v,d);
	}
	else{
		n-=fact[d];
		v.push_back(d);
		factDigitSum(n,v,d);
	}
}
int main(){
	uint64_t t,n;
	cin>>t;
	while(t--){
		cin>>n;
		vector<int> v;
		factDigitSum(n,v,9);
		for(int i=v.size()-1;i>=0;i--)
			cout<<v[i];
		cout<<endl;
	}
}
