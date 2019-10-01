#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	for(int tt=0;tt<t;tt++){
		long long int p1,p2,k,k_sqr,sum=0;
		cin>>p1>>p2>>k;
		sum=p1+p2;
		k_sqr=k*2;
		long long int rem=sum%k_sqr;
		if(rem>=0 && rem<k)
			cout<<"CHEF"<<"\n";
		if(rem>=k && rem<k_sqr)
			cout<<"COOK"<<"\n";
	}
}
