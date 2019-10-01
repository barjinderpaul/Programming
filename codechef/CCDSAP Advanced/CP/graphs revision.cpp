#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

/*  //bfs, dfs, number of connected components;


void bfs(list<lli>*adj, lli v, lli source){
    int visited[v+1]={0};
    queue<lli>q;
    q.push(source);
    visited[source]=1;
    while(!q.empty()){
        lli f = q.front();
        cout<<f<<" ";
        q.pop();
        for(auto it = adj[f].begin();it!=adj[f].end();it++){
            if(!visited[*it]){
                visited[*it]=1;
                q.push(*it);
            }
        }
    }
}

void dfs(list<lli>*adj,lli source, lli visited[]){
    visited[source]=1;
    cout<<source<<" ";
    for(auto it = adj[source].begin();it!=adj[source].end();it++)
        if(!visited[*it])
            dfs(adj,*it,visited);
}


int main(){
    lli v,e,v1,v2;
    cin>>v>>e;
    list<lli>adj[v+1];
    while(e--){
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }

    cout<<"BFS\n";
    bfs(adj,v,1);
    cout<<"\nDFS\n";
    lli vis[v+1]={0};
    dfs(adj,1,vis);

    cout<<"Number of connected components\n";
    lli visited[v+1]={0},count=0;
    for(int i=1;i<=v;i++){
        if(!visited[i]){
            dfs(adj,i,visited);
            count++;
        }
    }
    cout<<"\nNumber of connected components = \n"<<count<<"\n";

}
*/

/*  //Graphs dijkstra with shortest path as well as distance from source to destination

void path(lli destination, unordered_map<lli,lli>parent){
    if(parent[destination]==-1){
        return;
    }
    path(parent[destination],parent);
    cout<<parent[destination]<<" ";
}

void dijkstra(list<pair<lli,lli> >adj[], lli v, lli source){
    priority_queue<pair<lli,lli> , vector<pair<lli,lli> >, greater< pair<lli, lli>> >pq;
    lli visited[v+1]={0};
    lli distance[v+1];
    for(int i=0;i<=v;i++)
        distance[i]=INT_MAX;
    unordered_map<lli,lli> parent;
    pq.push({0,source});
    distance[source]=0;
    parent[source]=-1;
    while(!pq.empty()){
        lli f = pq.top().second; pq.pop();
        visited[f]=1;
        for(auto it = adj[f].begin();it!=adj[f].end();it++){
            lli vertex = (*it).second;
            lli weight = (*it).first;
            if(!visited[vertex] && distance[vertex] > distance[f] + weight ){
                distance[vertex] = distance[f] + weight;
                //visited[vertex] = 1;
                pq.push({weight,vertex});
                parent[vertex] = f;
            }
        }
    }
    cout<<"distances :\n";
    for(int i=1;i<=v;i++)
        cout<<"i = "<<i<<" source = "<<source<<" distance = "<<distance[i]<<"\n";
    cout<<"\n";

    lli s,dest;
    cin>>dest;
    cout<<"Path from "<<source<<" to "<<dest<<"\n";
    path(dest,parent);
    cout<<dest;
}

int main(){
    lli v,e,v1,v2,weight;
    cin>>v>>e;
    list<pair<lli,lli> >adj[v+1];
    while(e--){
        cin>>v1>>v2>>weight;
        adj[v1].push_back({weight,v2});
        adj[v2].push_back({weight,v1});
    }
    lli source;
    cin>>source;
    dijkstra(adj,v,source);
}

*/

/*    //Checking path from one node to another

void checkPath(list<lli>adj[], lli source, lli destination, lli vis[], lli &flag){
    if(source==destination){
        flag=1;
        return;
    }
    vis[source]=1;
    for(auto it = adj[source].begin();it!=adj[source].end();it++)
        if(!vis[*it])
            checkPath(adj,*it,destination,vis,flag);
}

int main(){
    lli v,e,v1,v2;
    cin>>v>>e;
    list<lli>adj[v+1];
    while(e--){
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        adj[v1].push_back(v1);
    }
    lli source,destination;
    cin>>source>>destination;
    lli flag=0,vis[v+1]={0};
    checkPath(adj,source,destination,vis,flag);
    flag==1?cout<<"Path exists\n":cout<<"Path does not exist\n";
}
*/

/*  //Graph implementation with string data type with unordered_map; //Custom template = template<typename T>(with no semicolon) and now we can use any data type
void displayData(unordered_map<string,list<string> >adj, lli v, string source){
    unordered_map<string,int>visited;
    queue<string>q;
    q.push(source);
    while(!q.empty()){
        string f = q.front();
        cout<<f<<" ";
        q.pop();
        visited[f]=1;
        for(auto it = adj[f].begin();it!=adj[f].end();it++){
            if(visited[*it]==0){
                visited[*it]=1;
                q.push(*it);
            }
        }

    }
}

int main(){
    lli v,e;
    cin>>v>>e;
    unordered_map<string,list<string> >adj;
    string s1,s2,source;
    while(e--){
        cin>>s1>>s2;
        adj[s1].push_back(s2);  //directed edge;
    }
    cin>>source;
    displayData(adj,v,source);
}

*/

/*    //Single Source shortest path using bfs;

void singleSourceShortestPath(list<lli>*adj, lli v, lli source){
    int visited[v+1]={0};
    lli distances[v+1];
    for(int i=0;i<=v;i++)
        distances[i]=INT_MAX;
    queue<lli>q;
    q.push(source);
    distances[source]=0;
    while(!q.empty()){
        lli f = q.front();q.pop();
        visited[f]=1;
        for(auto it = adj[f].begin();it!=adj[f].end();it++){
            if(distances[*it]==INT_MAX){
                q.push(*it);
                distances[*it] = distances[f]+1;
            }
        }
    }
    cout<<"Distances from source = "<<source<<"\n";
    for(int i=0;i<=v;i++)
        cout<<"i = "<<i<<" distance = "<<distances[i]<<"\n";
}

int main(){
    lli v,e,v1,v2;
    cin>>v>>e;
    list<lli>adj[v+1];
    while(e--){
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }
    lli source;
    cin>>source;
    singleSourceShortestPath(adj,v,source);

}

*/

/*     //topological sort using dfs connected components;

void dfs(list<lli>*adj, lli source, int visited[], list<lli>&ordering, int &countVisited){
    visited[source]=1;
    for(auto it = adj[source].begin();it!=adj[source].end();it++){
        if(visited[*it]==0){
            countVisited++;
            visited[*it]=1;
            dfs(adj,*it,visited,ordering,countVisited);
        }
    }
    ordering.push_front(source);
}

int main(){
    lli v,e,v1,v2;
    cin>>v>>e;
    list<lli>adj[v+1];
    lli indegres[v+1]={0};
    while(e--){
        cin>>v1>>v2;
        adj[v1].push_back(v2);   //directed acyclic graph;
        indegres[v2]++;
    }
    lli source;
    for(int i=1;i<=v;i++){
        if(indegres[i]==0){
            source=i;
            break;
        }
    }

    int visited[v+1]={0};
    list<lli>ordering;
    int countVisited=1;
    dfs(adj,source,visited,ordering,countVisited);
    cout<<"Countvisited = ;"<<countVisited<<"\n";

    if(countVisited!=v)
        cout<<"Topological sort does not exists\n";
    else{
        cout<<"Topological sort of the mentioned graph is:\n";
        for(auto it=ordering.begin();it!=ordering.end();it++)
            cout<<*it<<" ";
    }
}

*/

 /*   //topological sort using bfs;

void topological_sort(list<lli>*adj, lli source, lli v,queue<lli>&q, lli indegrees[]){
    lli visited[v+1]={0};
    lli count=0;
    //cout<<"q.size() = "<<q.size()<<"\n";
    while(!q.empty()){
        lli f = q.front();
        count++;
        cout<<f<<" ";
        q.pop();
        for(auto it = adj[f].begin();it!=adj[f].end();it++){
            indegrees[(*it)]--;
            if(indegrees[*it]==0)
                q.push(*it);
        }
    }
    if(count!=v)
        cout<<"cannot do topological sort\n";




}
int main(){
    lli v,e,v1,v2;
    cin>>v>>e;
    list<lli>adj[v+1];
    lli indegrees[v+1]={0};
    while(e--){
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        indegrees[v2]++;
        //  cout<<"v2 = "<<v2<<" indegree = "<<indegrees[v2]<<"\n";
    }
    lli source;
    queue<lli>q;
    for(int i=1;i<=v;i++){
        if(indegrees[i] == 0){
            //cout<<"found\n";
            q.push(i);
        }
    }
    topological_sort(adj,source,v,q,indegrees);
    return 0;
}
*/

