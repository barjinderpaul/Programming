#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int countjumps=0;
    int i;
    for(i=0;i<n;i++){
        if(a[i]==1)
            continue;
        else{
            if(a[i+2]==0){
                i=i+2;
                countjumps+=1;
            }
            else if(a[i+1]==0){
                i=i+1;
                countjumps+=1;
            }
        }
    }
    cout<<countjumps;
}

