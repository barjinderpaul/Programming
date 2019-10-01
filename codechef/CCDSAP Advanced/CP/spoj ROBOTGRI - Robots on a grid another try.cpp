#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
#define mod 1<<31-1
using namespace std;
typedef long long int lli;


int main(){
    fast;
    lli n,j=0;
    int m = 1<<31-1;
    string s;
    cin>>n;
    int mp[n][n];
    char mat[n][n];
    int count=0;
    for(int i=0;i<n;i++){
        cin>>s;
        for(int j = 0;j<s.length();j++){
            mat[i][j] = s[j];
            mp[i][j]=0;
        }
    }
        int secondCount=0;
        queue<pair<pair<int,int>,int>>q;
        q.push({{0,0},-1});
        mp[0][0]=1;
        while(!q.empty()){
            pair<pair<int,int>,int>f = q.front();
            cout<<" front = "<<f.first.first<<" "<<f.first.second<<" parent = "<<f.second<<"\n";
            q.pop();
            if(f.first.first == n-1 && f.first.second==n-1 && f.second==2){
                if(secondCount+1>m){
                    secondCount%=m;
                    secondCount++;
                }
                else
                    secondCount++;
            }
            else if(f.first.first == n-1 && f.first.second==n-1 && f.second==1){
                if(count+1>m){
                    count%=m;
                    count++;
                }
                else
                    count++;
            }
            else{
                if (mp[f.first.first+1][f.first.second]==0 &&  f.first.first+1<n &&  mat[f.first.first+1][f.first.second]=='.'){
                    cout<<"pushing = "<<f.first.first+1<< " "<<f.first.second<<"\n";
                    if(f.second == -1)
                        q.push({{f.first.first+1,f.first.second},1});
                    else
                        q.push({{f.first.first+1,f.first.second},f.second});
                    mp[f.first.first+1][f.first.second]=1;
                }
                if( mp[f.first.first][f.first.second+1]==0 && f.first.second+1<n && mat[f.first.first][f.first.second+1]=='.'){
                    cout<<"pushing = "<<f.first.first<<" "<<f.first.second+1<<"\n";
                    if(f.second == -1)
                        q.push({{f.first.first,f.first.second+1},1});
                    else
                        q.push({{f.first.first,f.first.second+1},f.second});
                    mp[f.first.first][f.first.second+1]=1;
                }
                if(mp[f.first.first][f.first.second-1]==0 && f.first.second-1>=0 && mat[f.first.first][f.first.second-1]=='.'){
                    cout<<"pushing = "<<f.first.first<<" "<<f.first.second-1<<"\n";
                    if(f.second == -1)
                        q.push({{f.first.first,f.first.second-1},2});
                    else
                        q.push({{f.first.first,f.first.second-1},f.second});
                    mp[f.first.first][f.first.second-1]=1;

                }
                if(mp[f.first.first-1][f.first.second]==0 && f.first.first-1>=0 && mat[f.first.first-1][f.first.second]=='.'){
                    cout<<"pushing = "<<f.first.first-1<<" "<<f.first.second<<"\n";
                    if(f.first.second == -1)
                        q.push({{f.first.first-1,f.first.second},2});
                    else
                        q.push({{f.first.first-1,f.first.second},f.second});
                    mp[f.first.first-1][f.first.second]=1;
                }

            }
        }
        cout<<"first count = "<<count<<"\n";
        cout<<"secondCount = "<<secondCount<<"\n";
        if(count==0)
            secondCount==0?cout<<"INCONCEIVABLE":cout<<"THE GAME IS A LIE";
        else
            count>m?cout<<count%mod:cout<<count;
}
