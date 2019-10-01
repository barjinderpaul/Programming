#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;
int main(){
    lli n,x;
    cin>>n>>x;
    lli a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    lli hours=0;
    for(int i=0;i<n;i++){
        hours+=(a[i]*x);
        if(x>1)
            x--;
    }
    cout<<hours;
}
