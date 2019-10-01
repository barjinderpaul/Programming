
/*    //Spoj MJTHNUM;
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void build_tree(pair<ll,int>*a,vector<int>*st, int low, int high, int pos){
    if(low==high)
        st[pos].push_back(a[low].second);
    else{
        int mid = (low+high)/2;
        build_tree(a,st,low,mid,2*pos);
        build_tree(a,st,mid+1,high,2*pos+1);
        merge(st[2*pos].begin(),st[2*pos].end(),st[2*pos+1].begin(),st[2*pos+1].end(),back_inserter(st[pos]));
    }
}

int query(vector<int>*st, int qlow, int qhigh, int k , int low, int high, int pos){
    if(low==high){
        cout<<" low ===== high\n";
        for(auto it = st[pos].begin();it!=st[pos].end();it++)
            cout<<*it<<" ";
        cout<<"\n";
        cout<<"end displaying\n";
        return st[pos][0];

    }
    else{
        int mid = (low+high)/2;
        auto it = upper_bound(st[2*pos].begin(),st[2*pos].end(),qhigh);
        int total = it - lower_bound(st[2*pos].begin(),st[2*pos].end(),qlow);
        cout<<"pos,low,high = "<<pos<<" "<<low<<" "<<high<<"\n";
            cout<<"total , k = "<<total<<" "<<k<<"\n";
        if(total>=k)
            return query(st,qlow,qhigh,k,low,mid,2*pos);
        else
            return query(st,qlow,qhigh,k-total,mid+1,high,2*pos+1);
    }
}

int main(){
    ll n,q,val;
    cin>>n>>q;
    ll a2[n+1];
    pair<ll,int> a[n+1];
    for(int i=1;i<=n;i++){
        cin>>val;
        a2[i]=val;
        a[i] = make_pair(val,i);
    }
    sort(a+1,a+n+1);
    vector<int> st[4*n+1];
    build_tree(a,st,1,n,1);
    int l,r,k;
    while(q--){
        cin>>l>>r>>k;
        int idx = query(st,l,r,k,1,n,1);
        cout<<a2[idx]<<"\n";
    }
}

*/

/*    //lazy propagation in SegTree RMQ;
#include<bits/stdc++.h>
using namespace std;
int lazy[1000]={0};

void build_tree(int *a, int *st, int low, int high, int pos){
    if(low==high)
        st[pos] = a[low];
    else{
        int mid = (low+high)/2;
        build_tree(a,st,low,mid,2*pos);
        build_tree(a,st,mid+1,high,2*pos+1);
        st[pos] = min(st[2*pos],st[2*pos+1]);
    }
}

int RMQ(int *st, int *lazy, int qlow, int qhigh, int low, int high, int pos){
    //cout<<"pos, lazy[pos] = "<<pos<<" "<<lazy[pos]<<"\n";
    if(lazy[pos]!=0){
        st[pos]+=lazy[pos];
        if(low!=high){
            lazy[2*pos]+=lazy[pos];
            lazy[2*pos+1]+=lazy[pos];
        }
        lazy[pos]=0;
    }
    if(qlow>high || qhigh<low)
        return INT_MAX;
    if(qlow<=low && qhigh>=high)
        return st[pos];
    else{
        int mid = (low+high)/2;
        return min(RMQ(st,lazy,qlow,qhigh,low,mid,2*pos),RMQ(st,lazy,qlow,qhigh,mid+1,high,2*pos+1));
    }
}

void updateLazy(int *st, int lazy[], int qlow, int qhigh, int val, int low, int high, int pos){
    if(lazy[pos]!=0){
        st[pos]+=lazy[pos];
        if(low!=high){
            lazy[2*pos]+=lazy[pos];
            lazy[2*pos+1]+=lazy[pos];
        }
        lazy[pos]=0;
    }
    if(qlow>high || qhigh<low)
        return;
    if(qlow<=low && qhigh>=high){
        st[pos]+=val;
        if(low!=high){
            lazy[2*pos]+=val;
            lazy[2*pos+1]+=val;
        }
        return;
    }
    else{
        int mid = (low+high)/2;
        updateLazy(st,lazy,qlow,qhigh,val,low,mid,2*pos);
        updateLazy(st,lazy,qlow,qhigh,val,mid+1,high,2*pos+1);
        st[pos] = min(st[2*pos],st[2*pos+1]);
    }
}

int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int st[4*n+1];
    build_tree(a,st,1,n,1);
    int q;
    cin>>q;
    int type,l,r,x;
    while(q--){
        cin>>type>>l>>r;
        if(type==1){    //update
            cin>>x;
            updateLazy(st,lazy,l,r,x,1,n,1);
        }
        else
            cout<<RMQ(st,lazy,l,r,1,n,1)<<"\n";
    }
}


*/

