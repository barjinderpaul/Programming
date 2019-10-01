#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
typedef int64_t lli;
using namespace std;

lli displayPath(deque<lli>path,lli maxx){
    /*cout<<"Path : ";
    for(lli x:path){
        cout<<x<<" ";
    }*/
    if(maxx-path.back()==1)
        return path.back();
    else{
        int f=0,l=path.size()-1;
        //cout<<"f, l = "<<f<<" "<<l<<"\n";
        lli summ=0;
        while(f<=l){
            //cout<<"f, l = "<<f<<" "<<l<<"\n";
            if(summ==maxx-1)
                return summ;
            if(summ+path.back()>maxx){
                l--;
                continue;
            }
            if(summ+path.back()<maxx){
                summ+=path.back();l--;
                path.pop_back();
            }
            if(summ+path.front()>maxx){
                f++;
                path.pop_front();
                return summ;
            }
            if(summ+path.front()<maxx){
                summ+=path.front();
                path.pop_front();
            }

        }
    return summ;
    //cout<<"else\n";
   }
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
        map<lli,lli>ump;
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
            //cout<<"leaf = "<<i<<"\n";
            //leaf found
            lli mul=1;
            //vector<lli>pathVal;
            deque<lli>pathVal;
            bool allDiv=0;
            lli totalSum=0;
            pathVal.push_front(values[i.first]);
            totalSum+=(values[i.first]);
            lli temp = i.first;
            if(values[i.first]%mods[i.first]==0)
                allDiv=true;
            while(parent[temp]!=-1){
                temp = parent[temp];
                if(values[temp]%mods[i.first]!=0)
                    allDiv=false;
                pathVal.push_front(values[temp]);
                totalSum+=values[temp];
            }
            //cout<<"totalSum , alldiv "<<allDiv<<" "<<totalSum<<"\n";
            if(allDiv)
                cout<<0<<" ";
            else if(totalSum<mods[i.first])
                cout<<totalSum<<" ";
            else
                cout<<displayPath(pathVal,mods[i.first]);
            //cout<<summ%mods[i.first]<<" ";

        }
        cout<<"\n";
    }
}
