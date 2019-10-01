#include<bits/stdc++.h>
using namespace std;
int main(){
	int n1,n2,k;
	cin>>n1>>n2>>k;
	int *a = new int[n1];
	int *b = new int[n2];
	for(int i=0;i<n1;i++)
		cin>>a[i];
	for(int j=0;j<n2;j++)
		cin>>b[j];
	sort(a,a+n1,greater<int>());
	sort(b,b+n2,greater<int>());
	for(int i=0;i<k;i++){
		if(a[i+1] < b[i]){
			cout<<"sum = "<<a[i+1]+b[i]<<" Pair = "<<a[i+1] <<" , "<<b[i]<<endl;
			continue;
		}
		cout<<"sum = "<<a[i]+b[i]<<" Pair = "<<a[i] <<" , "<<b[i]<<endl;
	}
}