//TO be done cycles;

/* FloodFill test cases;


    test case for flood fill;
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


5 6
######
#....#
#....#
#....#
######

*/

/*  //FloodFill algo; applications : no, of connected components in matrix, path reachability in matrix from one point to other;
int r,c;
int dx[] = {-1,0,1,0}; //WNES
int dy[] = {0,-1,0,1}; //WNES

void printMat(char mat[][1000]){
    cout<<"\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            cout<<mat[i][j];
        cout<<"\n";
    }
    cout<<"\n";
}


//int r,c;
void floodFill(char mat[][1000], int i, int j, char ch, char color){
    //mat boundaries
    if(i<0 || i>=r || j>=c|| j<0 )
        return;

    //unmatched char;
    if(mat[i][j]!=ch)
        return;

    mat[i][j] = color;
    printMat(mat);
    for(int k=0;k<4;k++)
        floodFill(mat,i+dx[k], j+dy[k], ch, color);
}


int main(){
    cin>>r>>c;
    char mat[r][1000];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>mat[i][j];

    floodFill(mat,1,4,'.','R');
    //floodFill(mat,3,15,'.','R');
    printMat(mat);

}

*/


/* Graph matrices.cpp */


/* //Shortest path in a maze  - hackerearth Grid; //Working correct with preprocessing done but TLE,as 1<=Q<=10^5

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;

int n,m,q;
//int dx[] = {-1,0,1,0};
//int dy[] = {0,-1,0,1};

int dx[] = {-1,0,1,0}; //WNES
int dy[] = {0,-1,0,1}; //WNES

bool isValid(int x, int y){
    if(x<1 || y<1 || x>n || y>m)
        return 0;
    else
        return 1;
}

int minPath(char mat[][1001], int startx, int starty, int destx,int desty){
    bool vis[1001][1001];
    for(int i=0;i<=n;i++)
        for(int j=0;j<=m;j++)
            vis[i][j]=0;
    queue<pair<int,pair<int,int> > >q;
    q.push({0,{startx,starty}});
    vis[startx][starty]=1;
    while(!q.empty()){
        pair<int,pair<int,int>>f = q.front();
        //cout<<"x , y = "<<f.second.first<< " "<<f.second.second<<"\n";
        q.pop();
        if(f.second.first == destx && f.second.second==desty)
            return f.first;
        for(int i=0;i<4;i++){
            int row = f.second.first + dx[i];
            int col = f.second.second + dy[i];
            if(!vis[row][col] && isValid(row,col) && mat[row][col]!='*'){
                vis[row][col]=1;
                q.push({f.first+1,{row,col}});
            }
        }

    }
    return -1;
}

int main(){
    cin>>n>>m>>q;
    char mat[1001][1001];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>mat[i][j];

    int startx,starty,destx,desty;
    cin>>startx>>starty;
    //startx-=1;starty-=1;
    while(q--){
        cin>>destx>>desty;
        //destx-=1;desty-=1;
        if(mat[destx][desty]=='*' || mat[startx][starty]=='*')
            cout<<-1<<"\n";
        else{
            cout<<minPath(mat,startx,starty,destx,desty)<<"\n";
        }
    }

}

*/

/*  //Works same but the preprocessing was wrong, expand to read reason;

    //instead of calling minPath for every i,j call bfs on startx and starty and update distances to all
    //other vertices just like we find levels;


#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;

int n,m,q;
//int dx[] = {-1,0,1,0};
//int dy[] = {0,-1,0,1};

int dx[] = {-1,0,1,0}; //WNES
int dy[] = {0,-1,0,1}; //WNES
int dist[1001][1001];
bool isValid(int x, int y){
    if(x<1 || y<1 || x>n || y>m)
        return 0;
    else
        return 1;
}


void minPath(char mat[][1001], int startx, int starty){
    bool vis[1001][1001];
    for(int i=0;i<=n;i++)
        for(int j=0;j<=m;j++)
            vis[i][j]=0,dist[i][j]=-1;
    queue<pair<int,int>>q;
    q.push({startx,starty});
    dist[startx][starty]=0;
    vis[startx][starty]=1;
    while(!q.empty()){
        pair<int,int>f = q.front();
        //cout<<"x , y = "<<f.second.first<< " "<<f.second.second<<"\n";
        q.pop();
        for(int i=0;i<4;i++){
            int row = f.first + dx[i];
            int col = f.second + dy[i];
            if(vis[row][col]==0 && isValid(row,col) && mat[row][col]!='*'){
                vis[row][col]=1;
                dist[row][col] = dist[f.first][f.second]+1;
                q.push({row,col});
            }
        }

    }
}

void preProcess(char mat[][1001], int startx, int starty){
    minPath(mat,startx,starty);
}

int main(){
    fast;
    cin>>n>>m>>q;
    char mat[1001][1001];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>mat[i][j];

    int startx,starty,destx,desty;
    cin>>startx>>starty;
    preProcess(mat,startx,starty);
    //startx-=1;starty-=1;
    while(q--){
        cin>>destx>>desty;
        //destx-=1;desty-=1;
        if(mat[destx][desty]=='*' || mat[startx][starty]=='*')
            cout<<-1<<"\n";
        else{
            cout<<dist[destx][desty]<<"\n";
        }
    }

}

*/


/*  //Min cost path = Dijkstra in matrix
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;

int dx[] = {-1,0,1,0};
int dy[] = {0,-1,0,1};

int n;
bool isValid(int x, int y){
    if(x<0 || y<0 || x>=n || y>=n)
        return 0;
    return 1;
}

void dijkstra(int mat[][51], int n){
    priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>> >pq;
    pq.push({0,0});
    long int sum=0;
    int dis[51][51];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            dis[i][j] = INT_MAX;
    //visx[0]=1;visy[y]=1;
    dis[0][0]= mat[0][0];
    while(!pq.empty()){
        int x = pq.top().first; int y = pq.top().second;
        pq.pop();

        for(int i=0;i<4;i++){
            int row = x + dx[i];
            int col = y + dy[i];
            if(isValid(row,col) && dis[row][col]> (dis[x][y]+mat[row][col])){
                dis[row][col]  = dis[x][y] + mat[row][col];
                pq.push({row,col});
            }
        }
    }
    cout<<dis[n-1][n-1]<<"\n";
}

void printMat(int mat[][51], int n){
    cout<<"\nDisplaying Matrix\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<mat[i][j]<<" ";
        cout<<"\n";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        int mat[51][51];
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>mat[i][j];
        //printMat(mat,n);
        dijkstra(mat,n);
    }

}

*/

/*    //Geeksforgeeks Knight Walk : 8 coordinate movement knight - horse

#include<bits/stdc++.h>
using namespace std;

int n,m;

int dx[] = {-2,-2,-1,-1,2,2,1,1};
int dy[] = {-1,1,-2,2,-1,1,-2,2};

//int dx[]={-1,-2,-2,-1,1,2,2,1};
//int dy[]={2,1,-1,-2,2,1,-1,-2};

bool isValid(int r, int c){
    if(r<1 || r>n || c<1 || c>m)
        return 0;
    return 1;
}

void minPath(int startx, int starty, int destx, int desty){
    int dis[n+1][m+1];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            dis[i][j]=INT_MAX;
    queue<pair<int,pair<int,int>>>q;
    bool visited[n+1][m+1] = {{false}};
    q.push({0,{startx,starty}});
    visited[startx][starty]=true;
    dis[startx][starty]=0;
    int finalAns=-1;
    while(!q.empty()){
        pair<int,pair<int,int>>p = q.front();
        q.pop();
        int x = p.second.first;
        int y = p.second.second;
        int des = p.first;
        if(x == destx && y==desty){
            finalAns = des;
            break;
        }
        for(int i=0;i<8;i++){
            int row = x + dx[i];
            int col = y + dy[i];
            if(isValid(row,col) && !visited[row][col] )
                q.push({des+1,{row,col}}),visited[row][col]=true;
        }

    }
    cout<<finalAns<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int startx,starty,destx,desty;
        cin>>startx>>starty>>destx>>desty;
        minPath(startx,starty,destx,desty);
    }
}

*/


