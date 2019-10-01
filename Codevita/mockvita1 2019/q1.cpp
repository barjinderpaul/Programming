#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;
vector<string>ans;

void genStrings(string s,uint q){
    if(q>s.length())
        return;
    for(uint i=0;i<=s.length()-q;i++){
        string ps="";
        for(uint j=i;j<i+q;j++){
            ps+=s[j];
        }
        ans.push_back(ps);
    }
}

void dispAns(){
    for(auto x:ans){
        cout<<"x = "<<x<<"\n";
    }
}

bool checkAna(string a, string b){
    int f[127]={0};
    for(uint i=0;i<a.length();i++){
        f[(int)a[i]]++;
        f[(int)b[i]]--;
    }
    for(uint i=0;i<127;i++){
        if(f[i])
            return false;
    }
    return true;
}

void checkAns(string s){
    if(ans.size()==0){
        cout<<"NO";
        return;
    }
    for(uint i=0;i<ans.size();i++){
        string toCompare = ans[i];
        if(checkAna(toCompare,s)){
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";
}

int main(){
    string s,ana;
    uint q,r;
    char c;
    cin>>s;
    cin>>q;
    uint l=s.length();
    genStrings(s,q);
    //dispAns();
    if(q>l){
        cout<<"NO";
        return 0;
    }
    while(q--){
        cin>>c>>r;
        if(r>l)
            r-=l;
        /*if(c=='L'){
            i+=r;
            cout<<"left i = "<<i<<"\n";
            ana+=s[i];
        }
        else if(c=='R'){
            i-=r;
            int j = i;
            if(i<0)
                i = l+i;
            cout<<"right i = "<<i<<"\n";
            ana+=s[i];
            //i = (j-=j);
            //i--;
        }*/
        if(c=='L'){
            rotate(s.begin(),s.begin()+r,s.end());
            ana+=s[0];
        }
        else{
            rotate(s.begin(),s.begin()+s.size()-r,s.end());
            ana+=s[0];
        }
    }
    //cout<<"to check is = "<<ana<<"\n";
    checkAns(ana);

}
