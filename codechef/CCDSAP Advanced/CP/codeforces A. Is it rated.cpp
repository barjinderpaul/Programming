#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef int64_t lli;
int main(){
    fast;
    lli n,v1,v2;
    vector<pair<lli,lli>>v;
    cin>>n;
    int ratingChanged=0,foundIncreasing=0;
    for(int i=0;i<n;i++){
        cin>>v1>>v2;
        if(v1!=v2){
            ratingChanged=1;
        }
        v.push_back(make_pair(v1,v2));
    }
    if(ratingChanged){
        cout<<"rated";
        return 0;
    }
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[j].first > v[i].first){
                foundIncreasing=1;
                break;
            }
        }
    }
    foundIncreasing==1?cout<<"unrated":cout<<"maybe";

}
