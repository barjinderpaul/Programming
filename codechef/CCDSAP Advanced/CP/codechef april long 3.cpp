#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef int64_t lli;
int main(){
    fast;
    lli t,r,c,k;
    cin>>t;
    while(t--){
        set<pair<lli, lli> >se;
        unordered_map<lli, unordered_map<lli, lli> >ump1;
        unordered_map<lli, unordered_map<lli, lli> >visited;
        cin>>r>>c>>k;
        for(lli i=0;i<k;i++){
            lli v1, v2;
            cin>>v1>>v2;
            se.insert(make_pair(v1,v2));
            ump1[v1][v2] = 1;
        }
        lli peri=0;
        while(!se.empty()){
            lli presentXs=0;
            queue<pair<lli, lli> >qp;
            qp.push(*(se.begin()));
            se.erase(*(se.begin()));
            while(!qp.empty()){
                pair<lli, lli> t = qp.front();
                qp.pop();
                lli x = t.first, y=t.second;
                if(visited[x][y])
                    continue;
                visited[x][y] = 1;
                se.erase({x,y});
                if(!ump1[x-1][y])
                    presentXs++;
                if(!ump1[x][y-1])
                    presentXs++;
                if(!ump1[x+1][y])
                    presentXs++;
                if(!ump1[x][y+1])
                    presentXs++;
                if(ump1[x][y+1])qp.push({x, y+1});
                if(ump1[x+1][y])qp.push({x+1, y});
                if(ump1[x][y-1])qp.push({x, y-1});
                if(ump1[x-1][y])qp.push({x-1, y});
            }
            peri+=presentXs;
            presentXs=0;
        }
        cout<<peri<<"\n";

    }
}