/* //Hackerearth flood fill algo; check whether path exists or not using flood fill
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
//typedef long long int lli;
int n,m;

bool isValid(int row, int col){
    if(row<1 || col<1 || row>n || col>m)
        return 0;
    return 1;
}



int dx[] = {-1,0,1,0};
int dy[] = {0,-1,0,1};

void checkPathFloodFill(int mat[][11], int startx, int starty, int destx, int desty, int &flag){
    if(!isValid(startx,starty))
        return;
    if(mat[startx][starty]==0 || mat[startx][starty]==2)
        return;
    mat[startx][starty] = 2;
    for(int i=0;i<4;i++)
        checkPathFloodFill(mat,startx+dx[i], starty+dy[i],destx,desty,flag);
}

int main(){
    cin>>n>>m;
    int mat[11][11];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>mat[i][j];

    int flag=0;
    checkPathFloodFill(mat,1,1,n,m,flag);
    if(mat[n][m]==2)
        cout<<"Yes";
    else
        cout<<"No";
}
*/


/*  //hackerrank booze first;   /


  //  The question required was the shortest distance from all points to it's nearest booze point; where 1<=v,e<=10^5
   // Approach = Add a new vertex 0, connect it to every booze point with distance 0 and apply dijkstra on 0 point which we have newly created;


#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
unordered_map<int,int>boozpoints;
void dijkstra(list<pair<int,int>> adj[], int v, int source){
    int dist[v+1];
    for(int i=0;i<=v;i++)
        dist[i]=INT_MAX;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
    pq.push({0,source});
    dist[source]=0;
    while(!pq.empty()){
        int f = pq.top().second;
        pq.pop();
        //cout<<"f = "<<f<<"\n";
        for(auto it = adj[f].begin();it!=adj[f].end();it++){
            int vertex = (*it).second, weight = (*it).first;
            //cout<<"vertex, weight = "<<vertex<<" "<<weight<<"\n";
            if(dist[vertex]  > dist[f] + weight){
                pq.push({weight+dist[f],vertex});
                dist[vertex] = dist[f] + weight;
            }
        }
    }
    int minDist = INT_MAX;
    for(int i=1;i<=v;i++)
        cout<<dist[i]<<"\n";
    //cout<<"\n";
}

int main(){
    fast;
    int v,e,v1,v2,weight;
    cin>>v>>e;
    list<pair<int,int>>adj[v+1];
    while(e--){
        cin>>v1>>v2>>weight;
        adj[v1].push_back({weight,v2});
        adj[v2].push_back({weight,v1});
    }
    int b,point;
    cin>>b;
    while(b--){
        cin>>point;
        adj[0].push_back({0,point});
        adj[point].push_back({0,0});
    }
    dijkstra(adj,v,0);


}
*/

/*    //Spoj RLA : Topological Sort, Need to rank employees based on ranking;

#include<bits/stdc++.h>
using namespace std;

void top_sort(list<int>*adj, int v, int indegrees[]){
    priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>>pq;
    //pq.push({1,source});
    for(int i=0;i<v;i++){
            if(indegrees[i]==0){
                pq.push({1,i});
                //break;
            }
        }
    while(!pq.empty()){
        int rank = pq.top().first;
        int num  = pq.top().second;
        pq.pop();
        cout<<rank<<" "<<num<<"\n";
        for(auto it = adj[num].begin();it!=adj[num].end();it++){
            indegrees[*it]--;
            if(indegrees[*it]==0)
                pq.push({rank+1,*it});
        }
    }
}

int main(){
    int t,i=1;
    cin>>t;

    while(t--){
        int v,e,v1,v2;
        cin>>v>>e;
        list<int>adj[v];
        int indegrees[v]={0};
        while(e--){
            cin>>v1>>v2;
            adj[v2].push_back(v1);
            indegrees[v1]++;
        }
        //int source;

        cout<<"Scenario #"<<i<<":\n";i++;
        top_sort(adj,v,indegrees);
        //cout<<"\n";

    }
}

*/



/*    // ** MUST SEE ** Spoj HOLI - Pigeon Hole principle + DFS ; Count Subtrees for every node
    //Counting subtree of all nodes and breaking the nodes one by one with help of
    //count array and using the formula : E(min(sizeOfLeftSubtree, sizeOfRightSubtree)*edgeCost)
    //E = summation function.


#include<bits/stdc++.h>
using namespace std;

int countSubtrees(int v,list<pair<int,int>>*adj, int source,long int &totalDistance, int *visited, int *count){
    visited[source]=1;
    count[source]=1; //initially every node has 1 subtree that is itself;
    for(auto it = adj[source].begin();it!=adj[source].end();it++){
        if(!visited[(*it).first]){
            count[source]+=countSubtrees(v,adj,(*it).first,totalDistance,visited,count);
            int vertices = count[(*it).first];
            int edgeWeight = (*it).second;
            //cout<<vertices<<" "<<edgeWeight<<"\n";
            totalDistance+= 2*(min(vertices,v-vertices)*edgeWeight);
            //totalDistance+=(min(count[source],v-count[source])*(*it).second);
        }


    }
    return count[source];
}

void maxDistance(list<pair<int,int>>*adj, int v,int i){
    int visited[v+1]={0};
    int count[v+1]={0};
    long int totalDistance=0;
    countSubtrees(v,adj,1,totalDistance,visited,count);
    cout<<"Case #"<<i<<": "<<totalDistance<<"\n";
}

int main(){
    int t,v,e,v1,v2,weight;
    cin>>t;
    int i=1;
    while(t--){
        cin>>v;
        e = v-1;
        list<pair<int,int>>adj[v+1];
        while(e--){
            cin>>v1>>v2>>weight;
            adj[v1].push_back({v2,weight});
            adj[v2].push_back({v1,weight});
        }
        maxDistance(adj,v,i);i++;
    }
}

*/

/*    //Strongly Connected Components; Checking whether a graph is SCC   //Kosaraju's Algorithm
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;

void dfs(int source, int vis[], list<int>*adj){
    vis[source]=1;
    for(auto it=adj[source].begin();it!=adj[source].end();it++)
        if(!vis[*it])
            dfs(*it,vis,adj);
}

bool checkSCC(list<int>*adj, int v, list<int> *transposeAdj){
    int vis[v+1]={0};
    dfs(1,vis,adj);
    for(int i=1;i<=v;i++)   //1-based indexing
        if(!vis[i])
            return false;

    for(int i=0;i<=v;i++)
        vis[i]=0;
    //dfs for transpose adj;
    dfs(1,vis,transposeAdj);
    for(int i=1;i<=v;i++)   //1-based indexing
        if(!vis[i])
            return false;

    //all nodes reachable
    return true;
}

int main(){
    int v,e,v1,v2;
    cin>>v>>e;
    list<int>adj[v+1];
    list<int>transposeAdj[v+1];
    while(e--){
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        transposeAdj[v2].push_back(v1);
    }
    checkSCC(adj,v,transposeAdj)==1?cout<<"Yes\n":cout<<"No\n";
}

*/

/*    //Printing and counting all SCC of a graph



void dfs(int source , list<int>*adj, int *vis,stack<int>&st){
    vis[source]=1;
    for(auto it = adj[source].begin();it!=adj[source].end();it++)
        if(!vis[*it])
            dfs(*it,adj,vis,st);
    st.push(source);
}

//dfs for transpose graph;
void dfs2(int source, list<int>*adj,int vis[]){
    vis[source]=1;
    cout<<source<<" ";
    for(auto it = adj[source].begin();it!=adj[source].end();it++)
        if(!vis[*it])
            dfs2(*it,adj,vis);
}

void print(int t,list<int>*adj){
    for(auto it = adj[t].begin();it!=adj[t].end();it++)
        cout<<*it<<"\n";
}
void printAllSCC(list<int>*adj, list<int>*transposeAdj, int v){
    stack<int>st;
    int vis[v+1]={0};

    //pushing all nodes of the graph in stack; covers disconnected graph;
    for(int i=1;i<=v;i++)
        if(!vis[i])
            dfs(i,adj,vis,st);
    //cout<<"st.size() = "<<st.size()<<"\n";

    for(int i=0;i<=v;i++)
        vis[i]=0;

    int countSCC=0;
    while(!st.empty()){
        int t = st.top(); st.pop();
        //cout<<"t = "<<t<<"\n";
        //cout<<"edges of vertex t in transpose graph = \n";
        //print(t,transposeAdj);
        //cout<<"\n";
        if(!vis[t]){
            dfs2(t,transposeAdj,vis);
            cout<<"\n";
            countSCC++;
        }
    }
    cout<<"count of SCC = "<<countSCC<<"\n";
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int v,e,v1,v2;
    cin>>v>>e;
    list<int>adj[v+1];
    list<int>transposeAdj[v+1];
    while(e--){
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        transposeAdj[v2].push_back(v1);
    }

    printAllSCC(adj,transposeAdj,v);
}

*/

