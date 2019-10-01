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
    //disp mat;
    /*for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                cout<<mat[i][j];
        }
        cout<<"\n";
    }*/
    queue<pair<int,int>>q;
    q.push({0,0});
    while(!q.empty()){
        pair<int,int>f = q.front();
        //cout<<"first count front = "<<f.first<<" "<<f.second<<"\n";
        q.pop();
        if(f.first == n-1 && f.second==n-1){
            if(count+1>m){
                count%=m;
                count++;
            }
            else
                count++;
        }
        else{
            if(f.first+1<n &&  mat[f.first+1][f.second]=='.'){
                //cout<<"pushing = "<<f.first+1<< " "<<f.second<<"\n";
                q.push({f.first+1,f.second});
            }
            if( f.second+1<n && mat[f.first][f.second+1]=='.'){
                //cout<<"pushing = "<<f.first<<" "<<f.second+1<<"\n";
                q.push({f.first,f.second+1});
            }
        }
    }
    //cout<<"count = "<<count<<"\n";
    if(count==0){
        int secondCount=0;
        queue<pair<int,int>>q;
        q.push({0,0});
        mp[0][0]=1;
        while(!q.empty()){
            if(secondCount>1)
                break;
            pair<int,int>f = q.front();
            //cout<<" second front = "<<f.first<<" "<<f.second<<"\n";
            q.pop();
            if(f.first == n-1 && f.second==n-1){
                if(secondCount+1>m){
                    secondCount%=m;
                    secondCount++;
                }
                else
                    secondCount++;
            }
            else{
                if (mp[f.first+1][f.second]==0 &&  f.first+1<n &&  mat[f.first+1][f.second]=='.'){
                    //cout<<"pushing = "<<f.first+1<< " "<<f.second<<"\n";
                    q.push({f.first+1,f.second});
                    mp[f.first+1][f.second]=1;
                }
                if( mp[f.first][f.second+1]==0 && f.second+1<n && mat[f.first][f.second+1]=='.'){
                    //cout<<"pushing = "<<f.first<<" "<<f.second+1<<"\n";
                    q.push({f.first,f.second+1});
                    mp[f.first][f.second+1]=1;
                }
                if(mp[f.first][f.second-1]==0 && f.second-1>=0 && mat[f.first][f.second-1]=='.'){
                    //cout<<"pushing = "<<f.first<<" "<<f.second-1<<"\n";
                    q.push({f.first,f.second-1});
                    mp[f.first][f.second-1]=1;
                }
                if(mp[f.first-1][f.second]==0 && f.first-1>=0 && mat[f.first-1][f.second]=='.'){
                    //cout<<"pushing = "<<f.first-1<<" "<<f.second<<"\n";
                    q.push({f.first-1,f.second});
                    mp[f.first-1][f.second]=1;
                }

            }
        }
        //cout<<"secondCount = "<<secondCount<<"\n";
        secondCount==0?cout<<"INCONCEIVABLE":cout<<"THE GAME IS A LIE";
    }
    else
        count>m?cout<<count%mod:cout<<count;
}
