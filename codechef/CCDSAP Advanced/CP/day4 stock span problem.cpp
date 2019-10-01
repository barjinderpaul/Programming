#include<bits/stdc++.h>
using namespace std;

void calSpans(int bars[], int spans[], int n){
    stack<int>s;
    s.push(0);
    spans[0]=1;
    for(int i=1;i<n;i++){
        while(!s.empty() && bars[s.top()]<=bars[i])
            s.pop();
        if(s.empty())
            spans[i] = i+1;
        else
            spans[i] = i - s.top();
        s.push(i);
    }
}

int main(){
    int n;
    cin>>n;
    int bars[n];
    for(int i=0;i<n;i++)
        cin>>bars[i];
    int spans[n];
    calSpans(bars,spans,n);
    cout<<"span array\n";
    for(int i=0;i<n;i++)
        cout<<spans[i]<<" ";
}