/*    //Check whether a graph is bipartite or not
#include<bits/stdc++.h>
using namespace std;

bool isBipartite(list<int>*adj, int v){
    queue<int>q;
    int color[v+1];
    for(int i=0;i<=v;i++)
        color[i]=-1;
    q.push(1);
    color[1]=0;
    while(!q.empty()){
        int f = q.front();q.pop();
        //cout<<"source and color = "<<f<<" "<<color[f]<<"\n";
        for(auto it = adj[f].begin();it!=adj[f].end();it++){
            if(color[*it]==-1){
                color[*it] = 1 - color[f];
                q.push(*it);
            }
            else if(color[*it]==color[f]){
                cout<<"color[*it] = "<<*it<<" "<<color[*it]<<"\n";
                return false;

            }
        }
    }
    return true;
}

int main(){
    int v,e,v1,v2;
    cin>>v>>e;
    list<int>adj[v+1];
    while(e--){
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }
    if(isBipartite(adj,v))
        cout<<"Bipartite Graph\n";
    else
        cout<<"Not a bipartite Graph\n";
}
*/

/*    //color the graph hackerearth; //disconnected graph/ dfs coloring on each component and return sum of max colored number in each component.

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;

bool bipartite(list<lli>*adj, lli v, int source, lli &count0,lli &count1, int color[]){
    queue<int>q;
    q.push(source);
    color[source]=0;
    count0++;
    while(!q.empty()){
        lli f = q.front();q.pop();
        for(auto it = adj[f].begin();it!=adj[f].end();it++){
            if(color[*it]==-1){
                color[*it] = 1-color[f];
                q.push(*it);
                //cout<<"color[*it] = "<<color[*it]<<"\n";
                if(color[*it]==0)
                    count0++;
                else
                    count1++;
            }
            else if(color[*it]==color[f]){
                return false;

            }

        }
    }
    return true;
}



int main(){
    lli t,v1,v2,v,e;
    cin>>t;
    while(t--){
        cin>>v>>e;
        list<lli>adj[v+1];
        while(e--){
            cin>>v1>>v2;
            adj[v1].push_back(v2);
            adj[v2].push_back(v1);
        }
        int color[v+1];
        for(int i=0;i<=v;i++)   color[i]=-1;
        int flag=0;
        lli finalAna=0;
        for(int i=1;i<=v;i++){
            if(color[i]==-1){
                lli count0=0,count1=0;
                if(!bipartite(adj,v,i,count0,count1,color)){
                    flag=1;
                    break;
                }
                finalAna+=max(count0,count1);
            }
        }
        if(flag==1)
            cout<<"NO\n";
        else
            cout<<finalAna<<"\n";
    }
}
*/


/*    //Union Find Algorithm // To detect cycle worst case = Linear in skewed tree; Optimization Union Find By Rank Compression;
    //See disjoint set union.cpp
*/

/*    //Kruskal Minimum Spanning Tree; //Sum of min spanning Tree
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
#define pii pair<int,pair<int,int>>
using namespace std;
vector<int>parent,rck;

bool cmp(pii a, pii b){
    return a.first<b.first;
}

void initDSU(int n){
    parent.resize(n+1);
    rck.resize(n+1);
    for(int i=0;i<=n;i++)
        parent[i]=i,rck[i]=0;
}

int find(int x){
    if(parent[x]==x)
        return x;
    return find(parent[x]);
}

void make_union(int x, int y){
    int xset = find(x);
    int yset = find(y);
    if(rck[xset]>rck[yset]){
        parent[yset] = xset;
    }
    else if(rck[yset]>rck[xset]){
        parent[xset] = yset;
    }
    else{
        parent[yset] = xset;
        rck[xset]++;
    }
}

void kruskal(vector<pii>edges, int v, int e){
    initDSU(v);
    vector<pii>MST;
    for(int i=0;i<edges.size();i++){
        pii currentEdge = edges[i];
        int source = currentEdge.second.first;
        int dest = currentEdge.second.second;
        int sourceParent = find(source);
        int destParent = find(dest);
        if(sourceParent!=destParent){
            MST.push_back(currentEdge);
            make_union(sourceParent,destParent);
        }
    }
    long int sum=0;
    for(int i=0;i<MST.size();i++){
        sum+=(MST[i].first);
    }
    cout<<sum<<"\n";
}

void printEdges(vector<pii> a){
    for(int i=0;i<a.size();i++){
        pii p = a[i];
        cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<"\n";
    }
}

int main(){
    vector<pii>v;
    int ve,e,v1,v2,weight;
    cin>>ve>>e;
    for(int i=0;i<e;i++){
        cin>>v1>>v2>>weight;
        v.push_back({weight,{v1,v2}});
    }
    sort(v.begin(),v.end(),cmp);
    //printEdges(v);
    kruskal(v,ve,e);
}

*/
/*      //Hackerearth Simple MST Question , add weight to each edge as 1 and find MST Cost;
    see on hackerearth
*/

/*    //Hackerearth Mr.President
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
#define pii pair<int,pair<int,int>>
using namespace std;
typedef int64_t lli;
vector<int>parent,rck;
 
void initDSU(lli n){
    parent.resize(n+1);
    rck.resize(n+1);
    for(int i=0;i<=n;i++)
        parent[i]=i,rck[i]=0;
}
 
int find(lli x){
    if(parent[x]==x)
        return x;
    return find(parent[x]);
}
 
void make_union(lli x, lli y){
    int xset = find(x);
    int yset = find(y);
    if(rck[xset]>rck[yset])
        parent[yset] = xset;
    else if(rck[yset]>rck[xset])
        parent[xset] = yset;
    else{
        parent[yset] = xset;
        rck[xset]++;
    }
}
 
bool cmp(pii a, pii b){
    return a.first < b.first;
}
 
void dfs(list<int>*adj, int vis[], lli &count, int source){
    vis[source] = true;
    count++;
    for(auto it = adj[source].begin();it!=adj[source].end();it++){
        if(!vis[*it])
            dfs(adj,vis,count,*it);
    }
}
 
void kruskal(vector<pii>edges, lli v, lli e, lli k){
    initDSU(v);
    vector<pii>MST;
    lli mstCost=0;
    for(int i=0;i<edges.size();i++){
        pii currEdge = edges[i];
        int source  = currEdge.second.first;
        int dest = currEdge.second.second;
        int sourceParent = find(source);
        int destParent = find(dest);
        if(sourceParent!=destParent){
            mstCost += currEdge.first;
            MST.push_back(currEdge);
            make_union(source,dest);    
        }
    }
 
    //now question begins;
    lli transformedRoads=0;
    int i=MST.size()-1;
    while(i>=0 && mstCost>k){
        transformedRoads++;
        
        mstCost-=(MST[i].first);
        mstCost+=1;
        i--;
    }
    if(mstCost>k)
        cout<<-1;
    else
        cout<<transformedRoads;
}
 
int main(){
    lli n,m,k,v1,v2,weight;
    cin>>n>>m>>k;
    vector<pii>edges;
    list<int>adj[n+1];
    for(int i=0;i<m;i++){
        cin>>v1>>v2>>weight;
        edges.push_back({weight,{v1,v2}});
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }
    lli count=0;
    int vis[n+1]={0};
    dfs(adj,vis,count,1);
    if(count!=n){
        cout<<-1;
        return 0;
    }
    sort(edges.begin(),edges.end(),cmp);
    kruskal(edges,n,m,k);
 
}
*/

