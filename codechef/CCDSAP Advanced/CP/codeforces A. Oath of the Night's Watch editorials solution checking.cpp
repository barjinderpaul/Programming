#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
	int n,c1=0,c2=0,mx=0,mn=1000000007;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		mx=max(mx,a[i]),mn=min(mn,a[i]);
	}
	cout<<"mx , mn = "<<mx<<" "<<mn<<"\n";
	for(int i=0;i<n;i++)
	{
		if(a[i]==mx) c1++;
		if(a[i]==mn) c2++;
	}
	if(mx==mn) cout<<0;
	else cout<<(n-c1-c2);
	return 0;
}
