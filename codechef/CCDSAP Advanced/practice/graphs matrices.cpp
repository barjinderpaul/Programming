#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;
int r,c;
//ES(East and south only)
int dx[] = {0,1};
int dy[] = {1,0};

void checkPath(char mat[][51], int startx, int starty, int destx, int desty, char ch, int &flag){
    if(startx<0 || startx>=r || starty<0 || starty>=r)
        return;
    if(startx==destx && starty==desty)
        flag=1;
    if(mat[startx][starty]==ch)
        return;
    for(int i=0;i<2;i++)
        checkPath(mat,startx+dx[i],starty+dy[i],destx,desty,ch,flag);

}

void printMat(char mat[][51]){
    cout<<"Printing matrix\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++)
            cout<<mat[i][j]<<" ";
        cout<<"\n";
    }
}

int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
        cin>>r;
        char mat[51][51];
        for(int i=0;i<r;i++)
            for(int j=0;j<r;j++)
                cin>>mat[i][j];
        //printMat(mat);
        int startx,starty,destx,desty;
        startx = 0;starty=0;
        destx=r-1;desty=r-1;
        char stop = '0';
        int flag=0;
        checkPath(mat,startx,starty,destx,desty,stop,flag);
        flag==1?cout<<"POSSIBLE\n":cout<<"NOT POSSIBLE\n";
    }
}
