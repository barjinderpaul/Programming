/*
bool checkPrime(uint64_t res){
	int flag=0;
	for(int i=2;i*i<=res;i++)
			if(res%i == 0)
				flag=1;
	if(flag==1)
		return false;
	else
		return true;		
}

int main(){
	int t;
	unsigned long long int a,b,res;
	cin>>t;
	while(t-- > 0){
		cin>>a>>b;
		res = pow(a,2) - pow(b,2);
		if(checkPrime(res))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}
*/
#include<bits/stdc++.h>
using namespace std;

bool checkPrime(uint64_t res){
	int flag=0;
	for(long long i=2;i*i<=res;i++)
			if(res%i == 0)
				return false;
	return true;	
}


int main(){
	int t;
	uint64_t res,a,b;
	cin>>t;
	while(t-- > 0){
		cin>>a>>b;
		if( a-b > 1)
			{
				cout<<"NO"<<endl;
				continue;
			}
		res = (a+b);
		
		if(checkPrime(res))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;		
	}
}
