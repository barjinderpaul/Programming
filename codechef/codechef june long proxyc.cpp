#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main(){
    //fast;
    int t,l;
    string s;
    cin>>t;
    while(t--){
        cin>>l;
        cin>>s;
        float d = s.length();
        //cout<<"d = "<<d<<"\n";
        int present=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='P')
                present++;
        }
        int count=0;
        if(present==0){
            cout<<-1<<"\n";
            continue;
        }
        float attendance = present/d;
        //cout<<attendance<<"\n";
        float perIncrease = 1/d;
        //cout<<"perIncrease = "<<perIncrease<<"\n";
        for(int i=2;i<s.length()-2;i++){
            //cout<<"in loop\n";
            if(attendance>=0.75)
                        break;
           // cout<<"i , s[i] " << i<< " "<<s[i]<<"\n";
            if(s[i]=='A'){
                if( (s[i-1]=='P' || s[i-2]=='P') && (s[i+1]=='P' || s[i+2]=='P') ){
                    count++;
                    present++;
                    attendance = present/d;
                    //cout<<"new att = "<<attendance<<"\n";
                }
            }
        }
        if(attendance<0.75){
            cout<<-1<<"\n";
        }
        else{
            cout<<count<<"\n";
        }
    }

}
