#include<bits/stdc++.h>

using namespace std;
int main(){
	int t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int *a = new int[n];
		int count=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			a[i] += k;
		}
		for(int i=0;i<n;i++)
			if(a[i]%7==0)
				count+=1;
		cout<<count<<endl;
		free(a);
	}
	
}
