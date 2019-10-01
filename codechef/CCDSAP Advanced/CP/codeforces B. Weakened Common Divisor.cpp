#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;

void cal(int n,vector<lli>&div,unordered_map<lli,lli>&present){
    int count = 0;
    while (!(n % 2)) {
        n >>= 1; // equivalent to n=n/2;
        count++;
    }
    if (count && present[2]==0){
        present[2]++;
        div.push_back(2);
    }

    for (long long i = 3; i <= sqrt(n); i += 2) {
        count = 0;
        while (n % i == 0) {
            count++;
            n = n / i;
        }
        if (count && present[i]==0){
            present[i]++;
            div.push_back(i);
        }
    }

    if (n > 2 && present[n]==0)
        present[n]++,div.push_back(n);
}

int main(){
    fast;
    lli n,a,b,f=0;
    vector<lli>div;
    unordered_map<lli,lli>mp;
    unordered_map<lli,lli>present;
    cin>>n;
    cin>>a>>b;
    if(n==1){
        cout<<a;
        return 0;
    }
    else{
        cal(a,div,present);
        cal(b,div,present);
    }
    for(int i=1;i<n;i++){
        cin>>a>>b;
        for(int it=0;it<div.size();it++){
            if(a%div[it]==0 || b%div[it]==0)
                mp[div[it]]++;
        }
    }
    for(auto it=mp.begin();it!=mp.end();it++){
       // cout<<it->first<<" "<<it->second<<"\n";
        if( it->second+1 >=n && it->first!=1){
            cout<<it->first;
            f=1;
            break;
        }
    }
    if(!f)
        cout<<-1;

}


