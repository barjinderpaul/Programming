#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int lli;
int main(){
    fast;
    lli n,val;
    vector<lli>v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        v.push_back(val);
    }
    for(int i=0;i<n;i++){
        if(i==0)
            cout<<abs(v[0]-v[1])<<" "<<abs(v[0] - v[v.size()-1])<<"\n";
        else if(i==n-1)
            cout<<abs(v[v.size()-1]- v[v.size()-2])<<" "<<abs(v[v.size()-1] - v[0])<<"\n";
        else{
            lli fmin = abs(v[i] - v[i+1]);
            lli bmin  = abs(v[i]- v[i-1]);
            cout<<min(fmin,bmin)<<" ";
            lli fmax = abs(v[i] - v[v.size()-1]);
            lli bmax = abs(v[i] - v[0]);
            cout<<max(fmax,bmax);
            cout<<"\n";
        }
    }
}
