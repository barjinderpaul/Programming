#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n<=1)
        return n;
    return fib(n-1)+fib(n-2);
}
int poww(int n,int k){      //most efficient is dividing in 2 parts. However, we can divide in several parts as well by checking mod and value to divide
    if(k<=1)
        return n;
    if(k%2==0)
        return poww(n,k/2)*poww(n,k/2);
    else
        return n*poww(n,k/2)*poww(n,k/2);
}
int main(){
    int n;
    cin>>n;
    cout<<"fibonacci "<<fib(n)<<"\n";
    cout<<poww(n,3)<<"\n";
}
