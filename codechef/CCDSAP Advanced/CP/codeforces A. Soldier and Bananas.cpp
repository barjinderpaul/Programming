#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int lli;
int main(){
    fast;
    lli k,n,w;
    cin>>k>>n>>w;
    lli total=0;
    for(lli i=1; i<=w; i++)
		total+=(i*k);
	if(total<= n)
		cout <<0<<"\n";
	else cout << total - n << "\n";
}
