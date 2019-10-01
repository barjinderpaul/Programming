/*     //DFS and BFS with adjacency list
#include<bits/stdc++.h>
using namespace std;

void bfs(list<int>*adj ,int v, int source){
    int vis[v+1]={0};
    queue<int>q;
    q.push(source);
    while(!q.empty()){
        int f = q.front();
        q.pop();
        vis[f]=1;
        cout<<f<<" ";
        for(auto it=adj[f].begin();it!=adj[f].end();it++){
            if(!vis[*it])
                q.push(*it);
        }
    }
}

void dfs(list<int>*adj, int *vis, int source){
    cout<<source<<" ";
    vis[source]=1;
    for(auto it=adj[source].begin();it!=adj[source].end();it++)
        if(!vis[*it])
            dfs(adj,vis,*it);
}

int main(){
    int v,e,v1,v2;
    cin>>v>>e;
    list<int>adj[v+1];
    for(int i=0;i<e;i++){
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }
    cout<<"\nEnter the source\n";
    int source;
    cin>>source;
    cout<<"BFS\n";
    bfs(adj,v,source);
    cout<<"DFS\n";
    int vis[v+1]={0};
    cout<<"DFS\n";
    dfs(adj,vis,source);

}
*/

/*    //Number of components in a graph
#include<bits/stdc++.h>
using namespace std;

void dfs(list<int>*adj, int *vis, int source){
    vis[source]=1;
    for(auto it=adj[source].begin();it!=adj[source].end();it++){
        if(!vis[*it]){
            dfs(adj,vis,*it);
        }
    }
}

int main(){
    int v1,v2,v,e;
    cin>>v>>e;
    list<int>adj[v+1];
    for(int i=0;i<e;i++){
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }

    int connectedComponents=0;
    int vis[v+1]={0};
    for(int i=1;i<=v;i++){
        if(!vis[i]){
            dfs(adj,vis,i);
            connectedComponents++;
        }
    }
    cout<<"Num of connected components = "<<connectedComponents<<"\n";
}
*/

/*    //Check path exists
#include<bits/stdc++.h>
using namespace std;

void dfs(list<int>*adj, int *vis, int source,int destination,int &flag){
    vis[source]=1;
    //cout<<"source = "<<source<<"\n";
    if(source==destination){
        flag=1;
    }
    for(auto it=adj[source].begin();it!=adj[source].end();it++){
        if(!vis[*it]){
            dfs(adj,vis,*it,destination,flag);
        }
    }
}

int main(){
    int v,e,v1,v2;
    cin>>v>>e;
    list<int>adj[v+1];
    for(int i=0;i<e;i++){
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }
    int source,destination;
    cin>>source>>destination;
    int flag=0;
    int vis[v+1]={0};
    dfs(adj,vis,source,destination,flag);
    if(flag)
        cout<<"Path exists\n";
    else
        cout<<"Path does not exists\n";
}
*/

/*    //BFS shortest path unweighted graph;

#include<bits/stdc++.h>
using namespace std;

void distPath(list<int>*adj, int v, int source){
    int vis[v+1]={0};
    int dist[v+1];
    for(int i=0;i<=v;i++)
        dist[i]-INT_MAX;
    queue<int>q;
    q.push(source);
    dist[source]=0;
    while(!q.empty()){
        int f = q.front();
        q.pop();
        for(auto it=adj[f].begin();it!=adj[f].end();it++){
            if(dist[*it] > dist[f] + 1){
                dist[*it] = dist[f] + 1;
                q.push(*it);
            }
        }
    }
    for(int i=1;i<=v;i++)
        cout<<dist[i]<<" ";
}

int main(){
    int v,e,v1,v2;
    cin>>v>>e;
    list<int>adj[v+1];
    for(int i=0;i<e;i++){
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }
    int source;
    cin>>source;
    distPath(adj,v,source);
}


*/

