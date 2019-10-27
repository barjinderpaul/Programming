#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,sum=0,sum1=0;
	cin>>n;
	int a[n];
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	if(sum%2==0)
		sum = sum/2;
	else
		sum = sum/2 + 1;
	for(int i=1;i<=n;i++)
	{
		sum1+=a[i];
		if(sum1>=sum)
			{
			cout<<i;
			break;
		}
	}
}
