#include<bits/stdc++.h>
using namespace std;
#define lli long long int 
int main(){
    lli t;
    cin>>t;
    while(t--){
        lli n,firstID,secondTop;
        char character;
        cin>>n>>firstID;
        vector<lli> v;
        for(lli i=1;i<=n;i++){
            cin>>character;
            if(character=='B'){
                firstID = v.back();
                v.pop_back();
                secondTop = v.back();
                v.push_back(firstID);
                v.push_back(secondTop);
            }
            else{
                cin>>firstID;
                v.push_back(firstID);
            }
        }
        cout<<"Player "<<v.back()<<"\n";
    }
    return 0;
}
