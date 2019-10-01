#include<bits/stdc++.h>
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int n;
	std::cin>>n;
	int64_t a[n];
	for(int i=0;i<n;i++)
		std::cin>>a[i];

	std::vector<int64_t> final;
	for(int i=0;i<n;i++){
		int nodiv=0;
		for(int j=0;j<n;i++){
			if(a[j]==a[i])
				continue;
			else{
				if(a[j]%a[i]==0)
				{
					nodiv=1;
					break;
				}
			}
			if(nodiv==1){
				final.push_back(a[i]);
			}
		}
	}
	for(int64_t x : final){
		std::cout<<x<<" ";
	}
}
