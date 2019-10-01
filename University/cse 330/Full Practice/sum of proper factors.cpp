#include<bits/stdc++.h>
using namespace std;
void findFactorSum(int n){
	int sum=0;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
//			cout<<"i = "<<i<<"n/i"<<n/i<<endl;
			if(i==(n/i))
				sum+=i;
			else
				sum+=(i+n/i);
		}
	}
	cout<<sum+1;
}
int main(){
	int n;
	cin>>n;
	findFactorSum(n);
}
