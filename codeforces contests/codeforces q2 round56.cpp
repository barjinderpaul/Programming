#include<bits/stdc++.h>
using namespace std;
int main(){
	uint64_t n;
	cin>>n;
	uint64_t b[n/2];
	uint64_t a[n],flag=0;
	for(int i=1;i<=n/2;i++)
		cin>>b[i];
	uint64_t k[] = {0,1,2,3,4,5,6,7,8,9};
	for(uint64_t i=1;i<=n/2;i++){
		for(uint64_t j=1;j<=n;j++){
			for(uint64_t v=1;v<=n;v++){
				if(b[i] == k[j]+k[v]){
					if(k[j]>=a[i] && k[v]<a[n-i+1] && flag==1){
						a[i] = k[j];
						a[n-i+1] = k[v];
						
					}

				a[i] = k[j];
				a[n-i+1] = k[v];
				flag=1;
				}
			}
		}
	}
	for(uint64_t c = n;c>=1;c--)
		cout<<a[c]<<" ";
}
