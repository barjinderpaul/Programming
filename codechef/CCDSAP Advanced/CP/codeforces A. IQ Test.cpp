#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef int64_t lli;
int main(){
    fast;
    string s;
    char c[4][4];
    for(int i=0;i<4;i++){
        cin>>s;
        int j=0;
        for(int k=0;k<4;k++){
            c[i][k]=s[j];
            j++;
        }
    }

    /*cout<<"matrix = \n";
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<"\n";
    }*/
    //cout<<"\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int h=0,d=0;
            /*cout<<"Square\n";
            cout<<c[i][j]<<" "<<c[i][j+1]<<"\n";
            cout<<c[i+1][j]<<" "<<c[i+1][j+1]<<"\n";*/
            if(c[i][j]=='#')
                h++;
            else
                d++;
            if(c[i][j+1]=='#')
                h++;
            else
                d++;
            if(c[i+1][j]=='#')
                h++;
            else
                d++;
            if(c[i+1][j+1]=='#')
                h++;
            else
                d++;
           // cout<<"h ,d = "<<h<<" "<<d<<"\n";
            if( (h==3 && d==1) || (d==3 &&h==1) || (h==4 && d==0) || (d==4 &&h==0) ){
            cout<<"YES";
            return 0;
        }
        }

    }
    cout<<"NO";

}
