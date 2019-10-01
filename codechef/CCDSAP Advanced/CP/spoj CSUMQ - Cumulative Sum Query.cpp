#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    lli n;
    cin>>n;
    lli a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    lli q;
    cin>>q;
    lli pref[n]={0};
    pref[0] = a[0];
    for(int i=1;i<n;i++){
        pref[i]+=(a[i]+pref[i-1]);
    }
    //printing prefix array;
    /*for(auto x:pref){
        cout<<x<<" ";
    }*/
    lli ab,b;
    while(q--){
        cin>>ab>>b;
        if(ab==b)
            cout<<a[ab]<<"\n";
        else if(ab==0){
            cout<<pref[b]<<"\n";
        }
        else{
            cout<<pref[b]-pref[ab-1]<<"\n";
        }
    }

}
