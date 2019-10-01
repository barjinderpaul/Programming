#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	int q;
	cin>>q;
	for(int i = 1;i<=q;i++){
		int x,y;
		cin>>x>>y;
	//	cout<<"a[x-1] = " <<a[x-1]<< " a[x+1] = "<<a[x+1]<<endl;
		a[x-1] = a[x-1] + y - 1;
		a[x+1] = a[x+1] + a[x] - y;
		a[x] = 0;
	//	cout<<"after performing" <<endl;
	//	for(int i=1;i<=n;i++)
	//	cout<<a[i]<<endl;
	}
	for(int i=1;i<=n;i++)
		cout<<a[i]<<endl;
}