/*    //djkstra algo;

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;

void dijkstra(list<pair<lli,lli> >adj[], lli v, lli source){
    priority_queue<pair<lli,lli> , vector<pair<lli,lli> >, greater< pair<lli, lli>> >pq;
    lli visited[v+1]={0};
    lli distance[v+1];
    for(lli i=1;i<=v;i++)
        distance[i]=1000000000;
    pq.push({0,source});
    distance[source]=0;
    while(!pq.empty()){
        lli f = pq.top().second; pq.pop();
        //visited[f]=1;
        for(auto it = adj[f].begin();it!=adj[f].end();it++){
            lli vertex = (*it).second;
            lli weight = (*it).first;
            if(distance[vertex] > distance[f] + weight ){
                distance[vertex] = distance[f] + weight;
                pq.push({weight,vertex});
            }
        }
    }
    //cout<<"distances :\n";
    for(int i=2;i<=v;i++){
        cout<<distance[i]<<" ";
    }
    //cout<<"\n";


}

int main(){
    fast;
    lli v,e,v1,v2,weight;
    cin>>v>>e;
    list<pair<lli,lli> >adj[v+1];
    while(e--){
        cin>>v1>>v2>>weight;
        adj[v1].push_back({weight,v2});
        //adj[v2].push_back({weight,v1});
    }
    //lli source;
    //cin>>source;
    dijkstra(adj,v,1);
}*/

/*    //HackerEarth Grid 2d Matrix BFS;

#include<bits/stdc++.h>
using namespace std;

int n,m,q;
int dx[] = {-1,0,1,0};
int dy[] = {0,-1,0,1};

int dist[1001][1001];


bool isValid(int x, int y){
    if(x<0 || y<0 || x>=n  || y>=m)
        return 0;
    return 1;
}

void bfs(char mat[][1001], int n, int m, int sourceX, int sourceY){
    bool vis[1001][1001];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            //cout<<"Assigning\n";
            dist[i][j]=-1;vis[i][j]=0;
        }
    }

    queue<pair<int,int>>q;
    q.push({sourceX,sourceY});
    dist[sourceX][sourceY]=0;
    vis[sourceX][sourceY]=1;
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        //cout<<"x,y = "<<x<<" "<<y<<"\n";
        q.pop();
        for(int i=0;i<4;i++){
            int newX = x+dx[i];
            int newY = y+dy[i];
            if(isValid(newX,newY) && vis[newX][newY]==0 && mat[newX][newY]!='*' ){
                q.push({newX,newY});
                dist[newX][newY] = dist[x][y] + 1;
                vis[newX][newY]=1;
            }
        }
    }
}

int main(){
    //int n,m,q;
    cin>>n>>m>>q;
    char mat[1001][1001];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>mat[i][j];

    int sourceX,sourceY,destX,destY;
    cin>>sourceX>>sourceY;
    sourceX--;
    sourceY--;
    //cout<<"sourcex, source y = "<<sourceX<<" "<<sourceY<<"\n";
    bfs(mat,n,m,sourceX,sourceY);
    //cout<<"bfs called\n";
    while(q--){
        cin>>destX>>destY;
        destX--;
        destY--;
        if(mat[destX][destY] == '*' || mat[sourceX][sourceY]=='*')
            cout<<-1<<"\n";
        else
            cout<<dist[destX][destY]<<"\n";
    }
}
*/

/*    //Spoj Chicago ; Dijkstra modification with max priority_queue; Precision Based question

#include<bits/stdc++.h>
#define pii pair<double,double>
#define pb push_back
#define inf -999999
using namespace std;

double dijkstraInverse(list<pii>*adj, int v, int source){
    double dis[v+1];
    for(int i=0;i<=v;i++){
        dis[i]=inf;
    }
    dis[source]=1;
    priority_queue<pii>pq;
    pq.push({inf,source});
    while(!pq.empty()){
        int f = pq.top().second;
        pq.pop();
        for(auto it=adj[f].begin();it!=adj[f].end();it++){
            int vertex = (*it).second;
            double wt = (*it).first;
            if(dis[vertex] < dis[f] * wt){
                dis[vertex] = dis[f]*wt;
                pq.push({wt,vertex});
            }
        }
    }
    return dis[v]*100;
}

int main(){
    int v,e,v1,v2;
    double wt;
    while(1){
        cin>>v;
        if(v==0)
            break;
        cin>>e;
        list<pii>adj[v+1];
        for(int i=0;i<e;i++){
            cin>>v1>>v2>>wt;
            //cout<<"wt/100 = "<<wt/100<<"\n";
            double s = wt/100;
            adj[v1].pb({s,v2});
            adj[v2].pb({s,v1});
        }
        double ans = dijkstraInverse(adj,v,1);
        cout<<setprecision(6)<<fixed<<ans<<" percent"<<"\n";
    }
    return 0;

}
*/

