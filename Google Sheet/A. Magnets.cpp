#include<bits/stdc++.h>
using namespace std;
int main(){
	uint64_t value,n,groups=0;
	cin>>n;
	uint64_t a[n];
	cin>>value;
	a[0] = value;
	for(uint64_t i=1;i<n;i++)
	{
		cin>>a[i];
		if( (a[i]%10) !=  (a[i-1]%10) )
			{
				groups+=1;
				continue;
			}

	}	
	cout<<groups+1;
}
