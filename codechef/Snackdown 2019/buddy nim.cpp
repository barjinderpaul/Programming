#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	uint64_t n,m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		int flag=1;
		uint64_t a[n],b[m];
		uint64_t sum1=0,sum2=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum1+=a[i];
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
			sum2+=b[i];
		}
		if(n==m){
			for(int i=0;i<n;i++){
				if(a[i] == b[i])
					flag = 0;
				else{
					flag = 1;
					break;
				}
			}
		
		if(flag == 0){
			cout<<"Bob"<<endl;
			continue;
			}
		else{
		
			cout<<"Alice"<<endl;
			continue;
			}
			}
		else{
			if(sum2>=sum1){
			cout<<"Alice"<<endl;
			}
			else
				cout<<"Bob"<<endl;
		}
	}
}