/*    //Topological sort using BFS = SPOJ - TOPSORT;
#include<bits/stdc++.h>
using namespace std;

void topsort(list<int>*adj, int v, int *indegrees){
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=1;i<=v;i++){
        if(indegrees[i]==0)
            pq.push(i);
    }

    list<int>ordering;
    while(!pq.empty()){
        int f = pq.top();
        ordering.push_back(f);
        pq.pop();
        for(auto it = adj[f].begin();it!=adj[f].end();it++){
            indegrees[*it]--;
            if(indegrees[*it]==0)
                pq.push(*it);
        }
    }
    if(ordering.size()!=v){
        cout<<"Sandro fails.\n";
    }
    else{
        for(auto it:ordering){
            cout<<it<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    int v,e,v1,v2;
    cin>>v>>e;
    list<int>adj[v+1];
    int indegrees[v+1]={0};
    for(int i=0;i<e;i++){
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        indegrees[v2]++;
    }

    topsort(adj,v,indegrees);


}
*/

/*    //Topological sort using DFS; //connected components;

#include<bits/stdc++.h>
using namespace std;

void dfs(list<int>*adj, int source, int *vis, list<int>&ordering,int &count){
    vis[source]=1;
    for(auto it=adj[source].begin();it!=adj[source].end();it++){
        if(!vis[*it]){
            dfs(adj,*it,vis,ordering,count);
            count++;
        }
    }
    ordering.push_front(source);
}

int main(){
    int v,e,v1,v2;
    cin>>v>>e;
    list<int>adj[v+1];
    int indegrees[v+1]={0};
    for(int i=0;i<e;i++){
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        indegrees[v2]++;
    }
    list<int>ordering;
    int vis[v+1]={0};
    int source;
    for(int i=1;i<=v;i++){
        if(indegrees[i]==0){
            source=i;
            break;
        }
    }
    int count=0;
    dfs(adj,source,vis,ordering,count);
    if(count!=v){
        cout<<"Top sort does not exist\n";
    }
    else{
        for(auto it:ordering){
            cout<<it<<" ";
        }
    }
}
*/

/*    //Spoj Highways - Dijkstra on unweighted graph; It is not mandatory that MST always gives the shortest path

#include<bits/stdc++.h>
#define inf 1000000000
typedef long long ll;
#define pii pair<ll,ll>
using namespace std;

void dijkstra(list<pii>*adj, ll v, ll source, ll destination){
    ll dist[v+1];
    for(int i=0;i<=v;i++)
        dist[i] = inf;
    priority_queue<pii,vector<pii>,greater<pii>>pq;
    pq.push({0,source});
    dist[source]=0;
    while(!pq.empty()){
        ll f = pq.top().second;
        pq.pop();
        for(auto it=adj[f].begin();it!=adj[f].end();it++){
            ll vertex = (*it).second;
            ll wt = (*it).first;
            if(dist[vertex] > dist[f] + wt){
                dist[vertex] = dist[f] + wt;
                pq.push({wt,vertex});
            }
        }
    }

    if(dist[destination]==inf)
        cout<<"NONE\n";
    else
        cout<<dist[destination]<<"\n";
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll v,e,v1,v2,source,destination;
        cin>>v>>e>>source>>destination;
        list<pii>adj[v+1];
        ll wt;
        for(int i=0;i<e;i++){
            cin>>v1>>v2>>wt;
            adj[v1].push_back({wt,v2});
            adj[v2].push_back({wt,v1});
        }
        dijkstra(adj,v,source,destination);
    }
}

*/

