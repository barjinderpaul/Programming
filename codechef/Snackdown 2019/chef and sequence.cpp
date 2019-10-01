#include<bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	uint64_t t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		uint64_t a[n],sumSquare=0,sum=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n,greater<int>());
		for(int i=0;i<k;i++)
			a[i] = 1;
		for(int i=0;i<n;i++){
			sumSquare += a[i]*a[i];
			sum +=a[i];
		}
		if(sumSquare<=sum)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}
