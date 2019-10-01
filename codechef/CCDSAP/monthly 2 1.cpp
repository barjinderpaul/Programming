#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int	count=0;
		uint64_t e[n];
		bool allSame = true;
		for(int i=0;i<n;i++){
			cin>>e[i];
			if(i>1){
				if(e[i-1]!=e[i])
					allSame=false;
			}
		}
		if(allSame){
			cout<<e[0]*e[0]<<endl;
			continue;
		}
		int i=0,last=n-1;
		while(count<k){
			if(e[i] < e[last]){
				i++;
			}
			else if( e[i] == e[last]){
				int ic=i+1, lc=last-1;
				while(e[ic] == e[lc] && ic!=lc) {
					ic+=1;lc-=1;
				}
				if(e[ic]<e[lc]){
					last--;
				}
				else{
					i++;
				}
				
			}
			else if(e[last] < e[i]){
				last--;
			}
		
			count++;
		}
		if(i==last)
			cout<<e[i]<<endl;
		else
			cout<< (e[i]*e[last])%1000000007<<endl;
	}
}
