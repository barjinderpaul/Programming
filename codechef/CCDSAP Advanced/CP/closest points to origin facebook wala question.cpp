#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>a, pair<int,int>b){
    if(a.first*a.first + a.second*a.second > b.first*b.first + b.second*b.second)
        return a.first<b.second;

}

int main(){
    vector<pair<int,int>>v;
    int n,x,y;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end(),cmp);
    int k;
    cin>>k;
    for(int i=0;i<k;i++){
        cout<<v[i].first<<" " <<v[i].second<<"\n";
    }
}
