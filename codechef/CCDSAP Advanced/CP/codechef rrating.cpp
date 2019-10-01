#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
typedef long long int lli;
int main(){
    //fast;
    long long int n,x,type;
    scanf("%llu",&n);
    multiset<lli>ms;
    lli maxSize = n/3;
    int s=0;
    while(n--){
        cin>>type;
        if(type==1){
            cin>>x;
            if(maxSize==ms.size()){
                auto itt = ms.begin();
                if(x>*itt){
                    //cout<<"*itt = "<<*itt<<"\n";
                    ms.erase(itt);
                    ms.insert(x);
                }
            }
            else
                ms.insert(x);
        s++;
        }
        else if(type==2){
            if(ms.size()<3)
                cout<<"No reviews yet\n";
            else{
                auto it = ms.begin();
                cout<<*it<<"\n";

            }
        }
    }


}
