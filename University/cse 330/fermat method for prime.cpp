#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,flag=0;
	cin>>n;
	int val=n-1;
	for(int i=2;i<n;i++){
		if((int)pow(i,val) % n == 1.0){
			flag=0; q
		}
		else
			flag=1;
	}
	if(flag==0)		
		cout<<"prime";
	else
		cout<<"Not prime";
}
