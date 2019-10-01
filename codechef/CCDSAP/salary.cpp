#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n],sum=0,min=10001;
		bool equal = false;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
			if(a[i]<min)
				min=a[i];
			if(a[i]!=a[0])
				equal=true;
		}
		if(equal==false)
			cout<<0<<endl;
		else
			cout<<sum-n*min<<endl;
	}
}
