#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
        int m;
        cin>>m;
        int mat[m][m];
        int sourceX,sourceY,destX,destY;
        int i=0,j=0,val,count=0;
        for(int k=0;k<m*m;k++){
            cin>>val;
            if(val==1){
                sourceX=i;
                sourceY=j;
            }
            if(val==2){
                destX=i;
                destY=j;
            }
            mat[i][j]=val;
            count++;
            if(count==m){
                count=0;
                i++;
                j=0;
            }
            else
                j++;
        }
        int flag=0;
        queue<pair<int,int> >q;
        int visX[21]={0},visY[21]={0};
        q.push({sourceX,sourceY});
        visX[sourceX]=1;visY[sourceY]=1;
        while(!q.empty()){
            pair<int,int>p = q.front();
            int x = p.first;
            int y = p.second;
            q.pop();
            if(visX[x] && visY[y])
                continue;
            if(x==destX && y==destY){
                flag=1;
                break;
            }
            //x=-1, y=0
            if(x-1 >=0 && mat[x-1][y]==3){
                q.push({x-1,y});
            }
            //x=0,y=-1
            if(y-1>=0 && mat[x][y-1]==3)
                q.push({x,y-1});
            //x=1,y=0
            if(x+1<m && mat[x+1][y]==3)
                q.push({x+1,y});
            //x=0,y=1
            if(y+1<m && mat[x][y+1]==3)
                q.push({x,y+1});
        }
        flag==1?cout<<1<<"\n":cout<<0<<"\n";
    }
}
