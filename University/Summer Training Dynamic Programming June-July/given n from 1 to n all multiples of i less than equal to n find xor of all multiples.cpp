#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x = 1;
    for(int i=2; i*i<=n;i++){
        long long p = pow(i,2);
        if(p>n)
            break;
        x = x^p;
    }
    cout<<x;
}