/*    //Codechef - RGCD
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long ll;
ll lazy[90001];

void build_tree(int *a, ll *st, int low, int high, int pos){
    if(low==high)
        st[pos] = a[low];
    else{
        int mid = (low+high)/2;
        build_tree(a,st,low,mid,2*pos);
        build_tree(a,st,mid+1,high,2*pos+1);
        st[pos] = __gcd(st[2*pos+1],st[2*pos]);
    }
}

void update(ll *st, int qlow, int qhigh, int m, int low, int high, int pos){
    if(lazy[pos]!=1){
        st[pos]*=lazy[pos];
        if(low!=high){
            lazy[2*pos]*=lazy[pos];
            lazy[2*pos+1]*=lazy[pos];
        }
        lazy[pos]=1;
    }
    if(qlow>high || qhigh<low)
        return;
    if(qlow<=low && qhigh>=high){
        st[pos]*=m;
        if(low!=high){
            lazy[2*pos]*=m;
            lazy[2*pos+1]*=m;
        }
        return;
    }
    else{
        int mid = (low+high)/2;
        update(st,qlow,qhigh,m,low,mid,2*pos);
        update(st,qlow,qhigh,m,mid+1,high,2*pos+1);
        st[pos]=__gcd(st[2*pos],st[2*pos+1]);
    }
}

long long query(ll *st, int qlow, int qhigh, int low, int high, int pos){
    if(lazy[pos]!=1){
        st[pos]*=lazy[pos];
        if(low!=high){
            lazy[2*pos]*=lazy[pos];
            lazy[2*pos+1]*=lazy[pos];
        }
        lazy[pos]=1;
    }
    if(qlow>high || qhigh<low)
        return 0;
    if(qlow<=low && qhigh>=high)
        return st[pos];
    else{
        int mid = (low+high)/2;
        return __gcd(query(st,qlow,qhigh,low,mid,2*pos),query(st,qlow,qhigh,mid+1,high,2*pos+1));
    }
}

int main(){
    fast;
    int t,n,q;
    cin>>t;
    while(t--){
        for(int i=0;i<=90000;i++)
            lazy[i]=1;
        cin>>n>>q;
        int a[n+1];
        for(int i=1;i<=n;i++)
            cin>>a[i];
        ll st[4*n+1];
        build_tree(a,st,1,n,1);
        int type,l,r,m;
        for(int i=0;i<q;i++){
            cin>>type>>l>>r;
            l++;r++;
            if(type==2){
                cin>>m;
                update(st,l,r,m,1,n,1);
            }
            else{
                cout<<query(st,l,r,1,n,1)<<"\n";
                }
        }
    }

}
*/

/*    //SPOJ MULTQ3 without lazy; TLE;

#include<bits/stdc++.h>
using namespace std;

void update(int arr[], int st[], int qlow, int qhigh, int low, int high, int pos){
    if(qlow>high || qhigh<low)
        return;
    if(low==high){
        arr[low]++;
        if(arr[low]%3==0)
            st[pos]=1;
        else
            st[pos]=0;
    }

    else{
        int mid = (low+high)/2;
        update(arr,st,qlow,qhigh,low,mid,2*pos);
        update(arr,st,qlow,qhigh,mid+1,high,2*pos+1);
        st[pos] = st[2*pos] + st[2*pos+1];
    }
}

int query(int st[], int qlow, int qhigh, int low, int high, int pos){
    if(qlow>high || qhigh<low)
        return 0;
    if(qlow<=low && qhigh>=high)
        return st[pos];
    else{
        int mid = (low+high)/2;
        return query(st,qlow,qhigh,low,mid,2*pos) + query(st,qlow,qhigh,mid+1,high,2*pos+1);
    }
}

void build_tree(int arr[] , int st[] , int low, int high, int pos){
    if(low==high){
        if(arr[low]%3==0)
            st[pos]=1;
        else
            st[pos]=0;
    }
    else{
        int mid = (low+high)/2;
        build_tree(arr,st,low,mid,2*pos);
        build_tree(arr,st,mid+1,high,2*pos+1);
        st[pos] = st[2*pos] + st[2*pos+1];
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,q;
    cin>>n>>q;
    int st[4*n+1];
    int arr[n+1]={0};
    build_tree(arr,st,1,n,1);
    int type,l,r;
    while(q--){
        cin>>type>>l>>r;
        l++;r++;
        if(type==0){
            update(arr,st,l,r,1,n,1);
        }
        else
            cout<<query(st,l,r,1,n,1)<<"\n";
    }
}

*/

