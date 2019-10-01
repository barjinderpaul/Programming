#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef int64_t lli;
int main(){
    fast;
    lli n,m;
    char ch;
    int coloured=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>ch;
            if(ch=='C' || ch=='M' || ch=='Y')
                coloured=1;
        }
    }

    coloured==1?cout<< "#Color":cout<<"#Black&White";


}
