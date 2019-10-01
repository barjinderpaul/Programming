#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;

bool cmp(pair<lli,lli>a,pair<lli,lli>b){
    if(a.second!=b.second)
        return a.second>b.second;
    return a.first>b.first;
}
int main(){
    fast;
    lli m,n,a,b,f,s;
    cin>>n>>m;
    vector<pair<lli,lli>>vp;
    while(m--){
        cin>>a>>b;
        vp.push_back(make_pair(a,b));
    }
    sort(vp.begin(),vp.end(),cmp);
    lli totalMatches=0;
    for(auto it=vp.begin();it!=vp.end();it++){
        f = it->first,s=it->second;
        //cout<<"f,s = "<<f<<s<<"\n";
        if(n<=0)
            break;
        if(n>f){
            n-=f;
            totalMatches+=(f*s);
        }
        else{
            totalMatches+=(n*s);
            n-=n;
        }
    }
    cout<<totalMatches;
}
