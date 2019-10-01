#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main(){
    fast;
    unordered_map<char,int>charToInt;
    unordered_map<int,char>intToChar;
    char ch[] = {'0','1','2','3','4','5','6','7','8','9'};
    for(int i=0;i<10;i++){
        charToInt[ch[i]]=i;
    }
    intToChar[0]='0';intToChar[1]='1';intToChar[2]='2';intToChar[3]='3';intToChar[4]='4';
    intToChar[5]='5';intToChar[6]='6';intToChar[7]='7';intToChar[8]='8';intToChar[9]='9';
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ps=0;
        for(int i=0;i<s.length();i++){
            ps+=(charToInt[s[i]]);
        }
        //cout<<ps<<"\n";
        int toAdd=0;
        if(ps<=10){
            toAdd = 10-ps;
            toAdd==10?toAdd=0:toAdd=toAdd;
        }
        else{
            int lastDigit = ps%10;
            toAdd = 10-lastDigit;
            toAdd==10?toAdd=0:toAdd=toAdd;
        }
        //cout<<"toAdd = "<<toAdd<<"\n";
        s+=(intToChar[toAdd]);
        cout<<s<<"\n";
        }
}
