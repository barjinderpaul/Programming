#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
typedef int64_t lli;
using namespace std;
unordered_map<string,int>mp;

int main(){
    fast;
    lli n,k,val;
    cin>>n>>k;
    vector<lli>v;
    string name;
    for(int i=0;i<n;i++)
        cin>>name>>val,mp[name]+=val;
    for(auto it : mp){
        v.push_back(it.second);
    }
    sort(v.begin(),v.end(),greater<lli>());
    lli cost=0;
    for(auto i : v){
        if(k>0)
            cost+=i,k--;
        else
            break;
    }
    cout<<cost<<"\n";


}
