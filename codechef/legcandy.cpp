#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	int64_t c;
	cin>>t;
	while(t--){
		cin>>n>>c;
		int a[n],flag=0;
		int64_t rem=c;
		for(int i=0;i<n;i++){
			cin>>a[i];
			c-=a[i];
			if(c<0)
				flag=1;
			else
				flag=0;
		}
		if(flag==0)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
}
