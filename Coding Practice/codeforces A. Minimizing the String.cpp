#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	char a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int flag=0,index;
	for(int i=0;i<n-1;i++){
		//cout<<"val = "<<(int)a[i+1]<<" "<<(int)a[i]<<endl;
		if((int)a[i+1]<(int)a[i])
			{
			//	cout<<"i = "<<i<<endl;
				index=i;
				flag=1;
				break;
				
			}
	}
	if(flag==1){
		//cout<<"if";
		for(int i=0;i<n;i++){
			if(i==index)
				continue;
			cout<<a[i];
		}
	}
	else{
		//cout<<"else";
		for(int i=0;i<n-1;i++)
			cout<<a[i];
	}
}
