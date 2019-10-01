//STL
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t-- > 0){
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n); //array sorted;
		cout<<"Increasing order : ";
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		sort(a,a+n,greater<int>());
		cout<<endl<<"Decreasing order :";
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		
		}
}
