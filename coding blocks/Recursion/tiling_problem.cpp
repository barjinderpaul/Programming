#include<iostream>
using namespace std;

int NumberofWays(int n){
    if(n==1 || n==4){
        return n;
    }
    return NumberofWays(n-1) + NumberofWays(n-4);
}

/*Tiling problem for 4xN*/
int main(){
    int n;
    cin>>n;
    cout<<NumberofWays(n);
}