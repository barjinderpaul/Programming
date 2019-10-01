#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	uint64_t d,dKids=0,x,iceCreams;
	cin>>n>>x;
	char ch;
	iceCreams=x;
	for(int i=0;i<n;i++){
		cin>>ch;
		cin>>d;
		if(ch=='+'){
			iceCreams+=d;	
		}
		if(ch=='-'){
			if(iceCreams>=d){
				iceCreams-=d;
			}
			else
				dKids+=1;
		}
	}
	cout<<iceCreams<<" "<<dKids;
}
