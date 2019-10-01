#include<bits/stdc++.h>
using namespace std;
int main(){
    char cv[6] = "12.1";
    if(strtok(cv,"."))
        cout<<strtok(cv,".") - 0;
    else
        cout<<"no";
   
    }
