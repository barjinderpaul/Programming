#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef int64_t lli;
int main(){
    fast;
    lli n,k,l,r,total=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>l>>r;
        total+=(r-l+1);
    }
    if(total%k==0)
        cout<<0;
    else{
        cout<<k-(total%k);
    }

}
