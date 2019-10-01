#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef int64_t lli;
int main(){
    fast;
    lli n,k,num;
    cin>>n>>k;
    lli c=0;
    for(int i=0;i<n;i++){
        cin>>num;
        int a[10]={0};
        while(num){
            int b = num%10;
            a[b]=1;
            num/=10;
        }
        int flag=0;
        for(int i=0;i<=k;i++){
            if(a[i]==0){
                flag=1;
                break;
            }
        }
        if(flag==1)
            continue;
        c++;
    }
    cout<<c<<"\n";
}
