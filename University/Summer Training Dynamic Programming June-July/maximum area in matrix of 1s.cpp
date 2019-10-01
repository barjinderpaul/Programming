#include<bits/stdc++.h>
using namespace std;
int getMax(vector<int>A);
int solve(vector<vector<int>>A);

int main(){
    int n,val;
    cin>>n;
    vector<vector<int>>v(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int val;
            cin>>val;
            v[i].push_back(val);
        }
    }
    cout<<solve(v);

}


int getMax(vector<int>A){
    stack<int>s;
    int maximum_area = 0;
    int i=0;
    while(i<A.size()){
        if(s.empty() || A[s.top()]<=A[i])
            s.push(i),i++;
        else{
            int top = s.top();s.pop();
            int currArea;
            if(s.empty())
                currArea = A[top]*i;
            else
                currArea = A[top]*(i-s.top()-1);
//            A[top] * (s.empty()?i:i-s.top()-1);
            maximum_area = max(currArea,maximum_area);
        }
    }
    while(!s.empty()){
        int top = s.top();s.pop();
        int currArea;
        if(s.empty())
                currArea = A[top]*i;
        else
        currArea = A[top]*(i-s.top()-1);
        //            A[top] * (s.empty()?i:i-s.top()-1);
        maximum_area = max(currArea,maximum_area);

       }
        return maximum_area;

}

int solve(vector<vector<int> > &A) {
   int finalMaximum = 0;
   vector<vector<int>> pre;
   for(int i=0;i<A.size();i++){
       for(int j=0;j<A.size();j++){
           if(i==0){
               pre[i][j] = A[i][j];
           }
           else{
               if(A[i][j]==0)
                    pre[i][j]=0;
                else
                    pre[i][j] = pre[i-1][j-1]+1;
           }
       }
       int currMax = getMax(A[i]);
       finalMaximum = max(currMax,finalMaximum);
   }
   return finalMaximum;
}
