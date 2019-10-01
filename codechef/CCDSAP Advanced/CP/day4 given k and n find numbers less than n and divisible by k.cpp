#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n;
    cin>>n>>k;
    queue<int>q;
    q.push(1);
    while(1){
        int f = q.front();
        q.pop();
        if(f>=n)
            break;
        if(f%k==0)
            cout<<f<<" ";
        int t1 = f*10;
        int t2 = f*10+1;
            q.push(t1);
            q.push(t2);

    }
}
