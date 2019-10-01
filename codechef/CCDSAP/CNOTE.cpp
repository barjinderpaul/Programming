#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long int t,x,y,k,n;
	cin>>t;
	while(t--){
		cin>>x>>y>>k>>n;
		long long int p[n],c[n],flag=0;
		long long int pages = x-y;
		for(long long int i=0;i<n;i++){
			cin>>p[i]>>c[i];
		}
		for(long long int i=0;i<n;i++){
			if(c[i]<=k && p[i]>=pages){
				flag=1;
				break;
			}
		}
		
		if(flag==1)
			cout<<"LuckyChef"<<endl;
		else
			cout<<"UnluckyChef"<<endl;	
	}
}
