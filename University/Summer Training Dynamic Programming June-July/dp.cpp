
/*  //xth Fibonacci
#include<bits/stdc++.h>
using namespace std;
#define maxx 1000001
#define mod 1000000007
int fib[maxx];
int main(){
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<maxx;i++){
        fib[i] = (fib[i-1] + fib[i-2]) > mod ? (fib[i-1] + fib[i-2])%mod  : fib[i-1] + fib[i-2];
    }
    int x;
    cin>>x;
    cout<<"xth fib = "<<fib[x];
}

*/

//    //Ways To decode string interviewbit;

/*
    //Stars Interviewbit
#include<bits/stdc++.h>
using namespace std;
int main(){

}

*/

//Maximum Subarray Sum;

#include<bits/stdc++.h>
using namespace std;


int maxSubarraySum(int arr[], int n){
    int prevSum=arr[0];
    int maxSum = -1;
    for(int i=1;i<n;i++){
        cout<<"prevsum, maxsum = "<<prevSum<<" "<<maxSum<<"\n";
        prevSum = max(arr[i], arr[i]+prevSum);
        maxSum = max(maxSum,prevSum);
    }
    return maxSum;
}


int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<maxSubarraySum(arr,n);

}
