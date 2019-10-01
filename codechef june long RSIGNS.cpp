#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
#define mod 1000000007
using namespace std;
typedef int64_t lli;

lli ans(lli n){
    n-=1;
    lli b = 2,res=1;
    while(n){
        if(n&1)
            res = (res*b)%mod;
        n = n>>1;
        b = (b*b)%mod;
    }
    return res%mod;
}

int main(){
    fast;
    lli t,k;
    cin>>t;
    while(t--){
        cin>>k;
        cout<<ans(k)*10<<"\n";
    }

}
