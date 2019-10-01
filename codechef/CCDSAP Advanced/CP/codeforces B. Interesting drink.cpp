#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef int64_t lli;
int main(){
    lli n,val;
    cin>>n;
    vector<lli>v;
    for(int i=0;i<n;i++){
        cin>>val;
        v.push_back(val);
    }
    sort(v.begin(),v.end());
    lli q;
    cin>>q;
    while(q--){
        cin>>val;
        cout<<upper_bound(v.begin(),v.end(),val)-v.begin()<<"\n";
    }
    return 0;

}
