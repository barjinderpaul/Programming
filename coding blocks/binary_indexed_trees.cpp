//Binary Indexed Trees;

/*    // Range Sum Query with binary_indexed_trees



#include<bits/stdc++.h>
using namespace std;

void update(int *bit, int val, int i, int n){
    while(i<=n){
        bit[i]+=val;
        i+=(i&(-i));
    }
}

int query(int i,int *bit){
    int sum=0;
    while(i>0){
        sum+=bit[i];
        i-=(i&(-i));
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int bit[n+1]={0};
    for(int i=1;i<=n;i++)
        update(bit,a[i],i,n);
    int q,l,r;
    cin>>q;
    while(q--){
        cin>>l>>r;
        cout<<query(r,bit)-query(l-1,bit)<<"\n";
    }
}

*/


/*   //Range Max query using binary_indexed_trees; Max(1-i);
#include<bits/stdc++.h>
using namespace std;

void update(int *bit, int val , int i, int n){
    while(i<=n){
        bit[i] = max(val,bit[i]);
        i+=(i&(-i));
    }
}

int query(int *bit, int i){
    int maximum = -1;
    while(i>0){
        maximum = max(maximum,bit[i]);
        i-=(i&(-i));
    }
    return maximum;
}

int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];

    int bit[n+1]={0};
    for(int i=1;i<=n;i++)
        update(bit,a[i],i,n);

    int q;
    cin>>q;
    int i;
    while(q--){
        cin>>i;
        cout<<query(bit,i)<<"\n";
    }
}

*/

/*    //SPOJ - INVCNT
#include<bits/stdc++.h>
#define maxN 10000001
using namespace std;


void update(int *bit, int index, int val ,  int n){
    while(index<=n){
        bit[index]+=val;
        index+=(index & (-index));
    }
}

int query(int index,int *bit){
    int sum=0;
    while(index>0){
        sum+=(bit[index]);
        index-=(index&(-index));
    }
    return sum;
}

void coordinateCompression(int *a, int n){
    unordered_map<int,int>ump;
    set<int>s;
    for(int i=1;i<=n;i++)
        s.insert(a[i]);
    int index=1;
    for(auto val:s){
        ump[val] = index++;
    }
    for(int i=1;i<=n;i++)
        a[i] = ump[a[i]];
}

int main(){
    int t;
    string s;
    cin>>t;
    while(t--){
        getline(cin,s);
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++)
            cin>>a[i];
        coordinateCompression(a,n);
        long inversions=0;
        int bit[n+1]={0};
        for(int i=n;i>=1;i--){
            inversions+=query(a[i]-1,bit);
            update(bit,a[i],1,n);
        }
        cout<<inversions<<"\n";
    }
}




*/

/*    //SPOJ - UPDATEIT

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;

void update(int *bit, int n, int index, int val){
    while(index<=n){
        //cout<<"in while\n";
        bit[index]+=val;
        index+=(index&(-index));
    }
}

int query(int *bit,int index){
    int sum=0;
    while(index>0){
        sum+=bit[index];
        index-=(index&(-index));
    }
    return sum;
}

int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int bit[n+1]={0};
        int l,r,val;
        while(q--){
            cin>>l>>r>>val;
            l++;r++;
            update(bit,n,l,val);
            //cout<<"updated\n";
            update(bit,n,r+1,-val);
            //cout<<"updated\n";
        }
        int q2,index;
        cin>>q2;
        while(q2--){
            cin>>index;
            index++;
            cout<<query(bit,index)<<"\n";
        }
    }
}

*/

    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    ll n,q;
    struct node{
        int pos,l,r,val;
    };

    void coordinate_compression(ll *arr,int n){
        unordered_map<ll,int>ump;
        set<ll>s;
        int index=1;
        for(int i=1;i<=n;i++){
            s.insert(arr[i]);
        }
        for(auto it:s){
            ump[it] = index++;
        }
        for(int i=1;i<=n;i++)
            arr[i] = ump[arr[i]];
    }

    bool comp(node a, node b) {
        if (a.val == b.val)
            return a.l > b.l;
        return a.val > b.val;
    }

    void update(int* BIT, int n, int idx) {
        while (idx <= n) {
            BIT[idx]++;
            idx += idx & (-idx);
        }
    }

    int query(int* BIT, int idx) {
        int ans = 0;
        while (idx) {
            ans += BIT[idx];

            idx -= idx & (-idx);
        }
        return ans;
    }


    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cin>>n;
        ll arr[n+1];
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        coordinate_compression(arr,n);
        cin>>q;
        node a[n+q+1];
        for (int i = 1; i <= n; ++i) {
            a[i].val = arr[i - 1];
            a[i].pos = 0;
            a[i].l = 0;
            a[i].r = i;
        }
        int l,r,k;
        for(int i=n+1;i<=n+q;i++){
            cin>>l>>r>>k;
            a[i].pos = i - n;
            a[i].val = k;
            a[i].l = l;
            a[i].r = r;
        }
        sort(a + 1, a + n + q + 1, comp);

        int BIT[n + 1];
        memset(BIT, 0, sizeof(BIT));
        int ans[q + 1];
        for (int i = 1; i <= n + q; ++i) {
            if (a[i].pos != 0) {
                int cnt = query(BIT, a[i].r) - query(BIT, a[i].l - 1);
                ans[a[i].pos] = cnt;
            }
            else {
                update(BIT, n, a[i].r);
            }
        }
        for (int i = 1; i <= q; ++i) {
            cout << ans[i] << "\n";
        }


    }

