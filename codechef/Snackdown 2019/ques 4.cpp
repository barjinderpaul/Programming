#include<bits/stdc++.h>
using namespace std;

bool check(long long a[],long long n)
{
	for(long long i=0;i<n;i++)
	if(a[i]!=0)
	return false;
	else
	return true;
}
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	long long *a,*b,*c,t,n,diff,op,x,y;
	cin>>t;
	while(t--)
	{
		diff=0,op;
		cin>>n;
		a=new long long[n];
		b=new long long[n];
		c=new long long[n];
		for(long long i=0;i<n;i++)
		cin>>a[i];
		for(long long i=0;i<n;i++)
		cin>>b[i];
		for(long long i=0;i<n;i++)
		{
			c[i]=b[i]-a[i];
			diff=diff+c[i];
		}
		op=diff/6;
		x=n-1;
		//cout<<diff<<endl;
		if(diff%6!=0)
		cout<<"NIE"<<endl;
		else
		{
			while(op!=0)
			{
				if(c[x]%3!=0 || x<=1)
				break;
				if(c[x]!=0){
				y=c[x]/3;	
				c[x]=c[x]-3*y;
				c[x-1]=c[x-1]-2*y;
				c[x-2]=c[x-2]-1*y;
				op-=y;
				x--;
				//cout<<op<<"  "<<c[x]<<endl;
				}
				else
				x--;
				}
			
			//for(int i=0;i<n;i++)
		//	cout<<c[i];
			if(check(c,n) && op==0)
			cout<<"TAK"<<endl;
			else
			cout<<"NIE"<<endl;}
		}
		
	}


