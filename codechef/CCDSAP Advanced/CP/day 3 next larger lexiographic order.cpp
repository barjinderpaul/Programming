#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int i=s.length()-1;
    while(i>=0 && s[i]<=s[i-1])
        i--;
    if(i==0)
        cout<<-1;
    else{
        string newstring="";
        for(int j=0;j<i-1;j++)
            newstring+=s[j];
        cout<<"new string = "<<newstring<<"\n";

        cout<<"s[i] = "<<s[i]<<"\n";
        int k=i;
        char toSwap = s[i-1];

        while(s[k+1]>=toSwap){
            //cout<<"inwhile\n";
            k++;
        }
        cout<<"k = "<<k<<" i = "<<i<<"\n";
        swap(s[k],s[i-1]);
        reverse(s.begin()+i,s.end());
        cout<<"s = "<<s;
    }
}
