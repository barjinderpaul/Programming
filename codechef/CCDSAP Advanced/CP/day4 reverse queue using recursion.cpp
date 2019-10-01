#include<bits/stdc++.h>
using namespace std;

void rev(queue<int>&q){
    if(q.empty())
        return;
    else{
        int f = q.front();
        q.pop();
        rev(q);
        //cout<<"f = "<<f<<"\n";
        q.push(f);
        return;
    }
}

void display(queue<int>&q){
    while(!q.empty()){
        int x = q.front();
        cout<<x<<" ";
        q.pop();

    }
}

int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    rev(q);
    display(q);
}
