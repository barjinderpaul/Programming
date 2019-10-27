#include<bits/stdc++.h>
#define lli long long int 
using namespace std;
int main(){
	lli t,n,k,val;
	cin>>t;
	while(t--){
		vector<lli>v;
		cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>val;
			v.push_back(val);
		}
		sort(v.begin(),v.end());
		double ans;
		double sum=0;
		for(int i=k;i<n-k;i++){
			sum+=v[i];
		}
		ans=sum/(n-2*k);
		printf("%6f\n",ans);
	}
}
