#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,k;
	cin>>t;
	while(t--){
		int count=0;
		cin>>n>>k;
		int a[n];		
		for(int i=1;i<=n;i++)
			cin>>a[i];
		a[0] = 0;
		for(int i=1;i<=n;i++)
		{
			//cout<<"a[i] , a[i+1] ="<<a[i]<<" "<<a[i+1]<<endl;
			if( (a[i] - a[i-1]) > k)
				{
					while( (a[i] - a[i-1]) > k)
						{ 
							a[i-1] = a[i-1] + k;
							count+=1;
						}
				}
			
		}
		cout<<count<<endl;
	}
}