/*      //SPOJ SHOP - Dijkstra on grid with certain restrictions;

#include<bits/stdc++.h>
#define pii pair<int,pair<int,int>>
using namespace std;

int cols,rows;
int dx[] = {0,-1,1,0};
int dy[] = {-1,0,0,1};

unordered_map<char,int>charToInt;
bool isValid(int x,int y){
    if(x<0 || y<0 || x>=rows || y>=cols)
        return 0;
    return 1;
}

void init(){
    charToInt['0']=0;charToInt['1']=1;charToInt['2']=2;charToInt['3']=3;charToInt['4']=4;
    charToInt['5']=5;charToInt['6']=6;charToInt['7']=7;charToInt['8']=8;charToInt['9']=9;
}

int main(){
    string s;
    init();
    while(true){

        cin>>cols>>rows;
        int sourceX,sourceY,destX,destY;
        if(cols==0 && rows==0)
            break;
        char mat[rows][cols];
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                cin>>mat[i][j];
                if(mat[i][j]=='S')
                    sourceX=i,sourceY=j;
                else if(mat[i][j]=='D')
                    destX=i,destY=j;
            }
        }

        //dist array;
        int dist[30][30];
        for(int i=0;i<30;i++)
            for(int j=0;j<30;j++)
                dist[i][j] = INT_MAX;

        //queue<pair<int,int>>q;
        priority_queue<pii,vector<pii>,greater<pii>>pq;
        //q.push({sourceX,sourceY});
        pq.push({0,{sourceX,sourceY}});
        dist[sourceX][sourceY]=0;
        while(!pq.empty()){
            int x = pq.top().second.first;
            int y = pq.top().second.second;
            pq.pop();

            for(int i=0;i<4;i++){
                int r = x+dx[i];
                int c = y+dy[i];
                int wt = charToInt[mat[r][c]];
                if(mat[r][c] == 'D'){
                   // cout<<"r,c= "<<r<<" "<<c<<"\n";
                    wt=0;
                }
                if(isValid(r,c)&&mat[r][c]!='X' && dist[r][c] > dist[x][y] + wt){
                    dist[r][c] = dist[x][y] + wt;
                    pq.push({wt,{r,c}});
                }
            }
        }
        cout<<dist[destX][destY]<<"\n";


        //getline(cin,s);
    }
    return 0;
}

*/

/*      **********  TO DOOOOOO *******  //SPOj ROADS - Dijkstra implementation;

#include<bits/stdc++.h>
#define pi pair<int,int>
#define pii pair<int,pair<int,int>>
using namespace std;

void dijkstra(list<pii>*adj ,int v, int source, int destination){
    int dist[v+1];
    for(int i=0;i<=v;i++)
        dist[i]=INT_MAX;
    priority_queue<pii,vector<pii>,greater<pii> >pq;
    pq.push({0,source });
    dist[source]=0;
    int totalLength = 0;

    while(!pq.empty()){
        int f = pq.top().second;
        pq.pop();
        for(auto it = adj[f].begin();it!=adj[f].end();it++){
            int vertex = (*it).second.first;
            int length  = (*it).second.second;
            if(dist[vertex] > dist[f] + length){

            }
        }
    }
}

int main(){
    int t,k,v,toll,e,v1,v2,len;
    cin>>t;
    while(t--){
        cin>>k;
        cin>>v>>e;
        list<pii>adj[v+1];
        for(int i=0;i<e;i++){
            cin>>v1>>v2>>len>>toll;
            adj[v1].push_back({toll ,{ v2,len}});
        }

        dijkstra(adj,v,1,v);
   }
}
*/

/*    //Bellman-Ford Works on negative numbers as well;

#include<bits/stdc++.h>
#define pii pair<int,pair<int,int>>
using namespace std;

void bellmanFord(vector<pii> edges, int v, int source){
    int dist[v+1];
    for(int i=0;i<=v;i++)
        dist[i]=INT_MAX;
    dist[source] = 0;
    for(int i=1;i<=v-1;i++){
        for(int j=0;j<edges.size();j++){
            pii curr = edges[j];
            int v1 = curr.second.first;
            int v2 = curr.second.second;
            int wt = curr.first;
            if(dist[v1]!=INT_MAX && dist[v2]>dist[v1]+wt){
                dist[v2] = dist[v1] + wt;
            }
        }
    }

    //Checking again for negative weight cycle
    for(int j=0;j<edges.size();j++){
        pii curr = edges[j];
        int v1 = curr.second.first;
        int v2 = curr.second.second;
        int wt = curr.first;
        if(dist[v1]!=INT_MAX && dist[v2]>dist[v1]+wt){
            cout<<"Negative weight cycle exists\n";
            return;
        }
    }

    cout<<"distances\n";
    for(int i=1;i<=v;i++)
        cout<<dist[i]<<" ";
    cout<<"\n";
}

int main(){
    int v,e,v1,v2,wt;
    cin>>v>>e;
    vector<pii>edges;
    for(int i=0;i<e;i++){
        cin>>v1>>v2>>wt;
        edges.push_back({wt,{v1,v2}});
    }

    int source;
    cin>>source;
    bellmanFord(edges,v,source);

}

*/

