#include<iostream>
using namespace std;

int multiply_without_x(int a, int b){
    cout<<"a, b = "<<a<<" "<<b<<"\n";
    if(b==0){
        return 0;
    }
    if(b<0){
        return -a + multiply_without_x(a,b+1);
    }
    return a + multiply_without_x(a,b-1);
}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<multiply_without_x(a,b);
}