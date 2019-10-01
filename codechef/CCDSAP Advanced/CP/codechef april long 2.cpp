#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef int64_t lli;
int main(){
    fast;
    lli t,n;
    cin>>t;
    while(t--){
        cin>>n;
        char ch;
        string s;
        cin>>s>>ch;
        int j=0;
        char a[n+1];
        for(int i=1;i<=n;i++){
            a[i]=s[j];
            j++;
        }
        int i;
        LLI nBears=0,total=0;
        int pbIndex=0;
        for(i=1;i<=n;i++){
            if(a[i]==ch){
                int t=i,flag=0;
                if(flag==0){
                    //t-=1;
                    //cout<<"matched till i-t = "<<i<<" "<<t<<"\n";
                    total+=1;
                    //if(i-pbIndex==1)
                      //  total+=1;
                    total+=(n-t);
                    int mul = i-1-pbIndex;
                    int rem = n-t+1;
                    total+=(rem*mul);
                    pbIndex=i;
                }

            }
        }
        cout<<total<<"\n";
    }
}
