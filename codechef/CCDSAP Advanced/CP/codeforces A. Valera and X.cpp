#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef int64_t lli;
int main(){
    fast;
    lli n;
    cin>>n;
    char cMat[n][n];
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        int j=0;
        for(int k=0;k<s.length();k++){
            cMat[i][j]=s[k];
            j++;
        }
    }
    /*for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<cMat[i][j]<<" ";
        cout<<"\n";
    }*/
    int fp=0,lp=n-1,mid=n/2;
    char toMatch = cMat[0][1],diag=cMat[0][0];
    if(toMatch == cMat[0][0]){
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<n;i++){
        if(cMat[i][fp]==toMatch || cMat[i][lp]==toMatch){
            cout<<"NO";
            //cout<<"mathed diagnal";
            return 0;
        }
        if(cMat[i][fp]!=diag || cMat[i][lp]!=diag){
            cout<<"NO";
            //cout<<"diagonal not equal\n";
            return 0;
        }

        for(int j=0;j<n;j++){
            if (j==fp || j==lp)
                continue;
            else if( cMat[i][j]!=toMatch ){
               // cout<<"to match = "<<toMatch<<" "<<"cMat[i][j] = "<<cMat[i][j]<<"\n";
                cout<<"NO\n";
                //cout<<"other chars dont match";
                return 0;
            }
        }
        fp++;
        lp--;

    }
    cout<<"YES";
    return 0;


}
