#include<bits/stdc++.h>
#define fast std::ios_base::sync_with_stdio(false);std::cin.tie(NULL);
#define lli long long int 
int main(){
    fast;
    lli t;
    std::cin>>t;
    while(t--){
        lli n,firstID,secondTop;
        char character;
        std::cin>>n>>firstID;
        std::vector<lli> v;
        for(lli i=1;i<=n;i++){
            std::cin>>character;
            if(character=='B'){
                firstID = v.back();
                v.pop_back();
                secondTop = v.back();
                v.push_back(firstID);
                v.push_back(secondTop);
            }
            else{
                std::cin>>firstID;
                v.push_back(firstID);
            }
        }
        std::cout<<"Player "<<v.back()<<"\n";
    }
    return 0;
}
