#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	lli n,t;
	cin>>t;
	while(t--){
		cin>>n;
		lli a[n];
		for(lli i=0;i<n;i++)
			cin>>a[i];
		if(next_permutation(a,a+n)){
			for(lli i=0;i<n;i++)
				cout<<a[i];
			cout<<endl;
		}else{
			cout<<-1<<endl;
		}
	}

}
