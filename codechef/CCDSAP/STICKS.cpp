#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		stable_sort(arr,arr+n);
		int i,fm=0,sm=0,flag=0;
		for(i=n-1;i>0;i--){
			if(arr[i]==arr[i-1]){
				fm = arr[i];
				break;
			}
			
		}
		for(int j=i-2;j>0;j--){
			if(arr[j]==arr[j-1]){
				sm = arr[j];
				break;
			}
		}
		if(sm==0||fm==0){
			cout<<-1<<endl;
		}else{
			cout<<fm*sm<<endl;
		}
	}
}
