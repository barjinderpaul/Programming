#include <bits/stdc++.h>
#define MAX(x,y) ((x)>(y)?(x):(y))
#define MIN(x,y) ((x)<(y)?(x):(y))
#define pb push_back
#define mp make_pair
#define rep(i,n) for(int i=0;i<n;i++)
#define repr(i,j,n) for(i=j;i<=n;i++)
#define endl '\n'
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vector<int> > graph;
const ll maximumNumber = (ll) 1e5+9;
const ll moddd = (ll) 1e9+7;


vll t(maximumNumber);
vector<pair<ll, ll> > r(maximumNumber);

class returnAns{
public:
    bool operator()(pair<ll, ll> l, pair<ll, ll> r){
        if(l.second!=r.second) return l.second>r.second;
        else return l.first>r.first;
    }
};

int main()
{
	std::ios::sync_with_stdio(0);
    ll n,m;
    cin>>n>>m;
    rep(k, m) cin>>t[k];
    priority_queue<pair<ll, ll>, vector<pair<ll, ll> >,  returnAns> q;
    rep(k, n) q.push(mp(k, 0));
    rep(k, m){
        pair<ll, ll> th=q.top();
        q.pop();
        r[k] = th;
        th.second = th.second + t[k];
        q.push(th);

    }

    rep(i, m) cout<<r[i].first<<" "<<r[i].second<<endl;

}
