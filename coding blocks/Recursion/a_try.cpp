#include<iostream>
using namespace std;

int fact(int n){
    cout<<n<<" \n";
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}

void print(int n){
    if(n==0){
        return;
    }
    print(n-1);
    cout<<n<<" ";

}

int main(){
    int n=5;
    // cin>>n;
    cout<<fact(n);

    print(5);
}