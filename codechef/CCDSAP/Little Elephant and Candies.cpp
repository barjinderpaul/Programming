#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	uint64_t candies;
	cin>>t;
	while(t--){
		int flag = 0;
		cin>>n>>candies;
		uint64_t a[n];
		for(int i=0;i<n;i++)
			{
				cin>>a[i];
				if(candies>=a[i])
					candies-=a[i];
				else
					flag = 1;
			}
		if(flag == 1)
			cout<<"No"<<endl;
		else
			cout<<"Yes"<<endl;
	}
}