/*      //Floyd-Warshall; All Pair Shortest Path;
#include<bits/stdc++.h>
using namespace std;
int main(){
    int v,e,v1,v2,wt;
    cin>>v>>e;
    int adj[v+1][v+1];
    for(int i=0;i<=v;i++)
        for(int j=0;j<=v;j++)
            adj[i][j] = inf;

    //If any diagonal gets changes, this means there is a negative weight cycle;
    for(int i=0;i<=v;i++)
        adj[i][i] = 0;
    for(int i=0;i<e;i++){
        cin>>v1>>v2>>wt;
        adj[v1][v2] = wt;
    }

    //Output with floyd warshall;
    for(int k=1;k<=v;k++){
        for(int i=1;i<=v;i++){
            for(int j=1;j<=v;j++){
                adj[i][j] = min(adj[i][j],adj[i][k] + adj[k][j]);
            }
        }
    }

    //adj[i][j] represents shortest path between i and j;
    for(int i=0;i<=v;i++){
        for(int j=0;j<=v;j++)
            cout<<adj[i][j]<<" ";
        cout<<"\n";
    }
}

*/

/*    //Flood Fill test case;
15 30
..............................
.............#####............
.............#...#............
.....#########...########.....
....###.....#######....###....
...##.....................#...
..##......................##..
..##......................##..
..###....................###..
....###.................###...
.....###...............###....
......###.............###.....
.........#############........
..............................
...........A.P.P.L.E..........

*/

/*        //Flood fill;


#include<bits/stdc++.h>
using namespace std;

int r,c;

int dx[] = {-1,0,1,0};
int dy[] = {0,-1,0,1};

void printMat(char mat[][1000]){
    cout<<"\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            cout<<mat[i][j];
        cout<<"\n";
    }

    cout<<"\n";
}


void floodFill(char mat[][1000],int i, int j, char toReplace, char color){
    if(i<0 || j<0 || i>=r || j>=c)
        return;
    if(mat[i][j]!=toReplace)
        return;
    mat[i][j]=color;
    printMat(mat);
    for(int k=0;k<4;k++){
        floodFill(mat,i+dx[k],j+dy[k],toReplace,color);
    }
}

int main(){
    cin>>r>>c;
    char mat[r][1000];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            cin>>mat[i][j];
    }

    floodFill(mat,1,4,'.','R');


}

*/

/*    //Strongly connected component; If from any vertex of the graph, all other vertex are reachable, in directed graph;
    //Approach : Make a directed graph and also have a transpose of that graph; We need transpose to reverse the edges of the graph;

#include<bits/stdc++.h>
using namespace std;

void dfs(list<int>*adj, list<int>*transposeAdj, int *vis, int source){
    vis[source]=1;
    for(auto it=adj[source].begin();it!=adj[source].end();it++)
        if(!vis[*it])
            dfs(adj,transposeAdj,vis,*it);
}

bool checkSCC(list<int>*adj, list<int>*transposeAdj, int v){
    int vis[v+1]={0};
    dfs(adj,transposeAdj,vis,1);
    for(int i=1;i<=v;i++)
        if(!vis[i])
            return false;
    for(int i=0;i<=v;i++)
        vis[i]=0;
    dfs(adj,transposeAdj,vis,1);
    for(int i=1;i<=v;i++)
        if(!vis[i])
            return false;
    return true;

}

int main(){
    int v,e,v1,v2;
    cin>>v>>e;
    list<int>adj[v+1],transposeAdj[v+1];
    for(int i=0;i<e;i++){
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        transposeAdj[v2].push_back(v1);
    }

    //Checking SCC;
    if(checkSCC(adj,transposeAdj,v))
        cout<<"Graph is a strongly connected component\n";
    else
        cout<<"Graph is not a strongly connected component\n";


}
*/

