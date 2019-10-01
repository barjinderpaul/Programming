#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef int64_t lli;
int main(){
    fast;
    lli n,k;
    cin>>n>>k;
    if(n%2==0){
        if(k<=n/2)
            cout<<2*k-1;
        else
            cout<<2*(k-n/2);
    }
    else
        if(k<=(n/2+1))
            cout<<2*k-1;
        else
            cout<<2*(k-(n/2+1));

}
