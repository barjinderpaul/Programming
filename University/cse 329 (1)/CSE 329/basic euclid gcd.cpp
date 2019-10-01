#include<bits/stdc++.h>
using namespace std;

int euclidGCD(int a,int b){
	if(a==0)
		return b;
	return euclidGCD(b%a,a);
}

int main(){
	int a,b;
	cin>>a>>b;
	cout<<euclidGCD(a,b)<<endl;
	cout<<__gcd(a,b);
}