/*    //Printing and counting all SCC of a graph;
#include<bits/stdc++.h>
using namespace std;

void dfs(list<int>*adj, int *vis, int source, stack<int>&st){
    vis[source]=1;
    for(auto it = adj[source].begin();it!=adj[source].end();it++){
        if(!vis[*it])
            dfs(adj,vis,*it,st);
    }
    st.push(source);
}

void dfs2(list<int>*transposeAdj, int *vis, int source){
    vis[source]=1;
    cout<<source<<" ";
    for(auto it=transposeAdj[source].begin();it!=transposeAdj[source].end();it++){
        if(!vis[*it])
            dfs2(transposeAdj,vis,*it);
    }
}

void printAllSCC(list<int>*adj, list<int>*transposeAdj, int v){
    int vis[v+1]={0};
    stack<int>st;
    for(int i=1;i<=v;i++){
        if(!vis[i])
            dfs(adj,vis,i,st);
    }
    for(int i=1;i<=v;i++)
        vis[i]=0;
    int countSCC = 0;
    while(!st.empty()){
        int t = st.top();
        cout<<"top  = "<<t<<"\n";
        st.pop();
        if(!vis[t]){
            dfs2(transposeAdj,vis,t);
            countSCC++;
            cout<<"\n";

        }
    }
    cout<<"count of all SCC = "<<countSCC<<"\n";
}

int main(){
    int v,e,v1,v2;
    cin>>v>>e;
    list<int>adj[v+1],transposeAdj[v+1];
    for(int i=0;i<e;i++){
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        transposeAdj[v2].push_back(v1);
    }
    printAllSCC(adj,transposeAdj,v);

}
*/

/*   DO SPOJ BUGLIFE -  //Graph Bipartite or not ** REMEMBER GRAPH CAN BE DISCONNECTED

#include<bits/stdc++.h>
using namespace std;

bool checkBipartite(list<int>*adj, int v){
    queue<int>q;
    int color[v+1];
    for(int i=0;i<=v;i++)
        color[i] = -1;
    q.push(1);
    color[1]=1;
    while(!q.empty()){
        int f = q.front();
        q.pop();
        for(auto it = adj[f].begin();it!=adj[f].end();it++){
            if(color[*it]==-1){
                color[*it] = 1-color[f];
                q.push(*it);
            }
            else if(color[*it]==color[f])
                return false;
        }
    }
    return true;
}

int main(){
    int v,e,v1,v2;
    cin>>v>>e;
    list<int>adj[v+1];
    for(int i=0;i<e;i++){
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }

    if(checkBipartite(adj,v))
        cout<<"Graph is bipartite\n";
    else
        cout<<"Graph is not bipartite\n";
}

*/

/*    //Kruskal - Minimum Spanning Tree ; A greedy algorithm that works!!
    //It returns the MST of the graph i.e, minimum weight edges in a graph such that it covers all vertex of the graph;
    //It used DSU find and make_union method to detect cycle efficiently;

#include<bits/stdc++.h>
#define pii pair<int,pair<int,int>>
#define pb push_back
using namespace std;
vector<int>parent,sze;

bool cmp(pii a, pii b){
    return a.first < b.first;
}

void initDSU(int n){
    parent.resize(n+1);
    sze.resize(n+1);
    for(int i=0;i<=n;i++){
        parent[i] = i;
        sze[i] = 1;
    }
}

int findWithPathCompression(int x){
    while(parent[x]!=x){
        parent[x] = parent[parent[x]];
        x = parent[x];
    }
    return x;
}

void make_union(int x,int y){
    int x_set = findWithPathCompression(x);
    int y_set = findWithPathCompression(y);
    if(x_set==y_set)
        return;
    if(sze[x_set]>sze[y_set]){
        parent[y_set] = x_set;
        sze[x_set] += sze[y_set];
        sze[y_set]=0;
    }
    else{
        parent[x_set] = y_set;
        sze[y_set] += sze[x_set];
        sze[x_set]=0;
    }
}

void kruskal(vector<pii>edges, int v){
    initDSU(v);
    vector<pii>MST;
    for(int i=0;i<edges.size();i++){
        pii currEdge = edges[i];
        int v1 = currEdge.second.first;
        int v2 = currEdge.second.second;
        int v1_set = findWithPathCompression(v1);
        int v2_set = findWithPathCompression(v2);
        if(v1_set!=v2_set){
            MST.pb(currEdge);
            make_union(v1,v2);
        }
    }

    //MST Cost;
    int sum=0;
    for(int i=0;i<MST.size();i++)
        sum+=(MST[i].first);
    cout<<sum<<"\n";
}

int main(){
    int v,e,v1,v2,wt;
    cin>>v>>e;
    vector<pii>edges;
    for(int i=0;i<e;i++){
        cin>>v1>>v2>>wt;
        edges.pb({wt, {v1,v2} });
    }
    sort(edges.begin(),edges.end(),cmp);
    kruskal(edges,v);
}

*/

