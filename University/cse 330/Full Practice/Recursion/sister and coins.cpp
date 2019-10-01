#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,m;
	cin>>t;
	while(t--){
		int sum=0,maxx=0;
		cin>>n>>m;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]>maxx)
				maxx=a[i];
			sum+=a[i];
		}
		//cout<<"sum = "<<sum<<endl;
		//cout<<"max = "<<maxx<<endl;
		if(sum-maxx>m)
			cout<<"0"<<endl;
		else if(sum==m)
			cout<<"1"<<endl;
		else{
			//sort(a,a+n);
			sum=0;
			for(int i=0;i<n;i++){
				sum+=a[i];
				if(m+sum == maxx-sum){
					cout<<"1"<<endl;
					break;
				}
				sum-=a[i];
			}
			
		}
		
	}
}
