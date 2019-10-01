#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef int64_t lli;
int main(){
    fast;
    int n;
    int x=0;
    cin>>n;
    string a="++X",a2="X++",s1="X--",s2="--X";
    while(n--){
        string s;
        cin>>s;
        if(s==a || s==a2)
            x+=1;
        else
            x-=1;
    }
    cout<<x;

}
