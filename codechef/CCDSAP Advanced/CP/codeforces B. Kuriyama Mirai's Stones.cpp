#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef int64_t lli;

void display(lli a[],lli n){
    cout<<"\n";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<"\n";
}

int main(){
    fast;
    lli n,q,val,c,d;
    cin>>n;
    lli a[n+1]={0},na[n+1]={0};
    lli pre[n+1]={0};
    cin>>a[1];
    na[1] = a[1];
    pre[1] = a[1];
    for(int i=2;i<=n;i++){
        cin>>a[i];
        na[i] = a[i];
        pre[i] = a[i]+pre[i-1];
    }
   // display(pre,n);
    //lli na[n] = a;
    sort(a+1,a+n+1);
    lli preSort[n]={0};
    preSort[1] = a[1];
    for(int i=2;i<=n;i++)
        preSort[i] = a[i]+preSort[i-1];
    //display(preSort,n);
    //sort(a,a+)
    cin>>q;
    while(q--){
        cin>>val>>c>>d;
        val==1?cout<<pre[d]-pre[c-1]<<"\n":cout<<preSort[d]-preSort[c-1]<<"\n";
    }

}
