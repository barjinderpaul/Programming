#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll primes[] = {2,3,5,7,11,13,17,19};
    ll n;
    cin>>n;
    ll subsets = (1<<3)-1,ans=0;    //2^n-1
    for(ll i=1;i<=subsets;i++){
        ll denom = 1ll;
        ll setBits = __builtin_popcount(i);

        //because subset size = 8,therefore at max 7bit positions
        for(ll j=0;j<=3;j++){
            if( i&(i<<j) )
                cout<<j<<" ";
                //denom = denom*primes[j];
        }
        if(setBits&1){
            ans+=n/denom;
        }
        else
            ans-=n/denom;
        cout<<"\n";

    }
  //  cout<<ans;
}
