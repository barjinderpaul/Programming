#include<bits/stdc++.h>
using namespace std;

int gpf(int n){
	vector<int>pf;
	if(n%2==0){
		pf.push_back(2);
		while(n%2==0)
			n/=2;
	}
	for(int i=3;i*i<=n;i++){
		if(n%i==0){
			pf.push_back(i);
			while(n%i==0)
				n/=i;
		}
	}
	if(n>2)
		pf.push_back(n);
	return pf[pf.size()-1];
}

int main(){
	int n;
	cin>>n;
	int count=0,i=1;
	while(count<n){
		if(gpf(i*i+1) >= 2*i)
			{
			cout<<i<<" ";
			count++;
			}
		i++;
	
	}
}
