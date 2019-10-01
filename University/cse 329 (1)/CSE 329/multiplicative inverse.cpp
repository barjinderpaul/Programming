#include<bits/stdc++.h>
using namespace std;

int multiplicativeInverse(int a,int m){
	a = a % m;
	for(int i=1;i<m;i++)
		if((a*i)%m==1)
			return i;
}

int main(){
	int a,m;
	cin>>a>>m;
	if(__gcd(a,m)==1)
		cout<<multiplicativeInverse(a,m);
	else
		cout<<"-1"<<endl;
}
