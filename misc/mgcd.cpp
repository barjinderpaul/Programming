#include<bits/stdc++.h>
using namespace std;

int64_t againexp(int64_t a,int64_t exp, int64_t p){
	int64_t x=0,y=a;
	while(exp>0){
		if(exp%2==1){
			x = (x+y)%p;
		}
		y = (y+y)%p;
		exp/=2;
	}
	return x;
}
int64_t exp(int64_t a,int64_t exp,int64_t p){
	int64_t result=1;
	a%=p;
	while(exp>0){
		if(exp%2==1)
			result = againexp(result,a,p);
		a=againexp(a,a,p);
		exp/=2;
	}
	return result;
}
int main(){
	int t;
	int64_t a,b,n;
	cin>>t;
	while(t--){
		cin>>a>>b>>n;
		int64_t poww = (exp(a,n,1000000007) + exp(b,n,1000000007));
		int64_t diff = a-b;
		if(a==b)
			cout<<poww%1000000007<<endl;
		else{
			cout<<__gcd(diff,(exp(a,n,diff)+exp(b,n,diff))%diff)<<endl;
		}
	}
}
