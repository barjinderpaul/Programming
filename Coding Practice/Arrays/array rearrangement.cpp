#include<iostream>
using namespace std;
bool found (int a[],int val,int n){
for(int i=0;i<n;i++){
if(a[i]==val){
return true;}
}
return false;
}
int main(){
int a[8]={1,2,3,4,0,7}, n=6, t[8];
for(int i=0;i<=7;i++){
if(found(a,i,6)){
t[i]=1;
}
else{
t[i]=-1;
}
for(int i=0;i<=7;i++){
cout<<t[i]<<" ";
}
}
}
