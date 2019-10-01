#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef int64_t lli;
int main(){
    fast;
    lli n;
    cin>>n;
    lli a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    if(n==1){
        cout<<1;
        return 0;
    }
    if(n==2){
        cout<<2;
        return 0;
    }
    lli maxSeg=2,c=2;
    for(int i=2;i<n;i++){
        if(a[i] == a[i-1]+a[i-2])
            c==0?c=3:c+=1;
        else
            c=0;
        maxSeg = max(maxSeg,c);
    }
    cout<<maxSeg;

}
