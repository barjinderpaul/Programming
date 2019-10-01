//wave form
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,t;
	cin>>t;
	while(t--){
	
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		for(int i=0;i<n;i+=2){
			if(i==n-1)
				break;
			swap(a[i],a[i+1]);
		}
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;		
	}
}
