/*

Graphs -

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int v,e;
    cin>>v>>e;
    int v1,v2;//undirected graoh;
    int graph[v][v] = {0};
    while(e--){
        cin>>v1>>v2;
        graph[v1-1][v2-1]=1;
        graph[v2-1][v1-1]=1;
    }
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            if (graph[i][j] == 1){
                ,cout<<"connected = "<<i+1<< " "<<j+1<<"\n";
            }
        }
    }
}

