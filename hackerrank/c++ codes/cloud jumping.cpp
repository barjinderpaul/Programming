#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int countjumps=0;
    int i=0;
    while(i!=n){
        if(i==n-1)
            break;
        //cout<<"in for i = "<<i<<endl;
        if(a[i]==1)
            continue;
        else{
            if(a[i+2]==0){
          //      cout<<"in if[i+2] i = "<<i<<endl;
                i=i+2;
                countjumps+=1;
            //    cout<<"i = "<<i<<endl;
            }
            else if(a[i+1]==0){
              //  cout<<"in if[i+1] i = "<<i<<endl;
                i=i+1;
                countjumps+=1;
                //cout<<"i = "<<i<<endl;
            }
        }
        //  cout<<"count jumps = "<<countjumps<<endl;
    }
    cout<<countjumps;
}