/*    //Spoj CSTREET - Cobbled streets : Find MSTCOST and multiply with given price
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
#define pii pair<int,pair<int,int>>
using namespace std;
vector<int>parent,rck;

bool cmp(pii a, pii b){
    return a.first<b.first;
}

void initDSU(int n){
    parent.resize(n+1);
    rck.resize(n+1);
    for(int i=0;i<=n;i++)
        parent[i]=i,rck[i]=0;
}

int find(int x){
    if(parent[x]==x)
        return x;
    return find(parent[x]);
}

void make_union(int x, int y){
    int xset = find(x);
    int yset = find(y);
    if(rck[xset]>rck[yset]){
        parent[yset] = xset;
    }
    else if(rck[yset]>rck[xset]){
        parent[xset] = yset;
    }
    else{
        parent[yset] = xset;
        rck[xset]++;
    }
}

void kruskal(vector<pii>edges, int v, int e, long int p){
    initDSU(v);
    vector<pii>MST;
    for(int i=0;i<edges.size();i++){
        pii currentEdge = edges[i];
        int source = currentEdge.second.first;
        int dest = currentEdge.second.second;
        int sourceParent = find(source);
        int destParent = find(dest);
        if(sourceParent!=destParent){
            MST.push_back(currentEdge);
            make_union(sourceParent,destParent);
        }
    }
    long int sum=0;
    for(int i=0;i<MST.size();i++){
        sum+=(MST[i].first);
    }
    cout<<sum*p<<"\n";
}

void printEdges(vector<pii> a){
    for(int i=0;i<a.size();i++){
        pii p = a[i];
        cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<"\n";
    }
}

int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
        long int p;
        cin>>p;
        vector<pii>v;
        int ve,e,v1,v2,weight;
        cin>>ve;
        cin>>e;
        for(int i=0;i<e;i++){
            cin>>v1>>v2>>weight;
            v.push_back({weight,{v1,v2}});
        }
        sort(v.begin(),v.end(),cmp);
        //printEdges(v);
        kruskal(v,ve,e,p);
        }
}

*/

/*    //Spoj BLINNET : find mst between cities; Challenge - Input Formatting + MSTcost

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
#define pii pair<int,pair<int,int>>
using namespace std;
vector<int>parent,rck;

bool cmp(pii a, pii b){
    return a.first<b.first;
}

void initDSU(int n){
    parent.resize(n+1);
    rck.resize(n+1);
    for(int i=0;i<=n;i++)
        parent[i]=i,rck[i]=0;
}

int find(int x){
    if(parent[x]==x)
        return x;
    return find(parent[x]);
}

void make_union(int x, int y){
    int xset = find(x);
    int yset = find(y);
    if(rck[xset]>rck[yset]){
        parent[yset] = xset;
    }
    else if(rck[yset]>rck[xset]){
        parent[xset] = yset;
    }
    else{
        parent[yset] = xset;
        rck[xset]++;
    }
}

void kruskal(vector<pii>edges, int v){
    initDSU(v);
    vector<pii>MST;
    for(int i=0;i<edges.size();i++){
        pii currentEdge = edges[i];
        int source = currentEdge.second.first;
        int dest = currentEdge.second.second;
        int sourceParent = find(source);
        int destParent = find(dest);
        if(sourceParent!=destParent){
            MST.push_back(currentEdge);
            make_union(sourceParent,destParent);
        }
    }
    long int sum=0;
    for(int i=0;i<MST.size();i++){
        sum+=(MST[i].first);
    }
    cout<<sum<<"\n";
}

void printEdges(vector<pii> a){
    for(int i=0;i<a.size();i++){
        pii p = a[i];
        cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<"\n";
    }
}

int main(){
    fast;
    int t;
    cin>>t;
    string s,name;
    while(t--){
        int neighbours,v1,v2,weight;
        getline(cin,s);
        long int p;
        cin>>p;
        vector<pii>v;
        int num=1;
        for(int i=0;i<p;i++){
            v1 = num++;
            cin>>name;
            cin>>neighbours;
            for(int j=0;j<neighbours;j++){
                cin>>v2>>weight;
                v.push_back({weight,{v1,v2}});
            }
        }
        sort(v.begin(),v.end(),cmp);
        //printEdges(v);
        kruskal(v,p);
        }
}

*/


/*    O(v^3) //bellman ford algorithm; single source shortest path with negative weights
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
#define pii pair<int,pair<int,int>>
#define inf 1e9
using namespace std;
typedef long long int lli;

void bellmanFord(vector<pii>edges, int v,int source){
    int dist[v];
    for(int i=0;i<v;i+=1)
        dist[i]=inf;
    dist[source]=0;
    for(int i=1;i<=v-1;i++){    //running loop for v-1 times;
        //cout<<"i = "<<i<<"\n";
        for(int j=0;j<edges.size();j++){
            pii p = edges[j];
            int src = p.second.first;
            int dest = p.second.second;
            int wt = p.first;
            //cout<<"src, dest, wt = "<<src<<" "<<dest<<" "<<wt<<"\n";
            if(dist[src]!=inf && dist[dest] > dist[src]+wt){
                //cout<<"fsafa";
                dist[dest] = dist[src] + wt;
            }
        }
    }

    //checking negative weight cycle;
    for(int j=0;j<edges.size();j++){
        pii p = edges[j];
        int src = p.second.first;
        int dest = p.second.second;
        int wt = p.first;
        if(dist[src]!=inf && dist[dest] > dist[src]+wt ){
            cout<<"Negative wt cycle found\n";
            return;
        }
    }

    //Printing least distances;
    for(int i=0;i<v;i++)
        cout<<i<<" - "<<dist[i]<<"\n";



}

int main(){
    int v,e,v1,v2,weight;
    vector<pii>edges;
    cin>>v>>e;
    for(int i=0;i<e;i++){
        cin>>v1>>v2>>weight;
        edges.push_back({weight,{v1,v2}});
    }
    int source;
    cin>>source;
    bellmanFord(edges,v,source);
}

*/

/*    //floyd warshall algorithm; all source shortest path algorithm;

#include<bits/stdc++.h>
#define inf 1e9
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;
int main(){
    fast;
    int n,m,v1,v2,wt;
    cin>>n>>m;
    int adj[n+1][n+1];
    for(int i=0;i<=n;i++)
        for(int j=0;j<=n;j++)
            adj[i][j]=inf;
    for(int i=0;i<=n;i++)
        adj[i][i]=0;    //if diagonal elements gets changes, this means there is negative weight cycle;
    for(int i=0;i<m;i++){
        cin>>v1>>v2>>wt;
        adj[v1][v2]=wt;
    }

    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
            }
        }
    }
    int q,a,b;
    cin>>q;
    while(q--){
        cin>>a>>b;
        if(adj[a][b]==inf)
            cout<<-1<<"\n";
        else
            cout<<adj[a][b]<<"\n";
    }

}
*/

/*    //prims algo; //same as dijkstra little bit different;
#include<bits/stdc++.h>
#define pi pair<int,int>
using namespace std;

void prims(list<pi>*adj, int v, int source){
    int vis[v+1]={0};
    priority_queue<pi,vector<pi>,greater<pi>>pq;
    pq.push({0,source});
    long int mstCost=0;
    while(!pq.empty()){
        pi p = pq.top();
        pq.pop();
        if(vis[p.second])
            continue;
        mstCost += p.first;
        vis[p.second]=1;
        int f = p.second;
        for(auto it = adj[f].begin();it!=adj[f].end();it++){
            int vertex = (*it).second;
            int wt = (*it).first;
            if(!vis[vertex]){
                pq.push({wt,vertex});
            }
        }
    }
    cout<<mstCost;
}

int main(){
    int n,m,v1,v2,wt;
    cin>>n>>m;
    list<pi>adj[n+1];
    for(int i=0;i<m;i++){
        cin>>v1>>v2>>wt;
        adj[v1].push_back({wt,v2});
        adj[v2].push_back({wt,v1});
    }
    int source;
    cin>>source;
    prims(adj,n,source);
}

*/

