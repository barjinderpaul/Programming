#include<bits/stdc++.h>
using namespace std;

unordered_map<int,int>nextSmaller;

void nextSmallerElement(int a[], int n){
    stack<int>st;
    st.push(a[0]);
    for(int i=1;i<n;i++){
        int curr = a[i];
        if(st.empty()){
            st.push(a[i]);
            continue;
        }
        if(!st.empty()){
            while(!st.empty() && st.top()>curr ){
                nextSmaller[st.top()] = i;
                st.pop();
            }
        }
        st.push(a[i]);
    }
    while(!st.empty()){
        nextSmaller[st.top()] = n;
        st.pop();
    }
}

void displayNextSmaller(int a[],int n){
    for(auto it : nextSmaller){
        if(it.second == n)
            cout<<"element , nextSmaller = "<<it.first<<" "<<n<<"\n";
        else
            cout<<"element , nextSmaller = "<<it.first<<" "<<a[it.second]<<"\n";
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    //int nextSmaller[n]={0};
    nextSmallerElement(a,n);
    displayNextSmaller(a,n);
}
