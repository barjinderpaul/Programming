
/*
    inp = 13;
    We have to reduce inp = 1;
    Total 3 operations :
        1. Divide by 3;
        2. Divide by 2;
        3. Subtract 1 from inp;
    
    Min steps to reduce number to 1;

    Explanation : 
    13;
    S1 = subtract 1 , inp = 12;
    12;
    S2 = Divide by 3, inp = 4;
    4;
    S3 = Divide by 2, inp = 2;
    2;
    S4 = Subtract 1, inp = 1;
    1

    Total Steps = 4;
*/

#include<iostream>
using namespace std;
const int inf = (int)1e9;

int minSteps(int n){
    if(n==1){
        return 0;
    }
    int q1 = inf,q2=inf,q3=inf;
    if(n%3==0){
        q1 = 1 + minSteps(n/3);
    }
    if(n%2==0){
        q2 = 1 + minSteps(n/2);
    }
    q3 = 1 + minSteps(n-1);
    return min(q1,min(q2,q3));
}

int minStepsDP(int n){
    int dp[1000];
    dp[0]=-1;
    dp[1]=0;
    dp[2]=1;
    dp[3]=1;
    for(int i = 4;i<=n;++i){
        int q1 = inf,q2=inf,q3=inf;
        if(n%3==0){
            q1 = 1 + dp[i/3];
        }
        if(n%2==0){
            q2 = 1 + dp[i/2];
        }
        q3 = 1 + dp[i-1];
        dp[i] = min(q1,min(q2,q3));
    }
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    cout<<minSteps(n)<<"\n";
    int minStepsWithDp = minStepsDP(n);
    cout<<"minSteps with DP = "<<minStepsWithDp<<"\n"; 
}