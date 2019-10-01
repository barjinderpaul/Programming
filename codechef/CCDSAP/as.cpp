#include<bits/stdc++.h>
using namespace std;
int main(){
	 int t,k,n;
	cin>>t;
	while(t--){
		cin>>n>>k;
		  int a[n];
		for( int i=1;i<=n;i++)
			cin>>a[i];
		cout<<endl;
		for( int i=1;i<=n;i++)
			cout<<a[i]<<" ";
		stable_sort(a,a+n);
		cout<<"Afer"<<endl;
		for( int i=1;i<=n;i++)
			cout<<a[i]<<" ";
		cout<<"Afefdsr"<<endl;
		  int summ=0;
		cout<<summ<<"sds";
		for( int i=k+1;i<=(n-k);i++){
			cout<<a[i];
			summ+=a[i];

		}
		cout<<"summ"<<summ<<endl;
	}
}
