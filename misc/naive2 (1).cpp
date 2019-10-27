#include<bits/stdc++.h>
using namespace std;
int main()
{
	string t,p;
	cin>>t>>p;
	int n=t.size(),m=p.size();
	int j=0,flag=0;
	for(int i=0;i<=n-m;i++)
	{
		for(j=0;j<m;j++)
		{
			if(t[j+i]!=p[j])
				break;
		}
		if(j==m){
			cout<<i<<" ";
			flag=1;
		}
	}
	if(flag==0)
	{
		cout<<-1;
	}
}
