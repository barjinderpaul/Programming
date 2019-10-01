#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
typedef int64_t lli;
using namespace std;

lli bigMul(lli a,lli b, lli mod){
    lli finall = 0;
    a %= mod;
    while (b){
        if (b & 1)
            finall = (finall + a) % mod;
        a = (2 * a) % mod;
        b >>= 1;
    }
    return finall;
}

int main(){
    fast;
    lli t,n,e,v1,v2;
    cin>>t;
    while(t--){
        cin>>n;
        e = n-1;
        unordered_map<lli,lli>parent;
        parent[1]=-1;
        lli leaves[n+1]={0};
        unordered_map<lli,lli>ump;
        set<lli>l;
        while(e--){
            cin>>v1>>v2;
            if(leaves[v1]==0){
                leaves[v1]++;
                ump[v1]++;
            }
            else{
                leaves[v1]--;
                ump.erase(v1);
            }
            if(leaves[v2]==0){
                leaves[v2]++;
                ump[v2]++;
            }
            else{
                leaves[v2]--;
                ump.erase(v2);
            }
            parent[v2] = v1;
        }
        lli values[n],mods[n];
        for(int i=1;i<=n;i++)
            cin>>values[i];
        for(int i=1;i<=n;i++)
            cin>>mods[i];
        //cout<<"contents of map\n";
        //for(auto i:ump){
          //  cout<<i.first<<" "<<i.second<<"\n";
        //}
        //cout<<"\n";
        for(auto i:ump){
            //cout<<"first, second = "<<i.first<<" "<<i.second<<"\n";
            //cout<<"leaf = "<<*i<<"\n";
            //leaf found
            lli mul=1;
            lli summ=0;
            summ+=(mul*values[i.first]);
            mul++;
            lli temp=i.first;
            while(parent[temp]!=-1){
                temp = parent[temp];
                summ+=(bigMul(values[temp],mul,1000000007));
                mul++;
            }
            cout<<"sum = "<<summ<<"\n";
            cout<<summ%mods[i.first]<<" ";

        }
        cout<<"\n";
    }
}