/*    //Segment Tree Revision point update;

#include<bits/stdc++.h>
using namespace std;

void build_tree(int a[], int st[], int low, int high, int pos){
    if(low==high)
        st[pos] = a[low];
    else{
        int mid = (low+high)/2;
        build_tree(a,st,low,mid,2*pos);
        build_tree(a,st,mid+1,high,2*pos+1);
        st[pos] =  min(st[2*pos],st[2*pos+1]);
    }
}

int query(int st[], int qlow, int qhigh, int low, int high, int pos){
    if(qlow>high || qhigh<low)
        return INT_MAX;
    if(qlow<=low && qhigh>=high)
        return st[pos];
    else{
        int mid = (low+high)/2;
        return min(query(st,qlow,qhigh,low,mid,2*pos),query(st,qlow,qhigh,mid+1,high,2*pos+1));
    }
}

void pointUpdate(int a[], int st[], int uI, int uV, int low, int high, int pos){
    if(uI>high || uI<low)
        return;
    if(low==high){
        a[low] = uV;
        st[pos] = uV;
    }
    else{
        int mid = (low+high)/2;
        pointUpdate(a,st,uI,uV,low,mid,2*pos);
        pointUpdate(a,st,uI,uV,mid+1,high,2*pos+1);
        st[pos] = min(st[2*pos],st[2*pos+1]);
    }
}

int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int st[4*n];
    build_tree(a,st,1,n,1);
    int q,l,r,type;
    cin>>q;
    while(q--){
        cin>>type;
        if(type==1){
            cin>>l>>r;
            cout<<query(st,l,r,1,n,1)<<"\n";
        }
        else{
            int val;
            cin>>l>>val;
            pointUpdate(a,st,l,val,1,n,1);
        }
    }
}

*/

/*    //Segment Tree revision range update;

#include<bits/stdc++.h>
using namespace std;

void build_tree(int a[], int st[], int low, int high, int pos){
    if(low==high)
        st[pos] = a[low];
    else{
        int mid = (low+high)/2;
        build_tree(a,st,low,mid,2*pos);
        build_tree(a,st,mid+1,high,2*pos+1);
        st[pos] = min(st[2*pos],st[2*pos+1]);
    }
}

int query(int st[], int qlow, int qhigh, int low, int high , int pos){
    if(qlow>high || qhigh<low)
        return INT_MAX;
    if(qlow<=low && qhigh>=high)
        return st[pos];
    else{
        int mid = (low+high)/2;
        return min(query(st,qlow,qhigh,low,mid,2*pos),query(st,qlow,qhigh,mid+1,high,2*pos+1));
    }
}


void rangeUpdate(int a[], int st[], int qlow, int qhigh , int val, int low, int high, int pos){
    if(qlow>high || qhigh<low)
        return;
    if(low==high){
        a[low] = val;
        st[pos] = val;
    }
    else{
        int mid = (low+high)/2;
        rangeUpdate(a,st,qlow,qhigh,val,low,mid,2*pos);
        rangeUpdate(a,st,qlow,qhigh,val,mid+1,high,2*pos+1);
        st[pos] = min(st[2*pos],st[2*pos+1]);
    }
}
int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int st[4*n+1];
    build_tree(a,st,1,n,1);
    int q,type,l,r,val;
    cin>>q;
    while(q--){
        cin>>type;
        if(type==1){
            cin>>l>>r;
            cout<<query(st,l,r,1,n,1)<<"\n";
        }
        else{
            cin>>l>>r>>val;
            rangeUpdate(a,st,l,r,val,1,n,1);
        }
    }
}
*/

