#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long *a,n,t,num,i,save,days;
	cin>>t;
	while(t--)
	{
		num=1,save=0,days=0;
		cin>>n;
		a=new long long[n];
		for(long long i=0;i<n;i++)
		cin>>a[i];
		for(long long i=1;i<n;i++)
		a[i]=a[i-1]+a[i];
		while(num<n)
		{
			num=num+a[num-1];
			days++;
		}
     cout<<days<<endl;
		     
		
	}
}