/*    //euler tour ; TLE FLEURY ALGO
#include<bits/stdc++.h>
using namespace std;

int isEulerian(list<int>*adj, int v){
    int odd=0;
    for(int i=1;i<=v;i++)
        if(adj[i].size()%2==1)
            odd++;
    if(odd>2)
        return 0;
    return (odd)?1:2;
}

bool isConnected(list<int>*adj,int vis[] , int &count, int source){
    vis[source]=1;
    count++;
    for(auto it = adj[source].begin();it!=adj[source].end();it++){
        if(!vis[*it])
            isConnected(adj,vis,count,*it);
    }
}

int dfs(list<int>*adj,int source, int vis[]){
    vis[source] = 1;
    int count=1;
    for(auto it = adj[source].begin();it!=adj[source].end();it++){
        if(*it!=-1 && !vis[*it])
            count+=dfs(adj,*it,vis);
    }
    return count;
}

void removeEdge(list<int>*adj, int start, int child){
    auto iv = find(adj[start].begin(),adj[start].end(),child);
    *iv = -1;

    auto iu = find(adj[child].begin(),adj[child].end(),start);
    *iu = -1;
}

bool isValidEdge(list<int>*adj, int v,int start , int child){
    int count=0;
    for(auto it = adj[start].begin();it!=adj[start].end();it++){
        if(*it!=-1)
            count++;
    }
    if(count==1)
        return 1;   //Only single edge

    //remove edge and check if bridge or not;
    int vis[v+1]={0};
    int count1=0,count2=0;
    count1 = dfs(adj,start,vis);
    removeEdge(adj,start,child);
    int vis2[v+1]={0};
    count2 = dfs(adj,start,vis2);
    adj[start].push_back(child);
    adj[child].push_back(start);

    return (count1>count2)?false:true;
}


void printEulerPath(list<int>*adj , int v, int start){
    for(auto it = adj[start].begin();it!=adj[start].end();it++){
        int child = *it;
        if(child!=-1 && isValidEdge(adj,v,start,child)){
            cout<<start<<" "<<child<<"\n";
            removeEdge(adj, start, child);
            printEulerPath(adj,v,child);
        }
    }
}

void printEuler(list<int>*adj, int v){
    int start_node = 1;
    for(int i=1;i<=v;i++){
        if(adj[i].size()&1){ //node with odd degree
            start_node = i;
            break;
        }
    }
    //cout<<"start node = "<<start_node<<"\n";
    printEulerPath(adj,v,start_node);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int v,e,v1,v2;
    cin>>v>>e;
    int in[v+1]={0},out[v+1]={0};
    list<int>adj[v+1];
    for(int i=1;i<=e;i++){
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }
    int res = isEulerian(adj,v);
    int count = 0;
    int vis[v+1]={0};
    isConnected(adj,vis,count,1);
    for(int i=1;i<=v;i++){
        if(!vis[i]){
            cout<<"NO";
            return 0;
        }

    }

    if(res!=2 || (count!=v)){
        cout<<"NO";
        return 0;
    }
    cout<<"YES\n";
    printEuler(adj,v);

}
*/

/* euler tour working; TOURISTS;
#include <bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define mod 1000000007
using namespace std;

void dfs(int node,multiset <int> v[],vector<bool> &visited){
    visited[node] = true;
    for(auto child : v[node]){
        if(visited[child])continue;
        dfs(child,v,visited);
    }
}

void tour(int node,multiset<int> v[],set <pii> &s){
    while(!v[node].empty()){
        int child = *(v[node].begin());
        s.insert({node,child});
        v[node].erase(child);
        v[child].erase(node);
        tour(child,v,s);
    }
}

int main(){
    int n,e;cin>>n>>e;
    multiset <int> v[n];
    vector <pii> edges(e);
    for(int i=0;i<e;++i){
        int x,y;cin>>x>>y;
        edges[i] = {x-1,y-1};
        v[x-1].insert(y-1);
        v[y-1].insert(x-1);
    }
    for(int i=0;i<n;++i){
        if(v[i].size()%2){
            cout<<"NO";
            return 0;
        }
    }
    vector <bool> visited(n,false);
    dfs(0,v,visited);
    for(int i=0;i<n;++i){
        if(!visited[i]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES\n";
    set <pii> s;
    for(int i=0;i<n;++i){
        tour(i,v,s);
    }
    for(auto p : edges){
        if(s.find(p)==s.end()){
            cout<<p.second+1<<" "<<p.first+1<<"\n";
        }
        else cout<<p.first+1<<" "<<p.second+1<<"\n";
    }
}

*/

/*    //briges are edges which when deleted increases number of components;
    //SPOJ EC_P find number of bridges
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
void dfs(list<int>*adj , int source, int parent, set<pair<int,int>> &bridges, int id, int low[], int ids[], int vis[]){
    vis[source]=1;
    low[source] = ids[source] = ++id;
    for(auto it = adj[source].begin();it!=adj[source].end();it++){
        if(*it == parent)
            continue;
        if(!vis[*it]){
            dfs(adj,*it,source,bridges,id,low,ids,vis);
            low[source] = min(low[source], low[*it]);
            if(ids[source]<low[*it]){
                if(source<*it)
                    bridges.insert({source,*it});
                else
                    bridges.insert({*it,source});
            }
        }
        else{
            low[source] = min(low[source],ids[*it]);
        }
    }

}

void findBridges(list<int>*adj, int v, int e){
    set<pair<int,int>> bridges;
    int id=0;
    int low[v+1] = {0};
    int ids[v+1] = {0};
    int vis[v+1] = {0};
    for(int i=1;i<=v;i++)
        if(!vis[i])
            dfs(adj,i,-1,bridges,id,low,ids,vis);
    if(bridges.size()>0){
        cout<<bridges.size()<<"\n";
        for(auto it : bridges){
            cout<<it.first<<" "<<it.second<<"\n";
        }
    }
    else
        cout<<"Sin bloqueos\n";
}

int main(){
    fast;
    int t,v,e,v1,v2;
    cin>>t;
    int i=1;
    while(t--){
        cin>>v>>e;
        list<int>adj[v+1];
        for(int i=0;i<e;i++){
            cin>>v1>>v2;
            adj[v1].push_back(v2);
            adj[v2].push_back(v1);
        }
        cout<<"Caso #"<<i<<"\n";
        i++;
        findBridges(adj,v,e);
    }
}

*/

/*       //Articulation Points ; SPOJ Submerge

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
void dfs(int &outgoingEdgeCount, list<int>*adj , int source, int parent, set<pair<int,int>> &bridges, int id, int low[], int ids[], int vis[], bool ap[]){
    vis[source]=1;
    if(source == parent)
        outgoingEdgeCount++;
    low[source] = ids[source] = ++id;
    for(auto it = adj[source].begin();it!=adj[source].end();it++){
        if(*it == parent)
            continue;
        if(!vis[*it]){
            dfs(outgoingEdgeCount,adj,*it,source,bridges,id,low,ids,vis,ap);
            low[source] = min(low[source], low[*it]);
            if(ids[source]<=low[*it]){
                ap[source] = true;
            }
        }
        else{
            low[source] = min(low[source],ids[*it]);
        }
    }

}

void findBridges(list<int>*adj, int v, int e, bool ap[]){
    set<pair<int,int>> bridges;
    int id=0;
    int low[v+1] = {0};
    int ids[v+1] = {0};
    int vis[v+1] = {0};
    for(int i=1;i<=v;i++){
        int outgoingEdgeCount=0;
        if(!vis[i]){
            dfs(outgoingEdgeCount,adj,i,-1,bridges,id,low,ids,vis,ap);
            ap[i] = (outgoingEdgeCount > 1);
        }
    }
    int totalAp = 0 ;
    for(int i=1;i<=v;i++)
        if(ap[i])
            totalAp++;
    cout<<totalAp<<"\n";


}

int main(){
    fast;
    int t,v,e,v1,v2;
    while(1){
        cin>>v>>e;
        if(v==0  && e==0)
            break;
        list<int>adj[v+1];
        for(int i=0;i<e;i++){
            cin>>v1>>v2;
            adj[v1].push_back(v2);
            adj[v2].push_back(v1);
        }
        bool ap[v+1]={0};
        findBridges(adj,v,e,ap);
    }
}

*/

/* ////Disjoint Sets and union
//Num of components;
//FIND WIth path compression;
//Size of a component

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
#define pi pair<int,int>
using namespace std;
typedef long long int lli;
vector<int>size,parent;

void initDSU(int v){
    size.resize(v);
    parent.resize(v);
    for(int i=0;i<v;i++)
        size[i]=1,parent[i]=i;
}

void disjointSet(vector<pi> edges, int v, int e){
    initDSU(v);
}

int find(int x){
    int root = x;
    while(root!=parent[x])
       root = parent[root];

    //path compression;
    while(x!=root){
        int next = parent[x];
        parent[x] = root;
        x = next;
    }
    return root;
}

void make_union(int x, int y, int &numC){
    int xset = find(x);
    int yset = find(y);
    if(xset==yset)
        return;

    cout<<"union = xset, yset = "<<xset<<" "<<yset<<"\n";
    //merging components;
    if(size[xset] < size[yset]){
        parent[xset] = yset;
        size[yset] += size[xset];
        //cout<<"parent[x] =
    }
    else{
        size[xset]+=size[yset];
        parent[yset] = xset;
    }
    numC--;
}

int main(){
    int v,e,v1,v2;
    cin>>v>>e;
    int numOfComponents = v;
    vector<pi>edges;
    for(int i=0;i<e;i++){
        cin>>v1>>v2;
        edges.push_back({v1,v2});
    }
    disjointSet(edges,v,e);
    int q,type,a,b,x;
    cin>>q;
    while(q--){
        cin>>type>>a>>b;
        if(type==1){
            cout<<"find(a) , find(b) = "<<find(a)<<" "<<find(b)<<"\n";
            if(find(a) == find(b))
                cout<<"In same component\n";
            else
                cout<<"Not in same component\n";
        }
        else if(type==2)
            cout<<"Number of components = "<<numOfComponents<<"\n";
        else if(type==3)
            cin>>x,cout<<"size of component : "<<x<<" is  = "<<size[x]<<"\n";
        else
            make_union(a,b,numOfComponents);
    }
}
*/

