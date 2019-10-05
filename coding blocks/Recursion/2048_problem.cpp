#include<iostream>
using namespace std;

char inWords[][10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

void displayInWords(int n){
    if(n==0){
        return;
    }
    displayInWords(n/10);
    cout<<inWords[n%10]<<" ";
}

int main(){
    int n;
    cin>>n;
    displayInWords(n);
}