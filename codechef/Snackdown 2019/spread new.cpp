#include<bits/stdc++.h>
using namespace std;
int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	long long *a,n,t,num,i,save,days,value;
	cin>>t;
	while(t--)
	{
		num=1,save=0,days=0;
		cin>>n;
		a=new long long[n];
		cin>>value;
		a[0]=value;
		for(long long i=1;i<n;i++)
		{
			cin>>value;
			a[i] = value + a[i-1];
		}
		while(num<n)
		{
			num+=a[num-1];
			days++;
		}
     cout<<days<<"\n";
		     
		
	}
}