/*    //CodeChef DishDown //DSU
    //CodeChef Dishown //DSU
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;
vector<int>parent,size;

void initDSU(int n){
    parent.resize(n);
    size.resize(n);
    for(int i=0;i<n;i++)
        parent[i]=i;
}

//path compression
int find(int node){
    if(parent[node]!=node)
    {
        parent[node]=find(parent[node]);
    }
    return parent[node];
}

//Iterative
//int find(int i){
//     while(parent[ i ] != i){
//        parent[ i ] = parent[ parent[ i ] ] ;
//        i = parent[ i ];
//    }
//    return i;
//}


void make_union(int x, int y){
    int xset = find(x);
    int yset = find(y);
    if(xset==yset)
        return;
    if(size[xset]>size[yset]){
        parent[yset] = xset;
    }
    else if(size[yset]>size[xset]){
        parent[xset] = yset;
    }
}

int main(){
    fast;
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        initDSU(n);
        for(int i=0;i<n;i++)
            cin>>size[i];
        int q,type,a,b,x;
        cin>>q;
        while(q--){
            cin>>type;
            if(type==0){
                cin>>a>>b;
                a-=1;b-=1;
                int xset = find(a);
                int yset = find(b);
                if(xset==yset){
                    cout<<"Invalid query!\n";
                }
                else{
                    make_union(a,b);
                }
            }
            else{
                cin>>x;
                x-=1;
                cout<<find(x)+1<<"\n";
            }
        }
    }
}

*/



//HEAPS

 /*   //Heaps Codechef KSUBSUM Kth max contiguous sum
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;
int main(){
    fast;
    int t;
    cin>>t; 
    while(t--){
        int n,k1,k2,k3;
        cin>>n>>k1>>k2>>k3;
        int arr[n+1];
        for(int i=1;i<=n;i++)
            cin>>arr[i],arr[i]+=arr[i-1];

        priority_queue<int,vector<int>,greater<int>>pq;

        //making contiguous sum;
        for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j++){
                int currSum = arr[j] - arr[i-1];
                if(pq.size()<k3){
                    pq.push(currSum);
                }
                else{
                    if(currSum>pq.top()){
                        pq.pop();
                        pq.push(currSum);
                    }
                }
            }
        }

        int ans[2013];
        int currK = k3;
        while(!pq.empty()){
            ans[currK--] = pq.top();
            pq.pop();
        }
        cout<<ans[k1]<<" "<<ans[k2]<<" "<<ans[k3]<<"\n";

    }
}
*/

/*    //Heaps weirdfn spoj;

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);

using namespace std;

const int mod  = 1000000007;

int main(){
    fast;
    int t,a,b,c,n;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>n;
        priority_queue<int> bottomHalf;
        priority_queue<int,vector<int>,greater<int>> topHalf;
        bottomHalf.push(1); //f[1]
        int bSize=1,tSize=0;
        long long result=1;
        for(int i=2;i<=n;i++){
            int median = bottomHalf.top();
            int curr = (1LL*a*median + 1LL*b*i + c)%mod;
            bottomHalf.push(curr);
            bSize++;
            while(bSize > tSize){
                int val = bottomHalf.top();
                bottomHalf.pop();
                topHalf.push(val);
                bSize--;tSize++;
            }
            while(bSize < tSize){
                int val = topHalf.top();
                topHalf.pop();
                bottomHalf.push(val);
                tSize--;
                bSize++;
            }
            while(!bottomHalf.empty() && (!topHalf.empty() && bottomHalf.top() > topHalf.top())){
                int val = bottomHalf.top();bottomHalf.pop();
                int val2 = topHalf.top();topHalf.pop();
                bottomHalf.push(val2);
                topHalf.push(val);
            }
            result+=curr;
        }
        cout<<result<<"\n";
    }

}

*/

/*    //heaps SPOJ running median again;

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);

using namespace std;

const int mod  = 1000000007;
typedef long long lli;
int main(){
    fast;
    lli t,n,val;
    cin>>t;
    while(t--){
        priority_queue<lli> bottomHalf;
        priority_queue<lli,vector<lli>,greater<lli>> topHalf;
        int bSize=0,tSize=0;
        while(1){
            cin>>val;
            if(val==0)
                break;
            if(val==-1){
                cout<<bottomHalf.top()<<"\n";
                bottomHalf.pop();
                //bottomHalf.push(val);
                bSize--;
                while(bSize > tSize){
                    lli val = bottomHalf.top();
                    bottomHalf.pop();
                    topHalf.push(val);
                    bSize--;tSize++;
                }
                while(bSize < tSize){
                    lli val = topHalf.top();
                    topHalf.pop();
                    bottomHalf.push(val);
                    tSize--;
                    bSize++;
                }
                while(!bottomHalf.empty() && (!topHalf.empty() && bottomHalf.top() > topHalf.top())){
                    lli val = bottomHalf.top();bottomHalf.pop();
                    lli val2 = topHalf.top();topHalf.pop();
                    bottomHalf.push(val2);
                    topHalf.push(val);
                }
            }
            else{
                bottomHalf.push(val);
                bSize++;
                while(bSize > tSize){
                    lli val = bottomHalf.top();
                    bottomHalf.pop();
                    topHalf.push(val);
                    bSize--;tSize++;
                }
                while(bSize < tSize){
                    lli val = topHalf.top();
                    topHalf.pop();
                    bottomHalf.push(val);
                    tSize--;
                    bSize++;
                }
                while(!bottomHalf.empty() && (!topHalf.empty() && bottomHalf.top() > topHalf.top())){
                    lli val = bottomHalf.top();bottomHalf.pop();
                    lli val2 = topHalf.top();topHalf.pop();
                    bottomHalf.push(val2);
                    topHalf.push(val);
                }
            }
        }
    }

}
*/

/*    //Spoj Minstock;

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;
int main(){
    fast;
    lli t;
    cin>>t;
    lli type,cost;
    string name;
    int i=1;
    unordered_map<lli,string>m1;
    unordered_map<string,lli>m2;
    set<lli>costs;
    while(t--){
        cin>>type;
        if(type==1){
            cin>>name>>cost;
            costs.insert(cost);
            m1[cost] = name;
            m2[name] = cost;
        }
        else if(type==2){
            //change cost
            cin>>name>>cost;
            costs.erase(m2[name]);  //remove cost for this name;
            costs.insert(cost);
            m1[cost] = name;
            m2[name] = cost;
        }
        else{
            cin>>name;
            lli minCost = *(costs.begin());
            costs.erase(minCost);
            cout<<m1[minCost]<<" "<<i<<"\n";
        }
        i++;
//cout<<"\n";
    }

}

*/