/*      //Segment Tree with range Update add value lazy

#include<bits/stdc++.h>
using namespace std;

void build_tree(int a[], int st[], int low, int high, int pos){
    if(low==high)
        st[pos] = a[low];
    else{
        int mid = (low+high)/2;
        build_tree(a,st,low,mid,2*pos);
        build_tree(a,st,mid+1,high,2*pos+1);
        st[pos] = min(st[2*pos],st[2*pos+1]);
    }
}

void lazyUpdate(int st[], int lazy[], int qlow, int qhigh, int val, int low, int high, int pos){
    if(lazy[pos]!=0){
        st[pos] += lazy[pos];
        if(low!=high){
            lazy[2*pos] += lazy[pos];
            lazy[2*pos+1] += lazy[pos];
        }
        lazy[pos]=0;
    }
    if(qlow>high || qhigh<low)
        return;
    if(qlow<=low && qhigh>=high){
        //complete overlap;
        //Thus add value;
        st[pos] += val;
        if(low!=high){
            lazy[2*pos]+=val;
            lazy[2*pos+1]+=val;
        }
        return;
    }
    else{
        int mid = low + (high-low)/2;
        lazyUpdate(st,lazy,qlow,qhigh,val,low,mid,2*pos);
        lazyUpdate(st,lazy,qlow,qhigh,val,mid+1,high,2*pos+1);
        st[pos] = min(st[2*pos],st[2*pos+1]);
    }
}

int query(int st[], int lazy[], int qlow, int qhigh, int low, int high, int pos){
    //cout<<"low,high,pos,lazy[pos] = "<<low<<" "<<high<<" "<<pos<<" "<<lazy[pos]<<"\n";
    if(lazy[pos]!=0){
        st[pos] += lazy[pos];
        if(low!=high){
            lazy[2*pos]+=lazy[pos];
            lazy[2*pos+1]+=lazy[pos];
        }
        lazy[pos]=0;
    }
    if(qlow>high|| qhigh<low)
        return INT_MAX;
    if(qlow<=low && qhigh>=high){
        return st[pos];
    }
    else{
        int mid = (low+high)/2;
        return min(query(st,lazy,qlow,qhigh,low,mid,2*pos),query(st,lazy,qlow,qhigh,mid+1,high,2*pos+1));
    }
}

int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int st[4*n+1];
    int lazy[4*n+1]={0};
    build_tree(a,st,1,n,1);
    cout<<"Tree built\n";
    int q,type,l,r,val;
    cin>>q;
    while(q--){
        cin>>type;
        if(type==1){
            cin>>l>>r;
            cout<<query(st,lazy,l,r,1,n,1)<<"\n";;
        }
        else{
            cin>>l>>r>>val;
            lazyUpdate(st,lazy,l,r,val,1,n,1);
        }
    }
}

*/

/*    //Segment Tree with range update modify value lazy;

#include<bits/stdc++.h>
using namespace std;

void build_tree(int a[], int st[], int low, int high, int pos){
    if(low==high)
        st[pos] = a[low];
    else{
        int mid = (low+high)/2;
        build_tree(a,st,low,mid,2*pos);
        build_tree(a,st,mid+1,high,2*pos+1);
        st[pos] = min(st[2*pos],st[2*pos+1]);
    }
}

void lazyUpdate(int st[], int lazy[], int qlow, int qhigh, int val, int low, int high, int pos){
    if(lazy[pos]!=0){
        st[pos] = lazy[pos];
        if(low!=high){
            lazy[2*pos] = lazy[pos];
            lazy[2*pos+1] = lazy[pos];
        }
        lazy[pos]=0;
    }
    if(qlow>high || qhigh<low)
        return;
    if(qlow<=low && qhigh>=high){
        st[pos] = val;
        if(low!=high){
            lazy[2*pos]=val;
            lazy[2*pos+1]=val;
        }
        return;
    }
    else{
        int mid = (low+high)/2;
        lazyUpdate(st,lazy,qlow,qhigh,val,low,mid,2*pos);
        lazyUpdate(st,lazy,qlow,qhigh,val,mid+1,high,2*pos+1);
        st[pos] = min(st[2*pos], st[2*pos+1]);
    }
}

int query(int st[], int lazy[], int qlow, int qhigh, int low, int high, int pos){
    if(lazy[pos]!=0){
        st[pos] = lazy[pos];
        if(low!=high){
            lazy[2*pos] = lazy[pos];
            lazy[2*pos+1] = lazy[pos];
        }
        lazy[pos]=0;
    }
    if(qlow>high || qhigh<low)
        return INT_MAX;
    if(qlow<=low && qhigh>=high)
        return st[pos];
    else{
        int mid = (low+high)/2;
        return min(query(st,lazy,qlow,qhigh,low,mid,2*pos),query(st,lazy,qlow,qhigh,mid+1,high,2*pos+1));
    }
}

int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int st[4*n+1];
    int lazy[4*n+1]={0};
    build_tree(a,st,1,n,1);
    int q,type,l,r,val;
    cin>>q;
    while(q--){
        cin>>type;
        if(type==0){
            cin>>l>>r;
            cout<<query(st,lazy,l,r,1,n,1)<<"\n";
        }
        else{
            cin>>l>>r>>val;
            lazyUpdate(st,lazy,l,r,val,1,n,1);
        }
    }
}
*/

