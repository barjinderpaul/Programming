#include<iostream>
using namespace std;
int main(){
	int testCases;
	cin>>testCases;
	for(int i=0;i<testCases;i++){
		long long int p1,p2,k,kSqr,sum=0;
		cin>>p1>>p2>>k;
		sum=p1+p2;
		kSqr=k*2;
		long long int rem=sum%kSqr;
		if(rem>=0 && rem<k)
			cout<<"CHEF"<<"\n";
		if(rem>=k && rem<kSqr)
			cout<<"COOK"<<"\n";
	}
}
