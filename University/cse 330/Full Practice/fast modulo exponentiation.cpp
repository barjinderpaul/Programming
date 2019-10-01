#include<bits/stdc++.h>
using namespace std;

int returnMod(int base, int exp){
	int t=1;
	while(exp>0){
		if(exp%2!=0)
			t = (t*base)%1000000007;
		base = (base * base)%1000000007;
		exp/=2;		
	}
	return t%1000000007;
}

int main(){
	int base;
	int exp;
	cin>>base>>exp;
	int mod = returnMod(base,exp);
	cout<<mod<<endl;
}