/*    //Merge Sort Tree; scanint() doesnot work here;

#include<bits/stdc++.h>
#define gc getchar_unlocked
using namespace std;

typedef long long ll;


void scanint(ll &x){
    register ll c=gc();
    x=0;
    for(; (c<48 || c>57); c=gc());
    for(;c>47 && c<58;c=gc()){
        x = (x<<1) + (x<<3) + c-48;
    }

}

void build_tree(ll a[], vector<ll>st[], int low, int high , int pos){
    if(low==high){
        st[pos].push_back(a[low]);
        return;
    }
    else{
        int mid = (low+high)/2;
        build_tree(a,st,low,mid,2*pos);
        build_tree(a,st,mid+1,high,2*pos+1);
        merge(st[2*pos].begin(),st[2*pos].end(),st[2*pos+1].begin(),st[2*pos+1].end(),back_inserter(st[pos]));
    }
}

int query(vector<ll>st[],int qlow, int qhigh , ll k, int low, int high, int pos){
    if(qlow>high || qhigh<low)
        return 0;
    if(qlow<=low && qhigh>=high){
        return st[pos].size() - (upper_bound(st[pos].begin(),st[pos].end(),k)-st[pos].begin());
    }
    else{
        int mid = (low+high)/2;
        return query(st,qlow,qhigh,k,low,mid,2*pos) + query(st,qlow,qhigh,k,mid+1,high,2*pos+1);
    }
}

int main(){
    cin.tie(0);
    ll n;
    scanint(n);
    //cin>>n;
    ll a[n+1];
    for(int i=1;i<=n;i++){
        //cin>>a[i];
        scanint(a[i]);
    }
    vector<ll>st[4*n+1];
    build_tree(a,st,1,n,1);
    int q;
    int ans=0;
    cin>>q;
    ll l,r;
    ll k;
    while(q--){
        cin>>l>>r>>k;
        l^=ans;
        r^=ans;
        k^=ans;
        if(l<1)
            l=1;
        if(r>n)
            r=n;
        ans = query(st,l,r,k,1,n,1);
        cout<<ans<<"\n";
    }
}

*/

/*    //Policy Based Data Structures; -     //https://rextester.com/CZCKJ97572
https://rextester.com/SAPF59253
    //https://rextester.com/CZCKJ97572
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
int main(){
    cout<<1;
}
*/

/*    //CodeChef GIVEAWAY - Policy Based data structures;

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define gc getchar_unlocked
using namespace std;
using namespace __gnu_pbds;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
//typedef long long int;

typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> pbds;
vector<pbds>st(2000006);

void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

void build_tree(int a[], int low, int high, int pos){
    if(low==high)
        st[pos].insert(a[low]);
    else{
        int mid = (low+high)/2;
        build_tree(a,low,mid,2*pos);
        build_tree(a,mid+1,high,2*pos+1);
        for(auto it= st[2*pos].begin();it!= st[2*pos].end();it++)
              st[pos].insert(*it);
        for(auto it= st[2*pos+1].begin();it!= st[2*pos+1].end();it++)
            st[pos].insert(*it);
    }

}

void update( int a[] , int index, int val, int low, int high, int pos){
    st[pos].erase(st[pos].find(a[index]));
    st[pos].insert(val);
    if(low!=high){
        int mid = (low+high)/2;
        if(index<=mid){
            update(a,index,val,low,mid,2*pos);
        }
        else
            update(a,index,val,mid+1,high,2*pos+1);
    }
    else
        a[index] = val;
}

int query( int qlow, int qhigh, int c, int low, int high, int pos){
    if(qlow>high || qhigh<low)
        return 0;
    if(qlow<=low && qhigh>=high)
        return (int)st[pos].size() - (int)st[pos].order_of_key(c);
    else{
        int mid = (low+high)/2;
        return query(qlow,qhigh,c,low,mid,2*pos) + query(qlow,qhigh,c,mid+1,high,2*pos+1);
    }
}

int main(){
    //fast;
    int n;
    scanint(n);
    int a[n+1];
    for(int i=1;i<=n;i++)
        scanint(a[i]);
    build_tree(a,1,n,1);
    int q;
    scanint(q);
    while(q--){
        int type,l,r,c;
        scanint(type);
        if(type==0){
            scanint(l);scanint(r);scanint(c);
            cout<<query(l,r,c,1,n,1)<<"\n";
        }
        else{
            scanint(l);scanint(c);
            update(a,l,c,1,n,1);
        }
    }


}

*/


