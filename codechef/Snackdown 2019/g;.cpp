#include<iostream>
using namespace std;
int main()
{   
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long *a,t,n,mid,beg,end,count,i;
	cin>>t;
	while(t--)
	{
		count=0;
		beg=0;
		cin>>n;
		a=new long long[n];
		for(long long i=0;i<n;i++)
		cin>>a[i];
		for(long long i=1;i<n;i++)
		{
		
		if(a[i]<a[i-1])
		count++;
		if(count==2)
		break;
		}
	//	cout<<n<<beg<<endl;
		if(count==1 && a[0]>=a[n-1])
		cout<<"YES"<<endl;
		else if(count==0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
		
}
}

