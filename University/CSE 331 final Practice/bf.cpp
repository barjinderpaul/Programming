#include<bits/stdc++.h>
///...................................*****.................................................///
///        Author :  Raihan Khan Raka  ( raihankhanraka@gmail.com )                         ///
///                  Department of Computer Science                                         ///
///                  & Engineering                                                          ///
///                  Comilla University , Bangladesh.                                       ///
///...................................*****.................................................///

/*....................................Values................................................*/
#define       inf                  1<<30
#define       p5                   100007
#define       p6                   1000007
#define       PI                   acos(-1)
#define       M                    1000000007

/*....................................Functions.............................................*/
#define       sqr(x)               x*x
#define       sc                   scanf
#define       pf                   printf
#define       scin(x)              sc("%d",&(x))
#define       scin2(x,y)            sc("d",&(x),&(y))
#define       scin3(x,y,z)          sc("d%d",&(x),&(y),&(z))
#define       scln(x)              sc("%lld",&(x))
#define       min3(a,b,c)          min(a,min(b,c))
#define       max3(a,b,c)          max(a,max(b,c))
#define       all(v)               v.begin(), v.end()
#define       ok                   cout << "ok" << endl
#define       mem(x,y)             memset(x,y,sizeof(x))
#define       READ(f)              freopen(f, "r", stdin)
#define       WRITE(f)             freopen(f, "w", stdout)

/*...................................Data_Types............................................*/
#define       lli                  long long int
#define       ull                  unsigned long long int
#define       pii                  pair < int, int>
#define       pll                  pair < ll, ll>
#define       veci                 vector<int>
#define       vecl                 vector<long long int>
#define       vecp                 vector<  pair<int,int> >
#define       mapstrint            map< string , int >
#define       mapstrstr            map< string , string >
#define       mapint               map< int, int >
#define       uset                 unordered_set
#define       umap                 unordered_map
#define       pq                   priority_queue

#define       pb                   push_back
#define       mp                   make_pair
#define       ss                   stringstream

/*.....................................Loops...............................................*/
#define       rep( i , a , b )     for( i=a ; i<b ; i++)
#define       rev( i , a , b )     for( i=a ; i>=b ; i--)
#define       repx( i ,a,b, x)     for( i=a ; i<b ; i+=x)

#define       FastRead             ios_base::sync_with_stdio(0);cin.tie(0)

using namespace std;

struct edges
{
    int u,v,w;
};
edges edge[1024];
int dis[1024],path[1024],n,e;
int relax()
{
    int i,cnt=0;
    for(i=0;i<e;i++)
    {
        if( dis[edge[i].u] + edge[i].w < dis[edge[i].v] )
        {
            dis[edge[i].v] = dis[edge[i].u] + edge[i].w ;
            path[edge[i].v] = edge[i].u; cnt++;
        }
    }
    return cnt;
}
int bellman(int src,int des)
{
    int i,y;
    for(i=0;i<n;i++) dis[i]=inf;
                               dis[src]=0;

    for(i=0;i<n-1;i++)
    {
       y=relax();
       if(y==0) break;
    }

    if(relax()==0) { cout << "Graph contains a negative cycle" << endl; return -1; }
    return dis[des];

}
int main()
{
    int i,u,v,w,src,des,spath,k;
    vecl fullpath;
    //READ("input.txt");
    cin >> n >> e ;
    for(i=0;i<e;i++)
    {
        scin(u);
        scin(v);
        scin(w);
        edge[i].u=u;
        edge[i].v=v;
        edge[i].w=w;
    }
    for(i=0;i<n;i++)
        path[i]=inf;

    scin(src);
    scin(des);
    k=des;

    spath=bellman(src,des);
    if(spath!=-1)
    {
    cout << spath << endl<< endl;


    fullpath.pb(des);
    des=path[des];
    while(des!=k)
    {

        fullpath.pb(des);
         //cout << path[des] << " ";
        des=path[des];
    }

    for(i=fullpath.size()-1;i>=0;i--)
        cout << fullpath[i] << " ",cout << endl;
    }

    return 0;
}