/* //SEGTREE HORRIBLE SPOJ
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;

void rangeUpdateLazy(lli lazy[], lli st[], lli qlow, lli qhigh, lli uV, lli low, lli high, lli pos){
    if(lazy[pos]!=0){
        st[pos] += (high-low+1)*lazy[pos];
        if(low!=high){
            lazy[2*pos] += lazy[pos];
            lazy[2*pos+1] += lazy[pos];
        }
        lazy[pos]=0;
    }

    if(qlow>high || qhigh<low)
        return;

    if(qlow<=low && qhigh>=high){
        st[pos] += (high-low+1)*uV;
        if(low!=high){
            lazy[2*pos]+=uV;
            lazy[2*pos+1]+=uV;
        }
    }
    else{
        int mid = (low+high)/2;
        rangeUpdateLazy(lazy,st,qlow,qhigh,uV,low,mid,2*pos);
        rangeUpdateLazy(lazy,st,qlow,qhigh,uV,mid+1,high,2*pos+1);
        st[pos] = st[2*pos] + st[2*pos+1];
    }

}

lli RMQ(lli lazy[], lli st[] ,lli qlow, lli qhigh, lli low, lli high, lli pos){
    if(lazy[pos]!=0){
        st[pos]+=(high-low+1)*lazy[pos];
        if(low!=high){
            lazy[2*pos]+=lazy[pos];
            lazy[2*pos+1] += lazy[pos];
        }
        lazy[pos]=0;
    }

    if(qlow>high || qhigh<low)
        return 0;
    if(qlow<=low && qhigh>=high){
        return st[pos];
    }
    else{
        int mid = (low+high)/2;
        return RMQ(lazy,st,qlow,qhigh,low,mid,2*pos)+RMQ(lazy,st,qlow,qhigh,mid+1,high,2*pos+1);
    }
}

int main(){
    fast;
    int t;
    lli type,l,r,x;
    cin>>t;
    while(t--){
        lli n,c;
        cin>>n>>c;
        lli a[n+1]={0};
        lli st[4*n+1]={0};
        lli lazy[4*n+1]={0};
        for(int i=0;i<c;i++){
            cin>>type>>l>>r;
            if(type==0){
                cin>>x;
                rangeUpdateLazy(lazy,st,l,r,x,1,n,1);
            }
            else{
                cout<<RMQ(lazy,st,l,r,1,n,1)<<"\n";
            }
        }
    }
}
*/


/*    //hackerearth disjoint sets practice problem : print number of components at each step after adding an edge.
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;
vector<int>parent,rck;

void init(int n){
    parent.resize(n+1);rck.resize(n+1);
    for(int i=1;i<=n;i++)
        parent[i]=i,rck[i]=1;
}
int find(int x){
    while(parent[x]!=x)
        x = parent[x];
    return x;
}

void make_union(int x, int y){
    //cout<<"in make =
    int xset = find(x);
    int yset = find(y);
    //cout<<"xset, yset = "<<xset<<" "<<yset<<"\n";
    if(xset==yset)
        return;
    if(rck[xset]>rck[yset]){
        parent[yset] = parent[xset];
        rck[xset]+=rck[yset];
        rck[yset]=0;
    }
    else {
        parent[xset] = parent[yset];
        rck[yset]+=rck[xset];
        rck[xset]=0;
    }

}

void printComp(){
    vector<int>v;
    //cout<<"rck.size() = "<<rck.size()<<"\n";
    for(int i=1;i<rck.size();i++)
        if(rck[i]>0)
            v.push_back(rck[i]);

    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<"\n";
}

int main(){
    fast;
    int n,m,x,y;
    cin>>n>>m;
    init(n);
    for(int i=0;i<m;i++){
        cin>>x>>y;
        make_union(x,y);
        printComp();
    }


}
*/


/*  //SPOJ TDKPRIMES


#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;
vector<bool>v(100000001,true);
lli arr[100000001];
void calculate(){
    lli n = 100000000;
    v[0] = v[1] = false;
    for(int i=4;i<=n;i+=2)
        v[i] = false;   //setting all even false at once;
    for(int i=3;i*i<=n;i+=2){
        if(v[i]){
            for(int j=i*i;j<=n;j+=(2*i))
                v[j]=false;
        }
    }
    int j=0;
    arr[0]=2;
    for(int i=3;i<=n;i+=2)
        if(v[i])
            arr[++j]=i;
    for(int i=1;i<=j;i+=100)
        cout<<arr[i-1]<<"\n";
    //cout<<"total primes till 10^8 = "<<j<<"\n";

}

int main(){
    fast;
    calculate();

}
*/

/*    //SPOJ PRIME 1

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;

void segmentedSieve(lli n, lli m){
    lli sq = sqrt(m);
    int j=0;
    lli primes[sq+1];
    lli arr[sq+1];
    for(int i=0;i<=sq+1;i++)
        arr[i]=1;
    //cout<<"arr[1],0] = "<<arr[0]<<" "<<arr[1]<<"\n";
    for(int i=2;i<=sq;i++){
        if(arr[i]){
            primes[j] = i;
            j++;
            for(int k=i+i;k<=sq;k+=i){
                arr[k]=0;
            }
        }
    }
    //cout<<"j = "<<j<<"\n";
    int diff = (m-n+1);
    lli ar[diff];
    for(int i=0;i<diff;i++)
        ar[i]=1;
    for(int k=0;k<j;k++){
        int div = n/primes[k];
        div*=primes[k];
        while(div<=m){
            if(div>=n && primes[k]!=div)
                ar[div-n]=0;
            div+=primes[k];
        }
    }

    for(int i=0;i<diff;i++){
        if(ar[i] && (i+n)!=1)
            cout<<i+n<<"\n";
        }
    cout<<"\n";
}

int main(){
    fast;
    lli t;
    cin>>t;
    lli n,m;
    while(t--){
        cin>>n>>m;
        segmentedSieve(n,m);
    }
}

*/

/*    //PRINT PRIME INTERVALS

    #include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;

void segmentedSieve(lli n, lli m){
    lli sq = sqrt(m);
    lli primes[sq+1];
    lli arr[sq+1];
    for(int i=0;i<=sq+1;i++){
        arr[i]=1;
    }
    int j=0;
    for(int i=2;i<=sq;i++){
        if(arr[i]){
            primes[j] = i; j++;
            for(int k=i+i;k<=sq;k+=i)
                arr[k]=0;
        }
    }
    int diff = (m-n+1);
    lli ar[diff];
    for(int i=0;i<diff;i++)
        ar[i]=1;
    for(int i=0;i<j;i++){
        int div = n/primes[i];
        div*=primes[i];
        while(div<=m){
            if(div>=n && primes[i]!=div)
                ar[div-n]=0;
            div+=primes[i];
        }
    }

    for(int i=0;i<diff;i++)
        if(ar[i] && (i+n)!=1)
            cout<<i+n<<"\n";
}

int main(){
    fast;
    lli t;
    cin>>t;
    lli n,m;
    while(t--){
        cin>>n>>m;
        segmentedSieve(n,m);
    }

}

*/

/* //Checking Prime
bool isPrime(lli n){
    if(n<=1)
        return 0;
    if(n<=3)
        return 1;
    if(n%2==0 || n%3==0)
        return 0;
    for(int i=5;i*i<=n;i+=6){
        if(n%i==0 || n%(i+2==0))
            return 0;
    }
    return 1;

}

int main(){
    lli n;
    cin>>n;
    if(isPrime(n))
        cout<<"Yes Prime\n";
    else
        cout<<"Not prime\n";
}

*/


/*  CHKHUG
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
#define mod 1000000007
using namespace std;
typedef long long  lli;

lli fastExp(lli base, lli exp){
    lli res=1;
    while(exp>0){
        //cout<<res<<"\n";
        if(exp%2==1)
            res = (res*base)%mod;
        base = (base*base)%mod;
        exp/=2;
    }
    //cout<<"Res = "<<res<<"\n";
    return res;
}

int main(){
    lli t,n;
    fast;
    //f(N) = 2ceil((N+1)/2) + 2floor((N+1)/2) - 2, for any N
    fast;
    cin>>t;
    while(t--){
        cin>>n;
        n++;
        lli exp1 = n/2;
        //cout<<"exp1, = "<<(n+1)/2 <<" "<<ceil((n+1)/2)<<"\n";
        lli exp2 = n-exp1;
        //cout<<"exp1,exp2= "<<exp1<<" "<<exp2<<"\n";
        lli fin = fastExp(2,exp1)+fastExp(2,exp2)-2;
        cout<<(int)fin%mod<<"\n";
    }
}
)
*/

/* //FAST MODULO

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;

void fastExp(lli base, lli exp, lli mod){
    lli res=1;
    while(exp>0){
        if(exp&1)   //exp%3==1
            res = (res*base)%mod;
        base = (base*base)%mod;
        exp = exp>>1;   //exp/=2;
    }
    cout<<res;
}

int main(){
    lli base,exp,mod;
    cin>>base>>exp>>mod;
    fastExp(base,exp,mod);
}

/*
    When you see the question regarding powers or something,
    try to always make them in the formula : 2^n-1 or something like this.
    it might be separate for odd and even n;
*/




