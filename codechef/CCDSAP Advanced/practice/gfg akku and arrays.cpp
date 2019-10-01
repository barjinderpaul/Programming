#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;

struct node{
  lli both=0,inc=0,dec=0,equal=0,mn,mx;
};

node build_tree(lli a[], node st[], lli low, lli high, lli pos){
    //cout<<"pos = "<<pos<<"\n";
    if(low==high)
        st[pos]=((node){0,0,0,0,a[low],a[low]});
    else{
        lli mid = (low+high)/2;
        build_tree(a,st,low,mid,2*pos);
        build_tree(a,st,mid+1,high,2*pos+1);
        if(st[2*pos].inc==1 || st[2*pos+1].inc==1)
            st[pos].inc=1;
        if(st[2*pos].dec==1 || st[2*pos+1].dec==1)
            st[pos].dec=1;
        if(st[2*pos].mx > st[2*pos+1].mn)
            st[pos].dec=1;
        if(st[2*pos+1].mx > st[2*pos].mn)
            st[pos].inc=1;
        if(st[pos].inc && st[pos].dec)
            st[pos].both = 1;
        if(st[2*pos].mn==st[2*pos+1].mn && st[2*pos].mx==st[2*pos+1].mx)
            st[pos].equal=1;
        st[pos].mn = min(st[2*pos].mn,st[2*pos+1].mn);
        st[pos].mx = max(st[2*pos].mx,st[2*pos+1].mx);

    }
}

void display_tree(node st[], lli n){
    for(int i=1;i<=4*n+1;i++){
        cout<<"Iteration at i = "<<i<<"\n";
        cout<<st[i].both<<"\n";
        cout<<st[i].inc<<"\n";
        cout<<st[i].dec<<"\n";
        cout<<st[i].equal<<"\n";
        cout<<st[i].mn<<"\n";
        cout<<st[i].mx<<"\n";
        cout<<"Ends\n";
    }

}

void pointUpdate(node st[], lli uI, lli uV, lli low, lli high, lli pos){

    if(uI>high || uI<low)
        return;
    if(low==high)
        st[pos] = ((node){0,0,0,0,uV,uV});
    else{
        lli mid = (low+high)/2;
        pointUpdate(st,uI,uV,low,mid,2*pos);
        pointUpdate(st,uI,uV,mid+1,high,2*pos+1);
        if(st[2*pos].inc==1 || st[2*pos+1].inc==1)
            st[pos].inc=1;
        if(st[2*pos].dec==1 || st[2*pos+1].dec==1)
            st[pos].dec=1;
        if(st[2*pos].mx > st[2*pos+1].mn)
            st[pos].dec=1;
        if(st[2*pos+1].mx > st[2*pos].mn)
            st[pos].inc=1;
        if(st[pos].inc && st[pos].dec)
            st[pos].both = 1;
        if(st[2*pos].mn==st[2*pos+1].mn && st[2*pos].mx==st[2*pos+1].mx)
            st[pos].equal=1;
        st[pos].mn = min(st[2*pos].mn,st[2*pos+1].mn);
        st[pos].mx = max(st[2*pos].mx,st[2*pos+1].mx);
    }

}

node RMQ(node st[], lli qlow, lli qhigh, lli low, lli high, lli pos){
    cout<<"low,high,pos = "<<low<<" "<<high<<" "<<pos<<"\n";
    if(qlow>high || qhigh<low){
        return ((node){0,0,0,0,INT_MAX,INT_MIN});
    }
    if(qlow<=low && qhigh>=high){
        cout<<"returning at low,high,pos = "<<low<<" "<<high<<" "<<pos<<"\n";
        if(st[pos].both ||      st[pos].equal)
            cout<<-1<<"\n";
        else if(st[pos].inc==1)
            cout<<0<<"\n";
        else if(st[pos].dec==1)
            cout<<1<<"\n";
        return st[pos];

    }
    else{
        cout<<"in else low,high,pos = "<<low<<" "<<high<<" "<<pos<<"\n";
        lli mid = (low+high)/2;
         RMQ(st,qlow,qhigh,low,mid,2*pos);
         RMQ(st,qlow,qhigh,mid+1,high,2*pos+1);
    }
}
int main(){
    //fast;
    lli t,n,type,q,l,r;
    cin>>t;
    while(t--){
        cin>>n;
        lli a[n+1];
        for(int i=1;i<=n;i++)
            cin>>a[i];
        node st[4*n+1];
        build_tree(a,st,1,n,1);
        //display_tree(st,n);
        cin>>q;
        while(q--){
                cout<<"q= "<<q<<"\n";
            cin>>type>>l>>r;
            if(type==1){
                pointUpdate(st,l,r,1,n,1);
                //display_tree(st,n);
            }
            else{
                node ans = RMQ(st,l,r,1,n,1);
               /*cout<<"\n\nDisplaying ans \n\n";
                cout<<ans.both<<"\n";
                cout<<ans.inc<<"\n";
                cout<<ans.dec<<"\n";
                cout<<ans.equal<<"\n";
                cout<<ans.mn<<"\n";
                cout<<ans.mx<<"\n";

                if(ans.both || ans.equal)
                    cout<<-1<<"\n";
                else if(ans.inc==1)
                    cout<<0<<"\n";
                else if(ans.dec==1)
                    cout<<1<<"\n";*/

            }

        }

    }
}
