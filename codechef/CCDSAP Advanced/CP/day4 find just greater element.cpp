#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int minArray[n]={-1};
    stack<int>s;
    for(int i=0;i<n;i++){
        if(s.empty() || a[i]<=a[s.top()] )
            s.push(i);
        else{
            while(!s.empty() && a[i]>a[s.top()]){
                minArray[s.top()] = a[i];
                s.pop();
            }
            s.push(i);
        }
    }
    for(int i=0;i<n;i++){
        cout<<minArray[i]<<" ";
    }
}
