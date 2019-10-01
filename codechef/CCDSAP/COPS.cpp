#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,x,y;
	cin>>t;
	while(t--){
		cin>>n>>x>>y;
		int a[n];
		bool h[100];
		for(int i=1;i<=100;i++)
			h[i]=false;
		for(int i=1;i<=n;i++)
			cin>>a[i];
		int product = x*y;
		for(int i=1;i<=n;i++){
			if(a[i]-product > 0){
				cout<<"in upper if"<<endl;
				cout<<"a[i] - prodcut and a[i]"<<a[i]-product<<a[i]<<endl;
				for(int j=(a[i]-product);j<=a[i];j++){
					cout<<"j"<<j<<endl;
					cout<<"in upper if for loop"<<endl;
					h[j]=true;
				}
			}
			else{
				cout<<"in upper else"<<endl;
				for(int z=1;z<=a[i];z++)
					h[z]=true;
			}
			if(a[i]+product<=100){
				cout<<"in lower if"<<endl;
				for(int q=a[i];q<=(a[i]+product);q++)
					h[q] = true;
			}
			else{
				cout<<"in lower else"<<endl;
				for(int m=a[i];m<=100;m++)
					h[m]=true;
			}
		}
		int count=0;
		for(int v=1;v<=100;v++)
			if(h[v]==false)
				cout<<h[v]<<" ";
		cout<<count<<endl;
	}
}
