/*    //Sum Query with sqrt decomposition

#include<bits/stdc++.h>
using namespace std;

int query(int *a,int *blocks, int l, int r, int rn){
    int ans=0;
    //Solve query for left part, if left is not the whole block; LEFT PART
    while(l!=0 && l<r && l%rn!=0 ){
        ans+=a[l];
        l+=1;
    }
    //Solve the middle part, if we have solved left part and we want to solve middle part;
    while(l+rn<=r){
        int block_id = l/rn;
        ans+=blocks[block_id];
        l+=rn;
    }
    //Solving the right part, if it partial part from right side of the middle;
    while(l<=r){
        ans+=a[l];
        l+=1;
    }
    return ans;

}

void update(int *a, int *blocks, int i, int val,int rn){
    blocks[i/rn]+=(val-a[i]);
    a[i] = val;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    //Operations : 1.Build 2. Update 3. Answer Query
    //Blocks = sqrt(n);
    int rn = sqrt(n);
    int blocks[rn+1] = {0};
    int block_id=-1;
    for(int i=0;i<n;i++){
        if(i%rn==0)
            block_id++;//A new block starts;
        blocks[block_id]+=a[i]; //Filling sum of array elements in blocks;
    }
    for(int i=0;i<=rn;i++)
        cout<<blocks[i]<<" ";
    int q,l,r;
    cin>>q;
    while(q--){
        cin>>l>>r;
        cout<<query(a,blocks,l,r,rn)<<"\n";
    }
    int index,val;
    cin>>index>>val;
    update(a,blocks,index,val,rn);
    cout<<query(a,blocks,2,8,rn);

}


*/

    //SPOJ Giveaway; number of elements greater than k in [l,r]
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;

typedef long long ll;
vector<ll>blocks[700];
const int BLOCKS=700;

ll query(ll a[], ll l, ll r, ll x, ll n, int rn){
    int d = r - l;
    l --, r --, x --;
    int s = 0;
    for( ; l % BLOCKS && l <= r; l ++)
        if(a[l] <= x)
            s ++;
    for( ; l + BLOCKS <= r; l += BLOCKS)
        s += lower_bound(blocks[l / BLOCKS].begin(), blocks[l / BLOCKS].end(), x) - blocks[l / BLOCKS].begin();
    for( ; l <= r; l ++)
        if(a[l] <= x)
            s ++;
    return( d + 1 - s);
}

void update(ll a[],ll index, ll val, ll n, ll rn){
    //updating val at index
    index--;
    int block_number = index/rn;
    ll to_search = a[index];

    //binary searching in block;
    int low = 0, high = rn-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(blocks[block_number][mid] == to_search ){
            blocks[block_number][mid] = val;
            a[index] = val;
            break;
        }
        else if(blocks[block_number][mid]<to_search)
            low = mid + 1;
        else
            high = mid-1;
    }
    sort(blocks[block_number].begin(),blocks[block_number].end());

}

int main(){
    fast;
    ll n,q;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    int rn = sqrt(n);
    int idx=-1; //we start at -1 because when in next loop, when i%rn==0, it will increment idx = 0;
    //cout<<"rn = "<<rn<<"\n";
    for(int i=0;i<n;i++){
        if(i%rn==0)
            idx++;
        blocks[idx].push_back(a[i]);
    }

    for(int i=0;i<=rn;i++){
        sort(blocks[i].begin(),blocks[i].end());
    }

    cin>>q;
    int type;
    ll l,r,k;
    while(q--){
        cin>>type>>l>>r;
        if(type==0){
            cin>>k;
            cout<<query(a,l,r,k,n,rn)<<"\n";
        }
        else
            update(a,l,r,n,rn);
    }


}
