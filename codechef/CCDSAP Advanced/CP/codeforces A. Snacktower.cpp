#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef int64_t lli;
int main(){
    fast;
    lli n;
    cin>>n;
    lli a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    lli visited[n+1]={0},maxx=n;
    int i;
    for(i=0;i<n;i++){
        if(a[i]!=maxx){
            while(a[i]!=maxx){
                cout<<"\n";
                visited[a[i]] = 1;
                i++;
            }
            i--;
        }
        else{
            cout<<maxx<<" ";
            maxx--;
            while(visited[maxx]==1){
                cout<<maxx<<" ";
                maxx--;
            }
            cout<<"\n";
        }
    }
    while(visited[maxx]==1){
                cout<<maxx<<" ";
                maxx--;
    }
}
