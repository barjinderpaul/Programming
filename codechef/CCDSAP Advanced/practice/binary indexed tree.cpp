#include<bits/stdc++.h>
using namespace std;

void updateBIT(int i, int incVal, int n,int bit[]){
    while(i<=n){
        bit[i]+=incVal;
        i+=(i&(-i));
    }
}

//sum till ith index;
int query(int i, int bit[]){
    int ans=0;
    while(i>0){
        ans+=bit[i];
        i-=(i&(-i));
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int a[n+1],bit[n+1]={0};
    for(int i=1;i<=n;i++){
        cin>>a[i];
        updateBIT(i,a[i],n,bit);
    }

    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<query(r,bit) - query(l-1,bit)<<"\n";
    }
}
