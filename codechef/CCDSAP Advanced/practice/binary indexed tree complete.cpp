#include<bits/stdc++.h>
using namespace std;

/*  //sum in l-r

Sum between range with binary indexed tree

void update(int bit[], int index, int val, int n){
    while(index<=n){
        bit[index]+=val;
        index+=(index&(-index));
    }
}

int query(int index, int bit[]){
    int sum=0;
    while(index>0){
        sum+=bit[index];
        index-=(index&(-index));
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    int val,a[n+1];
    int bit[n+1]={0};
    for(int i=1;i<=n;i++){
        cin>>val;
        a[i] = val;
        update(bit,i,val,n);
    }
    int q,l,r;
    cin>>q;
    while(q--){
        cin>>l>>r;
        cout<<query(r,bit)-query(l-1,bit)<<"\n";
    }
}

    1 2 3 4 5
    q:
    1 5 = 15
    2 4 = 9
    1 3 =6


*/

/* //Max element in 1-r
 //-------- Max element in range with bit ----------------

void update(int bit[],int index, int val, int n){
    while(index<=n){
        bit[index] = max(bit[index],val);
        index+=(index&(-index));
    }
}

int query(int bit[], int index, int right){
    int m=0;
    while(right>0){
        m = max(bit[right],m);
        right-=(right&(-right));
    }
    return m;
}

int main(){
    int n;
    cin>>n;
    int a[n+1],bit[n+1]={0};
    for(int i=1;i<=n;i++)
        cin>>a[i],update(bit,i,a[i],n);
    int q,l,r;
    cin>>q;
    while(q--){
        cin>>l>>r;
        cout<<query(bit,l,r)<<"\n";
    }
}
*/

/*//Min element in 1-r

// --------- min element in range with gcd ---------------

void update(int bit[], int index, int val, int n){
    while(index<=n){
        bit[index] = min(bit[index],val);
        index+=(index&(-index));
    }
}

int query(int bit[], int index, int n){
    int m = INT_MAX;
    while(index>0){
        m = min(m,bit[index]);
        index-=(index&(-index));
    }
    return m;
}

int main(){
    int n;
    cin>>n;
    int a[n+1],bit[n+1];
    for(int i=1;i<=n;i++)
        bit[i] = INT_MAX;

    for(int i=1;i<=n;i++)
        cin>>a[i],update(bit,a[i],i,n);
    int q,l,r,type;
    cin>>q;
    while(q--){
        cin>>r;
        cout<<query(bit,r,n)<<"\n";
    }
}
*/



