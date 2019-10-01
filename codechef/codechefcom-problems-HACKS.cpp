#include<bits/stdc++.h>
using namespace std;
int main(){
	int f[100000];
	f[0] = 0;
	f[1] = 1;
	for(int i=2;i<100000;i++){
		f[i]  = f[i-1] + f[i-2];
	}
	int t,a,b;
	cin>>t;
	while(t-- > 0){
		cin>>a>>b;
		if(a==0 || b==0)
			{
			cout<<1;
			break;
		}
		cout<<f[a] * (a-b) + f[b] * (1);
	}
	return 0;
}
