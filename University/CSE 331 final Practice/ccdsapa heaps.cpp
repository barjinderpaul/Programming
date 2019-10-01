#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef int64_t lli;
int main(){
    lli n,val;
    cin>>n;
    vector<lli>v,v1;
    for(int i=0;i<n;i++){
        cin>>val;
        v.push_back(val);
        v1.push_back(val);
    }
    cout<<"Before heap\n";
    for(lli x:v){
        cout<<x<<" ";
    }
    make_heap(v.begin(),v.end());
    cout<<"\nAfter heap, max heap:\n";
    for(lli x:v){
        cout<<x<<" ";
    }
    cout<<"\nAfter heap, min heap:\n";
    make_heap(v1.begin(),v1.end(),greater<lli>());
    for(lli x:v1){
        cout<<x<<" ";
    }
    cout<<"\n";
    cin>>val;
    v.push_back(val);   //adding elements;
    v1.push_back(val);
    push_heap(v.begin(),v.end());
    push_heap(v1.begin(),v1.end(),greater<lli>());

    cout<<"Max = "<<v.front()<<"\n";
    cout<<"Min - "<<v1.front()<<"\n";

    //popping elements;
    cout<<"v[0] = "<<v[0]<<"\n";
    pop_heap(v.begin(),v.end());v.pop_back();
    for(lli x:v){
        cout<<x<<" ";
    }
    cout<<"\nv[0] = "<<v[0]<<"\n";

    pop_heap(v1.begin(),v1.end(),greater<lli>());v1.pop_back();
    for(lli x:v1){
        cout<<x<<" ";
    }
    cout<<"\n";

    //checking heap;
    if(is_heap(v.begin(),v.end()))
        cout<<"Yes\n";
    else
        cout<<"No\n";

    //Parent child relationship;
    for(int i=0;i<n;i++){
         if(2*i+1>=n)
            break;
        else
            cout<<"Parent = "<<v[i]<<"\nLeft child = "<<v[2*i+1]<<" ";
        if(2*i+2>=n)
            break;
        else
            cout<<"Right child = "<<v[2*i+2]<<"\n";
    }

    cout<<"Heaps with pairs\n";
    lli val2;
    vector<pair<lli,lli> >v2;
    for(int i=0;i<n;i++){
        cin>>val>>val2;
        v2.push_back({val,val2});
    }
    make_heap(v2.begin(),v2.end());
    cout<<"v2.size() = "<<v2.size()<<"\n";
    for(auto it : v2){
        cout<<it.first<<" "<<it.second<<"\n";
    }
}
