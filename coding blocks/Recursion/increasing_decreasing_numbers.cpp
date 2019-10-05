#include<iostream>
using namespace std;

void decreasing(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    decreasing(n-1);
    
}

void increasing(int n){
    if(n==0){
        return ;
    }
    increasing(n-1);
    cout<<n<<" ";
}

void decreasing_and_increasing(int n){
    if(n==0){
        return ;
    }
    cout<<n<<" ";
    decreasing_and_increasing(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cin>>n;
    decreasing(n);
    cout<<"\n";
    increasing(n);
    cout<<"\n";
    decreasing_and_increasing(n);
}