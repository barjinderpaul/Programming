#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;

struct node{
    lli firstMax=0,secondMax=0;
};

node combine(node left, node right , lli pos){
    node retnode;
    //cout<<"pos = "<<pos<<"\n";
    //cout<<left.firstMax<<" "<<left.secondMax<<"\n";
    //cout<<right.firstMax<<" "<<right.secondMax<<"\n";
   /* if(left.firstMax >= right.firstMax){
        retnode.firstMax = left.firstMax;
        if(left.secondMax>= right.firstMax && left.firstMax!=left.secondMax)
            retnode.secondMax = left.secondMax;
        else
            retnode.secondMax = right.firstMax;
    }
    else{
        //right.firstMax>= left.firstMax
        retnode.firstMax = right.firstMax;
        if(right.secondMax>=left.firstMax && right.firstMax!=right.secondMax)
            retnode.secondMax = right.secondMax;
        else
            retnode.secondMax = left.firstMax;
    }*/
    if(left.firstMax>right.firstMax)
        retnode.firstMax = left.firstMax;
    else
        retnode.firstMax=right.firstMax;
    if(retnode.firstMax == right.firstMax){
        if(left.firstMax>right.secondMax)
            retnode.secondMax = left.firstMax;
        else
            retnode.secondMax = right.secondMax;
    }
    else{
        if(right.firstMax>left.secondMax)
            retnode.secondMax = right.firstMax;
        else
            retnode.secondMax = left.secondMax;
    }
    return retnode;
}

void build_tree(lli a[], node st[], lli low, lli high, lli pos){
    if(low==high){
        st[pos] = ((node){a[low],0});
    }
    else{
        lli mid = (low+high)/2;
        build_tree(a,st,low,mid,2*pos);
        build_tree(a,st,mid+1,high,2*pos+1);
        st[pos] = combine(st[2*pos],st[2*pos+1],pos);

    }
}

void pointUpdate(node st[] , lli uI, lli uV, lli low, lli high, lli pos){
    if(uI>high || uI<low)
        return;
    if(low==high){
        st[pos] = ((node){uV,0});
    }
    else{
        lli mid = (low+high)/2;
        pointUpdate(st,uI,uV,low,mid,2*pos);
        pointUpdate(st,uI,uV,mid+1,high,2*pos+1);
        st[pos] = combine(st[2*pos],st[2*pos+1],pos);
        return;
    }
}

void displayTree(node st[], lli n){
    cout<<"\n=====Displaying Tree =======\n";
    for(int i=1;i<=4*n+1;i++){
        cout<<"i = "<<i<<"\n";
        cout<<st[i].firstMax<<" "<<st[i].secondMax<<"\n";

    }
}

node RSMQ(node st[], lli qlow, lli qhigh, lli low, lli high, lli pos){
    if(qlow>high || qhigh<low){
        node p;
        return p;
    }
    if(qlow<=low && qhigh>=high){
        //cout<<"Returning = "<<low<<" "<<high<<" "<<pos<<"\n";
        //cout<<st[pos].firstMax + st[pos].secondMax<<"\n";
        return st[pos];

    }
        else{
        lli mid = (low+high)/2;
        //return combine(RSMQ(st,qlow,qhigh,low,mid,2*pos),RSMQ(st,qlow,qhigh,mid+1,high,2*pos+1),pos);
        //cout<<"Last Returning = "<<low<<" "<<high<<" "<<pos<<"\n";
        /*node left = RSMQ(st,qlow,qhigh,low,mid,2*pos);
        node right = RSMQ(st,qlow,qhigh,mid+1,high,2*pos+1);
        node ans = combine(left,right,pos);
        return ans;*/
        return combine(RSMQ(st,qlow,qhigh,low,mid,2*pos),RSMQ(st,qlow,qhigh,mid+1,high,2*pos+1),pos);
    }
}

int main(){
    fast;
    lli n,q,l,r;
    cin>>n;
    lli a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    node st[4*n+1];
    build_tree(a,st,1,n,1);
    //displayTree(st,n);
    cin>>q;
    char type;
    while(q--){
        cin>>type>>l>>r;
        if(type=='Q'){
            node ans = RSMQ(st,l,r,1,n,1);
            //cout<<"displaying ans values = "<<ans.firstMax<<" "<<ans.secondMax<<"\n";
            cout<<ans.firstMax+ans.secondMax<<"\n";
        }
        else{
            pointUpdate(st,l,r,1,n,1);
            //displayTree(st,n);
        }
    }
}
