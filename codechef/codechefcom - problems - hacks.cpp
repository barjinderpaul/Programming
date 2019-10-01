#include<bits/stdc++.h>
using namespace std;
int main(){
	uint64_t f[100];
	f[0] = 0;
	f[1] = 1;
	for(int i=2;i<100;i++){
		f[i]  = f[i-1] + f[i-2];
	}
	uint64_t t;
	cin>>t;
	while(t--){
		uint64_t a,b;
		cin>>a>>b;
		while(1){
		if((a==0 || b==0))
			break;
		else if(a>b)
			a%=b;
		else
			b%=a;
		}
	if(a==0 )
		cout<<f[b]<<"\n";
	else	
		cout<<f[a]<<"\n";
		}
	return 0;
}
