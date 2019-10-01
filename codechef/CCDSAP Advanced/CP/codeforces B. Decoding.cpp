#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef int64_t lli;
int main(){
    fast;
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n==1 || n==2){
        cout<<s;
        return 0;
    }
    deque<char>dq;
    if(s.length()%2==0){
        dq.push_back(s[0]);
        for(int i=1;i<s.length();i++){
            if(i%2!=0)
                dq.push_back(s[i]);
            else
                dq.push_front(s[i]);
        }
        while(!dq.empty()){
            char ch = dq.front();
            cout<<ch;
            dq.pop_front();
        }
    }
    else{
        dq.push_back(s[0]);
        for(int i=1;i<s.length();i++){
            if(i%2==0)
                dq.push_back(s[i]);
            else
                dq.push_front(s[i]);
        }
        while(!dq.empty()){
            char ch = dq.front();
            cout<<ch;
            dq.pop_front();
        }

    }

}
