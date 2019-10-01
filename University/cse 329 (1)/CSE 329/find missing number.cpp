#include<bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int t,n;
	cin>>t;
	while(t--){
		
		cin>>n;
		int a,nSum=0;
		nSum = n*(n+1)/2;
		for(int i=0;i<n-1;i++){
			cin>>a;
			nSum-=a;
		}
		cout<<nSum<<endl;
	}
}
