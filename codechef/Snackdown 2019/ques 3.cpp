#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	long long t,n,m,k,l,*a,temp,ans,s;
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>k>>l;
	    a=new long long[n];
		temp=l*(m+1);
		for(long long i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		ans=temp-a[0];
		for(long long i=1;i<n;i++)
		{
		ans=min(ans,temp-(a[i])+l*i);
	}
	ans=min(ans,l*(m+1+n)-k);
	cout<<ans<<endl;
		
		
	}
}