/*    //Prims Algo - Also for MST; mainly suited for dense graphs with a lot of edges;

#include<bits/stdc++.h>
#define pi pair<int,int>
using namespace std;

void prims(list<pi>*adj, int v){
    int mstCost=0;
    priority_queue<pi,vector<pi>,greater<pi>>pq;
    pq.push({0,1});
    int vis[v+1]={0};
    while(!pq.empty()){
        int t = pq.top().second;
        int c = pq.top().first;
        pq.pop();
        if(vis[t])
            continue;
        mstCost+=c;
        vis[t]=1;
        for(auto it = adj[t].begin();it!=adj[t].end();it++){
            int v = (*it).second;
            int c = (*it).first;
            if(!vis[v])
                pq.push({c,v});
        }
    }
    cout<<mstCost<<"\n";

}

int main(){
    int v,e,v1,v2,wt;
    cin>>v>>e;
    list<pi>adj[v+1];
    for(int i=0;i<e;i++){
        cin>>v1>>v2>>wt;
        adj[v1].push_back({wt,v2});
        adj[v2].push_back({wt,v1});
    }

    prims(adj,v);
}
*/

/*    //SPOJ BUGLIFE

#include<bits/stdc++.h>
using namespace std;

bool isBipartite(list<int>*adj, int v, int source, int color[]){
    color[source]=1;
    queue<int>q;
    q.push(source);
    while(!q.empty()){
        int f = q.front();
        q.pop();
        for(auto it = adj[f].begin();it!=adj[f].end();it++){
            if(color[*it]==-1){
                color[*it] = 1 - color[f];
                q.push(*it);
            }
            else if(color[*it] == color[f])
                return 0;
        }
    }
    return 1;
}

int main(){
    int t,c=1;
    cin>>t;
    while(t--){
        int n,m,v1,v2;
        cin>>n>>m;
        list<int>adj[n+1];
        for(int i=0;i<m;i++){
            cin>>v1>>v2;
            adj[v1].push_back(v2);
            adj[v2].push_back(v1);
        }
        int flag=0;
        int color[n+1];
        for(int i=0;i<=n;i++)
            color[i]=-1;
        for(int i=1;i<=n;i++){
            if(color[i]==-1){
                if(!isBipartite(adj,n,i,color)){
                    flag=1;
                    cout<<"Scenario #"<<c<<":\n";
                    cout<<"Suspicious bugs found!\n";
                    break;
                }
            }
        }
        if(!flag){
            cout<<"Scenario #"<<c<<":\n";
            cout<<"No suspicious bugs found!\n";

        }
        c++;
    }
}
*/

