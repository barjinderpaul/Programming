#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef int64_t lli;
int main(){
    fast;
    lli n,p,q;
    cin>>n;
    set<pair<lli,lli>>s;
    for(int i=0;i<n;i++){
        cin>>p>>q;
        s.insert(make_pair(p,q));
    }
    int i=0;
    for(auto it=s.begin();it!=s.end();it++){
        if(i==s.size()-1)
            break;
        auto it2 = it;
        it2++;
        //cout<<it->second<<" "<<it2->second<<"\n";
        if(it->second > it2->second){
            cout<<"Happy Alex";
            return 0;
        }
        i++;
    }
    cout<<"Poor Alex";
}
