#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
	lli n;
	cin>>n;
	lli a[n];
	for(lli i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	for(lli i=0;i<n;i++)
		cout<<a[i]<<endl;
}
