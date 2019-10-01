#include<bits/stdc++.h>
using namespace std;
int main(){
	uint64_t t,n,k;
	cin>>t;
	while(t--){
		int flag = 0;
		cin>>n>>k;
		uint64_t a[n],b[n];
		for(uint64_t i=0; i<n;i++)
			cin>>a[i];
		for(uint64_t j=0; j<n;j++)
			cin>>b[j];
		for(uint64_t l=0; l<n;l++)
			{
				if( llabs(a[l] - b[l]) > k )
					{
					//cout<<"a[l] " <<a[l] << " "<<b[l] << " "<<llabs(a[l] - b[l]);
					flag = 1;
					break;
				}
			//	else
							//			cout<<"a[l] " <<a[l] << " "<<b[l] << " "<<abs(a[l] - b[l]);

			}
		if(flag == 0)
				cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}
