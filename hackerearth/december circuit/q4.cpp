#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	long long int a[n],l,r,x;
	for(long long int i=1;i<=n;i++)
		cin>>a[i];
	long long int m;
	cin>>m;
	while(m--){
		long long int count=0;
		cin>>l>>r>>x;
		for(long long int i=l;i<=r;i++){
			for(long long int j=l;j<=r;j++){
				for(long long int k=l;k<=r;k++){
					long long int sub = a[i]&a[j]&a[k];
					//long long int final = sub&a[k];
					if(sub==x)
						count+=1;
				}
			}
		}
		cout<<count%1000000007<<endl;
	}
	
}
