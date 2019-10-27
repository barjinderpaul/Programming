#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		string s;
		cin>>s;
		int mark[100001<<1]={0};
		int curr=0;
		int ans=0;
		for(int i=0;i<n;i++){
			curr+=mark[i];
			if( (s[i]=='R' && curr%2==0) || ( s[i]=='G' && curr%2==1 ) ){
				ans+=1;
				mark[i+1]++;
				mark[i+k]--;
			}
		}
		cout<ans<<endl;
	}
	
}
