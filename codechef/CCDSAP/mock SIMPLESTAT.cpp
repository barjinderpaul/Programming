#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,k,n;
	cin>>t;
	while(t--){
		cin>>n>>k;
		long long int a[n];
		for(int i=1;i<=n;i++)
			cin>>a[i];
		sort(a,a+n);
		long long int summ=0;
		for(int i=k+1;i<=(n-k);i++)
			summ+=a[i];
		cout<<"summ"<<summ<<endl;
	}
}
