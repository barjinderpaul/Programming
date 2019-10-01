#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int bef=a[0]-1,aft=1002,count=0;
	for(int i=0;i<n;i++){
		if(i==0){
			if(a[i]-bef==1 && a[i+1]-a[i]==1)
				count+=1;
		}
		if(i==n-1){
			if(a[i]-a[i-1]==1 && aft-a[i]==1)
				count+=1;
		} 
		if(a[i]-a[i-1]==1 && a[i+1]-a[i]==1)
			count+=1;
	}
	cout<<count;	
}
