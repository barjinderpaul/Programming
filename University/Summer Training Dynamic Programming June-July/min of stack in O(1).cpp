#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    stack<int>inp,minStack;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(inp.empty()){
            inp.push(a[i]);
        }
        else if(a[i] < inp.top()){
            inp.push(a[i]);
        }
        else{
            inp.push(inp.top());
        }
    }


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

int Solution::solve(vector<vector<int> > &A) {
   int finalMaximum = 0;
   int m = A.size();
   int n = A[0].size();
   int cols = A[0].size();
   vector<vector<int>> pre(n);
   for(int i=0;i<A.size();i++)
    pre[i] = vector<int>(A[i].size(),0);

   for(int j=0;j<n;j++){
       for(int i=0;i<m;i++){
           if(i==0){
               pre[i][j] = A[i][j];
           }
           else{
                if(A[i][j]==0)
                    pre[i][j]=0;
                else
                    pre[i][j] = pre[i-1][j]+1;
           }
       }
   }
   for(int i=0;i<m;i++){
       finalMaximum = max(finalMaximum,getMax(pre[i]));
   }
   return finalMaximum;
}

