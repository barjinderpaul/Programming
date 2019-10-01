#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<string,string> >vp;
        string fname,lname;
        unordered_map<string,int>um;
        for(int i=0;i<n;i++){
            cin>>fname>>lname;
            vp.push_back({fname,lname});
            um[fname]++;
        }
        for(auto it=vp.begin();it!=vp.end();it++){
            if(um[it->first]>1)
                cout<<it->first<<" "<<it->second<<"\n";
            else
                cout<<it->first<<"\n";
        }
    }
}
