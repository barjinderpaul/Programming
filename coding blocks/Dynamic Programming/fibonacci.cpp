#include<iostream>
using namespace std;

int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}

int memo[10000];
int topDownMemoize(int n){
    if(n==1 || n==0){
        return n;
    }
    if(memo[n]!=-1){
        return memo[n];
    }
    int ans = fib(n-1) + fib(n-2);
    memo[n] = ans;
    return ans;

}

int bottomUp(int n){
    int dp[10000];
    dp[0] = 0;dp[1] = 1;
    for(int i = 2;i<=n;++i){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    int n1 = fib(n);
    cout<<n1<<" th fib with recursion = "<<n1<<"\n";
    for(int i=0;i<10000;++i){
        memo[i] = -1;
    }
    int n2 = topDownMemoize(n);
    cout<<n<<" th fibonacci with top down or memoization technique = "<<n2<<"\n";
    int n3 = bottomUp(n);
    cout<<n<<" th fibonacci with bottomUp technique = "<<n3<<"\n";    
}