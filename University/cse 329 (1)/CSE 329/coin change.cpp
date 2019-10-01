#include<bits/stdc++.h>
using namespace std;
long retAns( long a[], long length, long cap ){ 
    if (cap == 0) {
        return 1;
	}
    if (cap < 0) {
        return 0;
	}
    if (length <=0 && cap >= 1) {
        return 0; 
    }
    return retAns( a, length - 1, cap ) + retAns( a, length, cap-a[length-1] ); 
} 
int main() 
{ 
    long n,toChange;
	cin>>n>>toChange;
	long a[n];
	for(long i=0;i<n;i++)
		cin>>a[i];
	cout<<retAns(a,n,toChange); 
    return 0; 
} 
