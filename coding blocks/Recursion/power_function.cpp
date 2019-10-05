#include<iostream>
using namespace std;


//Number of recursive calls = b steps
int aRaiseToPowerb(int a, int b){
    if(b==0){
        return 1;
    }
    return a*aRaiseToPowerb(a,b-1);
}

//Number of recursive calls = log2(b)
int aRaiseToPowerbEfficient(int a, int b){
    if(b==0){
        return 1;
    }
    int smallAns = aRaiseToPowerbEfficient(a,b/2);
    smallAns *= smallAns;
    if(b&1){
        return a*smallAns;
    }
    else{
        return smallAns;
    }
}

int main(){ 
    int a,b;
    cin>>a>>b;
    cout<<aRaiseToPowerb(a,b)<<"\n";

    cout<<aRaiseToPowerbEfficient(a,b)<<"\n";

}