/*    //Hackerearth Mr.President; Remove MST edges from graph till cost is reduced to K;

#include<bits/stdc++.h>
using namespace std;
typedef int64_t lli;
#define pii pair<lli,pair<lli,lli>>
vector<lli>parent,sze;

bool cmp(pii a, pii b){
    return a.first<b.first;
}

void initDSU(lli n){
    parent.resize(n+1);
    sze.resize(n+1);
    for(lli i=0;i<=n;i++){
        parent[i]=i;
        sze[i]=1;
    }
}

lli findWithPathCompression(lli x){
    while(parent[x]!=x){
        parent[x] = parent[parent[x]];
        x = parent[x];
    }
    return x;
}

void make_union(lli x, lli y){
    lli x_set = findWithPathCompression(x);
    lli y_set = findWithPathCompression(y);
    if(x_set==y_set)
        return;
    if(sze[x_set]>sze[y_set]){
        parent[y_set] = x_set;
        sze[x_set]+=sze[y_set];
        sze[y_set]=0;
    }
    else{
        parent[x_set] = y_set;
        sze[y_set]+=sze[x_set];
        sze[x_set]=0;
    }
}


void kruskal(vector<pii>edges, lli n, lli k){
    initDSU(n);
    vector<pii>MST;
    lli cost=0;
    for(lli i=0;i<edges.size();i++){
        pii curr = edges[i];
        lli v1 = curr.second.first;
        lli v2 = curr.second.second;
        lli v_set = findWithPathCompression(v1);
        lli v2_set = findWithPathCompression(v2);
        if(v_set != v2_set){
            cost+=curr.first;
            MST.push_back(curr);
            make_union(v1,v2);
        }
    }
    lli transformRoads=0;
    lli i=MST.size()-1;
    while(i>=0 && cost>k){
        cost-=MST[i].first;
        transformRoads++;
        cost++;
        i--;
    }
    if(cost>k)
        cout<<-1<<"\n";
    else
        cout<<transformRoads<<"\n";
}

void dfs(list<lli>*adj, lli *vis, lli source, lli &count){
    vis[source]=1;
    count++;
    for(auto it = adj[source].begin();it!=adj[source].end();it++){
        if(!vis[*it]){
            dfs(adj,vis,*it,count);
        }
    }
}

int main(){
     ios_base::sync_with_stdio(false);
    cin.tie(0);
    lli n,m;
    lli k;
    cin>>n>>m>>k;
    vector<pii>edges;
    list<lli>adj[n+1];
    for(lli i=0;i<m;i++){
        lli wt,v1,v2;
        cin>>v1>>v2>>wt;
        edges.push_back({wt,{v1,v2}});
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }
    lli count=0;
    lli vis[n+1]={0};
    dfs(adj,vis,1,count);
    if(count!=n){
        cout<<-1<<"\n";
        return 0;
    }
    sort(edges.begin(),edges.end(),cmp);
    kruskal(edges,n,k);

}

*/

/*    //Codechef DISHOWN;

#include<bits/stdc++.h>
using namespace std;
vector<long long>parent,size;

void initDSU(int n){
    parent.resize(n);
    size.resize(n);
    for(int i=0;i<n;i++)
        parent[i]=i;
}

int findWithPathCompression(int x){
    while(parent[x]!=x){
        parent[x] = parent[parent[x]];
        x = parent[x];
    }
    return x;
}

void make_union(int x, int y){
    int x_set = findWithPathCompression(x);
    int y_set = findWithPathCompression(y);
    if(x_set==y_set)
        return;
    if(size[x_set] > size[y_set]){
        parent[y_set] = x_set;
       // size[x_set] += size[y_set];
        //size[y_set]=0;
    }
    else if(size[y_set] > size[x_set] ){
        parent[x_set] = y_set;
        //size[y_set]+=size[x_set];
        //size[x_set]=0;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        initDSU(n);
        for(int i=0;i<n;i++)
            cin>>size[i];
        int q;
        cin>>q;
        int type,x,y;
        while(q--){
            cin>>type>>x;
            x-=1;
            if(type==0){
                cin>>y;
                //cout<<"x,y = "<<x<<" "<<y<<"\n";
                y-=1;
                int x_set = findWithPathCompression(x);
                int y_set = findWithPathCompression(y);
                if(x_set==y_set)
                    cout<<"Invalid query!\n";
                else
                    make_union(x,y);
                //cout<<"end\n";
            }
            else
                cout<<findWithPathCompression(x)+1<<"\n";
        }


    }
}
*/


/*     //SPOJ ROADNET - FLOYDWARSHALL
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int dist[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                cin>>dist[i][j];
        }
        int count=0;
        //Floyd Warshall;
        for(int k=0;k<n;k++){
            for(int i=k+1;i<n;i++){
                bool f=true;
                for(int j=0;j<n;j++){
                    if(j==k || j==i)
                        continue;
                    if(dist[k][i] ==  dist[j][i] + dist[k][j] ){
                        f=false;
                        break;
                    }
                }
                if(f)
                    cout<<k+1<<" "<<i+1<<"\n";
            }
        }
    }
}
*/

