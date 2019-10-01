#include<bits/stdc++.h>
#define ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long int lli;
using namespace std;
int main(){
    lli t;
    cin>>t;
    while(t--){
        map<char,float>values;
        char ch;
        lli n,val,paraLines;
        cin>>n;
        while(n--){
            cin>>ch>>val;
            values[ch] = val;
        }
        cin>>paraLines;
        string s;
        float sum=0;
        while(paraLines>=0){
            getline(cin,s);
            for(int i=0;i<s.length();i++){
                sum+=(values[s[i]]);
            }
            paraLines--;
        }
        //cout<<sum/100<<"$\n";
        printf("%.2f%c\n",(sum/100),'$');
    }
}
