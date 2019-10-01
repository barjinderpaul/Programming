#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef int64_t lli;
int main(){
    fast;
    string s;
    cin>>s;
    int n=s.length();
    cout<<"n = "<<n<<"\n";
    int j=0;
    char a[n+1];
    for(int i=1;i<=n;i++){
        a[i]=s[j];
        j++;
    }
    int i;
    string b="bear";
    int nBears=0,total=0;
    for(i=1;i<=n;i++){
        if(a[i]=='b'){
            int t=i,flag=0;
            for(int k=0;k<4;k++){
                if(a[t]!=b[k]){
                    flag=1;
                    break;
                }
                else
                    t++;
            }
            if(flag==0){
                t-=1;
                cout<<"matched till i-t = "<<i<<" "<<t<<"\n";
                total+=1;
                total+=(n-t);
                int mul = i-1-nBears;
                int rem = n-t+1;
                total+=(rem*mul);
                nBears++;
            }

        }
    }
    cout<<total;

}
