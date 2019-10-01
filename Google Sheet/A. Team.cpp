#include<iostream>
using namespace std;
int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n,p,v,t,count=0;
	cin>>n;
	while(n--){
		int sum=0;
		cin>>p>>v>>t;
		sum = sum+p+v+t;
		if(sum>=2)
			count+=1;
	}
	cout<<count;
}
